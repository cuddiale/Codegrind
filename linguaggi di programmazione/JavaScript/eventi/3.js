// Aggiungere un event listener al cambio di un input di testo:

const input = document.getElementById("mioInput");
input.addEventListener("input", function () {
  console.log("Il valore dell'input è cambiato:", input.value);
});
