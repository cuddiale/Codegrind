// Mostrare un messaggio di avviso dopo 4 secondi utilizzando setTimeout:

const messaggio = document.getElementById("messaggio");

setTimeout(function () {
  messaggio.style.display = "block";
}, 4000);
