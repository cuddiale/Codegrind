// Cambiare il bordo e il margine interno di tutti gli elementi con una determinata classe:

const elementi = document.getElementsByClassName("mioElemento");
for (let i = 0; i < elementi.length; i++) {
  elementi[i].style.border = "2px solid red";
  elementi[i].style.padding = "10px";
}
