var allelem = document.querySelectorAll(".elem");
var fullElem = document.querySelectorAll(".fullElem")
var fullElembutton = document.querySelectorAll(".fullElem .back")


var header = document.querySelector("header");
var feature = document.querySelector(".feature");

allelem.forEach(function (elem) {
       elem.addEventListener('click', function () {

               header.style.display = "none";
        feature.style.display = "none";

              fullElem.forEach(function (page) {
                     page.style.display = "none";
              });

              fullElem[elem.id].style.display = "block";
       })
})

