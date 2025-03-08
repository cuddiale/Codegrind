// Cambiare il colore di sfondo di tutti gli elementi con una determinata classe:

const elementi = document.getElementsByClassName("mioElemento");
for (let i = 0; i < elementi.length; i++) {
  elementi[i].style.backgroundColor = "yellow";
}
