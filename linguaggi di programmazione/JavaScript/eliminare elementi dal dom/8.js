// Rimuovere un elemento quando si fa scorrere la pagina:

window.addEventListener("scroll", function () {
  const elemento = document.getElementById("mioElemento");
  elemento.remove();
});
