// Simulare un dialogo con un utente che si chiude automaticamente dopo 3 secondi utilizzando setTimeout:

const dialogo = document.getElementById("dialogo");
dialogo.style.display = "block";

setTimeout(function () {
  dialogo.style.display = "none";
}, 3000);
