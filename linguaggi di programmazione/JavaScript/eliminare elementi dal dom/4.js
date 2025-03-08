// Rimuovere un elemento al click su di esso:

const elemento = document.getElementById("mioElemento");
elemento.addEventListener("click", function () {
  elemento.remove();
});
