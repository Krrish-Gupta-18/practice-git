const nav = document.querySelector(".navi");
const ul = document.querySelector(".links");
const body = document.querySelector("body");
const ham = document.querySelector(".ham");

window.addEventListener("scroll", e => {
    if(window.scrollY >= 70) {
        nav.classList.add("nav-active");
    }
    else {
        nav.classList.remove("nav-active");
    }
})

ham.addEventListener("click", e => {
    ul.classList.toggle("link-active");
    if(ham.textContent == "☰") {
        ham.textContent = "✖";
    } else {
        ham.textContent = "☰";
    }
})