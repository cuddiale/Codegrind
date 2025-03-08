// Aggiungere un event listener al focus su un campo di input:

const input = document.getElementById("mioInput");
input.addEventListener("focus", function () {
  console.log("Hai dato il focus all'input!");
});
