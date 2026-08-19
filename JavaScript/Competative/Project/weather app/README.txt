# 🌤️ Weatherly — Weather App

A modern, responsive weather application built with **HTML, CSS, and JavaScript**. Weatherly allows users to search for any city and instantly view its current weather conditions through the **WeatherAPI**.

The interface is designed with a clean, light-colored, eye-catching dashboard inspired by modern weather UI designs.

## ✨ Features

* 🔍 Search weather by city name
* 🌡️ Current temperature
* 🤗 Feels-like temperature
* 🌤️ Weather condition and icon
* 💧 Humidity
* 💨 Wind speed and direction
* 👁️ Visibility
* 🧭 Atmospheric pressure
* ☀️ UV index
* 🌫️ Air quality
* ☁️ Cloud coverage
* 🌧️ Precipitation
* 💨 Wind gust
* 🌅 Sunrise and sunset
* 🕐 Local time of searched city
* 📍 Current-location weather
* ⌨️ Search using the Enter key
* 📱 Fully responsive design
* ⚠️ Error handling for invalid cities/API errors
* ⏳ Loading animation while fetching weather data

## 🛠️ Technologies Used

* **HTML5** — Structure
* **CSS3** — Styling and responsive design
* **JavaScript** — API integration and dynamic UI
* **WeatherAPI** — Weather data
* **Sunrise-Sunset API** — Sunrise and sunset information
* **Google Fonts** — DM Sans and Outfit

## 📁 Project Structure

```text
weather-app/
│
├── index.html
├── style.css
├── script.js
└── README.md
```

## 🚀 Getting Started

### 1. Clone the repository

```bash
git clone https://github.com/yourusername/weatherly.git
```

### 2. Open the project

Open the project folder in VS Code.

### 3. Run the application

You can simply open:

```text
index.html
```

in your browser.

For a better development experience, use the **Live Server** extension in VS Code.

## 🔑 API Configuration

The application uses WeatherAPI's current weather endpoint:

```text
https://api.weatherapi.com/v1/current.json
```

The request format is:

```text
https://api.weatherapi.com/v1/current.json?key=YOUR_API_KEY&q=London&aqi=yes
```

In `script.js`, configure your API key:

```javascript
const API_KEY = "YOUR_API_KEY";

const API_URL =
    "https://api.weatherapi.com/v1/current.json";
```

Then the application sends the selected city to the API:

```javascript
const url =
    `${API_URL}?key=${API_KEY}&q=${encodeURIComponent(city)}&aqi=yes`;
```

## ⚠️ API Key Security

For a learning project, the API key can be placed in `script.js`.

However, remember that frontend JavaScript is visible to users. Therefore, **do not expose a private production API key in frontend code**.

For a production application, use a backend/server-side API route and keep the API key in an environment variable.

Example:

```text
WEATHER_API_KEY=your_secret_key
```

## 🌎 How It Works

The user enters a city:

```text
London
```

JavaScript sends a request to WeatherAPI:

```text
WeatherAPI
     ↓
Current weather data
     ↓
JavaScript
     ↓
Update HTML elements
     ↓
Beautiful weather dashboard
```

## 📊 Weather Information

Weatherly displays information such as:

| Information   | Description                     |
| ------------- | ------------------------------- |
| Temperature   | Current temperature in °C       |
| Feels Like    | Perceived temperature           |
| Condition     | Current weather condition       |
| Humidity      | Relative humidity               |
| Wind          | Current wind speed              |
| Visibility    | Visibility distance             |
| Pressure      | Atmospheric pressure            |
| UV Index      | Current UV level                |
| Air Quality   | Current air-quality index       |
| Precipitation | Current precipitation           |
| Cloud Cover   | Percentage of cloud coverage    |
| Wind Gust     | Maximum current wind gust       |
| Local Time    | Local time of searched location |

## 📍 Current Location

The **Use my location** button uses the browser's Geolocation API.

```javascript
navigator.geolocation.getCurrentPosition(...)
```

The browser obtains the user's latitude and longitude, which are then sent to WeatherAPI.

> Location permission must be allowed in the browser.

## 🎨 UI Design

The interface uses:

* Soft light background
* Rounded cards
* Subtle shadows
* Pastel gradients
* Large temperature display
* Weather illustrations
* Responsive grids
* Hover animations
* Mobile-friendly layout

The design is intended to feel clean and modern rather than like a traditional weather website.

## 📱 Responsive Design

The application supports:

* 💻 Desktop
* 💻 Laptop
* 📱 Tablet
* 📱 Mobile

CSS media queries automatically change the layout for smaller screens.

## 🔮 Future Improvements

Possible upgrades for the next version:

* [ ] 7-day weather forecast
* [ ] Hourly weather forecast
* [ ] Temperature graph
* [ ] Dark mode
* [ ] Favorite cities
* [ ] Recent searches
* [ ] Weather-based background
* [ ] Animated weather icons
* [ ] Celsius/Fahrenheit switch
* [ ] Weather alerts
* [ ] Backend API proxy for API-key security
* [ ] PWA/mobile installation support

## 📄 License

This project is created for **learning and educational purposes**.

Weather data is provided by WeatherAPI.

## 👨‍💻 Author

**Sahil Shaikh**

Built with ❤️ using:

```text
HTML + CSS + JavaScript
```

---

⭐ If you like this project, consider giving the repository a star!
