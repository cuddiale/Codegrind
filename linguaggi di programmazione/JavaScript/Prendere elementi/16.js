// Ottenere tutti gli elementi che hanno una classe specifica all'interno di un elemento e nasconderli.

const elementoPadre = document.getElementById("elementoPadre");
const elementiFigli = elementoPadre.getElementsByClassName("miaClasse");
for (let i = 0; i < elementiFigli.length; i++) {
  elementiFigli[i].style.display = "none";
}
