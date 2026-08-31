
const menu = document.getElementById("menu");
const menuBtn = document.querySelector(".menuBtn");
const closeBtn = document.querySelector(".closeBtn");

function openMenu() {
    menu.style.display = "flex";
    menuBtn.style.display = "none";
    closeBtn.style.display = "block";
}

function closeMenu() {
    menu.style.display = "none";
    menuBtn.style.display = "block";
    closeBtn.style.display = "none";
}


// URL SHORTENER

const urlInput = document.getElementById("urlInput");
const shortenBtn = document.getElementById("shortenBtn");

const resultBox = document.getElementById("resultBox");
const shortUrl = document.getElementById("shortUrl");
const copyBtn = document.getElementById("copyBtn");

const errorMessage = document.getElementById("errorMessage");



shortenBtn.addEventListener("click", async function () {

    const longUrl = urlInput.value.trim();

    errorMessage.textContent = "";

    if (longUrl === "") {

        errorMessage.textContent = "Please enter a URL.";

        resultBox.style.display = "none";

        return;
    }

    try {

        new URL(longUrl);

    } catch {

        errorMessage.textContent = "Please enter a valid URL.";

        resultBox.style.display = "none";

        return;
    }


    try {

        const response = await fetch("http://localhost:3000/shorten", {

            method: "POST",

            headers: {
                "Content-Type": "application/json"
            },

            body: JSON.stringify({
                url: longUrl
            })

        });


        const data = await response.json();

        console.log(data);

        shortUrl.value = data.url;

        resultBox.style.display = "flex";


    } catch (error) {

        errorMessage.textContent =
            "Unable to connect to the server.";

        resultBox.style.display = "none";

        console.log(error);

    }

});



copyBtn.addEventListener("click", function () {

    navigator.clipboard.writeText(shortUrl.value);

    copyBtn.textContent = "Copied!";

    setTimeout(function () {

        copyBtn.textContent = "Copy";

    }, 1500);

});

