let BTN = document.querySelector("button");
let UL = document.querySelector("ul");
let LI = document.querySelector("li");
let INP = document.querySelector("input");

BTN.addEventListener("click", function() {

    let LIST = document.createElement("li");
    LIST.innerText = INP.value;
    UL.appendChild(LIST);
    INP.value = "";

    let DEL = document.createElement("button");
    DEL.innerText = "del";
    DEL.classList.add("btn");

    LIST.appendChild(DEL);
})

UL.addEventListener("click", function(e) {

    if(e.target.nodeName == "BUTTON") {

        e.target.parentElement.remove();
    }
})