/* =========================================
   WEATHERLY WEATHER APP
   WeatherAPI.com
========================================= */


/* =========================================
   API CONFIGURATION
========================================= */

const API_KEY = "2d49354780c9496ca5b73726261908";

const API_URL = "https://api.weatherapi.com/v1/current.json";


/* =========================================
   DOM ELEMENTS
========================================= */

const cityInput = document.getElementById("cityInput");
const searchBtn = document.getElementById("searchBtn");
const locationBtn = document.getElementById("locationBtn");

const weatherContent = document.getElementById("weatherContent");

const loading = document.getElementById("loading");

const errorMessage = document.getElementById("errorMessage");
const errorText = document.getElementById("errorText");


/* =========================================
   WEATHER ELEMENTS
========================================= */

const cityName = document.getElementById("cityName");
const countryName = document.getElementById("countryName");

const temperature = document.getElementById("temperature");
const feelsLike = document.getElementById("feelsLike");

const condition = document.getElementById("condition");

const weatherIcon = document.getElementById("weatherIcon");

const humidity = document.getElementById("humidity");
const wind = document.getElementById("wind");
const visibility = document.getElementById("visibility");

const localTime = document.getElementById("localTime");

const humidityCard = document.getElementById("humidityCard");
const humidityProgress = document.getElementById("humidityProgress");

const windCard = document.getElementById("windCard");
const windDirection = document.getElementById("windDirection");

const pressure = document.getElementById("pressure");

const uvIndex = document.getElementById("uvIndex");
const uvText = document.getElementById("uvText");

const sunrise = document.getElementById("sunrise");
const sunset = document.getElementById("sunset");

const airQuality = document.getElementById("airQuality");
const airQualityText = document.getElementById("airQualityText");

const precipitation = document.getElementById("precipitation");
const cloud = document.getElementById("cloud");

const visibilityBottom =
    document.getElementById("visibilityBottom");

const lastUpdated =
    document.getElementById("lastUpdated");

const gust =
    document.getElementById("gust");


/* =========================================
   PAGE DATE
========================================= */

function updatePageDate() {

    const now = new Date();

    const day = now.toLocaleDateString(
        "en-US",
        {
            weekday: "long"
        }
    );

    const date = now.toLocaleDateString(
        "en-US",
        {
            day: "numeric",
            month: "long",
            year: "numeric"
        }
    );

    document.getElementById("currentDay").textContent =
        day;

    document.getElementById("currentDate").textContent =
        date;
}

updatePageDate();


/* =========================================
   LOADING STATE
========================================= */

function showLoading() {

    loading.classList.add("show");

    weatherContent.style.display = "none";

    errorMessage.classList.remove("show");
}


function hideLoading() {

    loading.classList.remove("show");

    weatherContent.style.display = "grid";
}


/* =========================================
   ERROR
========================================= */

function showError(message) {

    errorText.textContent = message;

    errorMessage.classList.add("show");

    loading.classList.remove("show");

    weatherContent.style.display = "none";
}


/* =========================================
   FETCH WEATHER
========================================= */

async function getWeather(city) {

    if (!city.trim()) {

        showError("Please enter a city name.");

        return;
    }


    showLoading();


    try {

        const url =
            `${API_URL}?key=${API_KEY}&q=${encodeURIComponent(city)}&aqi=yes`;


        const response =
            await fetch(url);


        const data =
            await response.json();


        if (!response.ok) {

            throw new Error(
                data.error?.message ||
                "Unable to get weather information."
            );
        }


        displayWeather(data);


        hideLoading();


    } catch (error) {

        console.error(error);

        showError(
            error.message ||
            "Something went wrong while fetching weather."
        );
    }
}


/* =========================================
   DISPLAY WEATHER
========================================= */

