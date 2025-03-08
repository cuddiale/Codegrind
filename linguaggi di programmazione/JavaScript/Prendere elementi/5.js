// Ottenere tutti gli elementi che corrispondono a un selettore CSS e nasconderli.

const elementi = document.querySelectorAll(".mioElemento");
elementi.forEach((elemento) => {
  elemento.style.display = "none";
});
