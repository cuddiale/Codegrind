// Ottenere tutti gli elementi che corrispondono a un selettore CSS all'interno di un altro elemento e modificarne il contenuto.

const elementoPadre = document.getElementById("elementoPadre");
const elementiFigli = elementoPadre.querySelectorAll(".mioElemento");
elementiFigli.forEach((elemento) => {
  elemento.textContent = "Nuovo testo";
});