function displayWeather(data) {

    const location = data.location;

    const current = data.current;


    /* =====================================
       LOCATION
    ===================================== */

    cityName.textContent =
        location.name;

    countryName.textContent =
        `${location.region ? location.region + ", " : ""}${location.country}`;


    /* =====================================
       TEMPERATURE
    ===================================== */

    temperature.textContent =
        Math.round(current.temp_c);

    feelsLike.textContent =
        Math.round(current.feelslike_c);


    /* =====================================
       CONDITION
    ===================================== */

    condition.textContent =
        current.condition.text;


    /* WeatherAPI sometimes returns
       //cdn.weatherapi.com
       instead of https
    */

    let iconURL =
        current.condition.icon;

    if (iconURL.startsWith("//")) {

        iconURL =
            "https:" + iconURL;
    }

    weatherIcon.src = iconURL;

    weatherIcon.alt =
        current.condition.text;


    /* =====================================
       BASIC DETAILS
    ===================================== */

    humidity.textContent =
        current.humidity;

    humidityCard.textContent =
        current.humidity;

    humidityProgress.style.width =
        current.humidity + "%";


    wind.textContent =
        Math.round(current.wind_kph);

    windCard.textContent =
        Math.round(current.wind_kph);

    windDirection.textContent =
        `${current.wind_dir} direction`;


    visibility.textContent =
        current.vis_km;

    visibilityBottom.textContent =
        current.vis_km;


    pressure.textContent =
        Math.round(current.pressure_mb);


    /* =====================================
       UV INDEX
    ===================================== */

    uvIndex.textContent =
        current.uv;

    uvText.textContent =
        getUVText(current.uv);


    /* =====================================
       LOCAL TIME
    ===================================== */

    const apiLocalTime =
        new Date(location.localtime);


    localTime.textContent =
        apiLocalTime.toLocaleTimeString(
            "en-US",
            {
                hour: "2-digit",
                minute: "2-digit"
            }
        );


    /* =====================================
       ADDITIONAL WEATHER
    ===================================== */

    precipitation.textContent =
        current.precip_mm;

    cloud.textContent =
        current.cloud;

    gust.textContent =
        Math.round(current.gust_kph);


    /* =====================================
       LAST UPDATED
    ===================================== */

    const updated =
        new Date(current.last_updated);

    lastUpdated.textContent =
        updated.toLocaleTimeString(
            "en-US",
            {
                hour: "2-digit",
                minute: "2-digit"
            }
        );


    /* =====================================
       AIR QUALITY
    ===================================== */

    updateAirQuality(
        current.air_quality
    );


    /* =====================================
       SUNRISE / SUNSET
       
       Current API does not return sunrise
       and sunset directly.
       
       We calculate approximate values
       using a public astronomy API.
    ===================================== */

    getSunTimes(
        location.lat,
        location.lon,
        location.localtime
    );
}


/* =========================================
   UV TEXT
========================================= */

function getUVText(uv) {

    if (uv <= 2) {

        return "Low";
    }

    if (uv <= 5) {

        return "Moderate";
    }

    if (uv <= 7) {

        return "High";
    }

    if (uv <= 10) {

        return "Very high";
    }

    return "Extreme";
}


/* =========================================
   AIR QUALITY
========================================= */

function updateAirQuality(aqi) {

    if (!aqi) {

        airQuality.textContent =
            "N/A";

        airQualityText.textContent =
            "Not available";

        return;
    }


    /*
       WeatherAPI provides:
       us-epa-index

       1 = Good
       2 = Moderate
       3 = Unhealthy for sensitive groups
       4 = Unhealthy
       5 = Very unhealthy
       6 = Hazardous
    */

    const index =
        aqi["us-epa-index"];


    airQuality.textContent =
        index || "N/A";


    const labels = {

        1: "Good quality",

        2: "Moderate",

        3: "Unhealthy for sensitive groups",

        4: "Unhealthy",

        5: "Very unhealthy",

        6: "Hazardous"
    };


    airQualityText.textContent =
        labels[index] ||
        "Air quality information";
}


/* =========================================
   SUNRISE / SUNSET
========================================= */

async function getSunTimes(
    lat,
    lon,
    dateString
) {

    try {

        const date =
            dateString.split(" ")[0];


        const url =
            `https://api.sunrise-sunset.org/json?lat=${lat}&lng=${lon}&date=${date}&formatted=0`;


        const response =
            await fetch(url);


        const data =
            await response.json();


        if (
            data.status !== "OK"
        ) {

            throw new Error(
                "Sun data unavailable"
            );
        }


        const sunriseDate =
            new Date(data.results.sunrise);

        const sunsetDate =
            new Date(data.results.sunset);


        sunrise.textContent =
            sunriseDate.toLocaleTimeString(
                "en-US",
                {
                    hour: "2-digit",
                    minute: "2-digit"
                }
            );


        sunset.textContent =
            sunsetDate.toLocaleTimeString(
                "en-US",
                {
                    hour: "2-digit",
                    minute: "2-digit"
                }
            );


    } catch (error) {

        console.log(
            "Sunrise/sunset error:",
            error
        );

        sunrise.textContent =
            "--:--";

        sunset.textContent =
            "--:--";
    }
}


/* =========================================
   SEARCH BUTTON
========================================= */

searchBtn.addEventListener(
    "click",
    () => {

        const city =
            cityInput.value.trim();

        getWeather(city);
    }
);


/* =========================================
   ENTER KEY
========================================= */

cityInput.addEventListener(
    "keydown",
    (event) => {

        if (event.key === "Enter") {

            const city =
                cityInput.value.trim();

            getWeather(city);
        }
    }
);


/* =========================================
   CURRENT LOCATION
========================================= */

locationBtn.addEventListener(
    "click",
    () => {

        if (!navigator.geolocation) {

            showError(
                "Geolocation is not supported by your browser."
            );

            return;
        }


        showLoading();


        navigator.geolocation.getCurrentPosition(

            async (position) => {

                const lat =
                    position.coords.latitude;

                const lon =
                    position.coords.longitude;


                getWeather(
                    `${lat},${lon}`
                );
            },


            () => {

                showError(
                    "Unable to access your location. Please allow location permission."
                );
            }
        );
    }
);


/* =========================================
   DEFAULT CITY
========================================= */

getWeather("London");