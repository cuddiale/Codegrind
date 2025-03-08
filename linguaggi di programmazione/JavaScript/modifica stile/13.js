// Cambiare la larghezza e l'altezza di tutti gli elementi con una determinata classe:

const elementi = document.getElementsByClassName("mioElemento");
for (let i = 0; i < elementi.length; i++) {
  elementi[i].style.width = "200px";
  elementi[i].style.height = "100px";
}
