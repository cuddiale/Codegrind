// Aggiungere un event listener al submit di un modulo:

const modulo = document.getElementById("mioModulo");
modulo.addEventListener("submit", function (event) {
  event.preventDefault();
  console.log("Il modulo è stato inviato!");
});
