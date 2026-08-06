const menu = document.getElementById("menu");
const menuBtn = document.querySelector(".menuBtn");
const closeBtn = document.querySelector(".closeBtn");


function openMenu( )
{
       menu.style.display= "block";
       menuBtn.style.display = 'none'
       closeBtn.style.display = "block";

}

function closeMenu()
{
       menu.style.display= "none";
       menuBtn.style.display = 'block'
       closeBtn.style.display = "none";

}