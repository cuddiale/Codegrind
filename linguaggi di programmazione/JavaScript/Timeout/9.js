// Visualizzare un messaggio di notifica per 3 secondi utilizzando setTimeout:

const notifica = document.getElementById("notifica");
notifica.style.display = "block";

setTimeout(function () {
  notifica.style.display = "none";
}, 3000);
