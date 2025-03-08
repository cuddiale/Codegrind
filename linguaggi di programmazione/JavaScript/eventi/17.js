// Aggiungere un event listener alla pressione di un tasto sulla tastiera con controllo dell'input:

const input = document.getElementById("mioInput");
input.addEventListener("keydown", function (event) {
  if (event.key === "Enter") {
    console.log("Hai premuto il tasto Invio sull'input!");
  }
});
