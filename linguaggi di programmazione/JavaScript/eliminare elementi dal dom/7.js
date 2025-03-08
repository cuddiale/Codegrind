// Rimuovere un elemento dopo un determinato intervallo di tempo:

const elemento = document.getElementById("mioElemento");
setTimeout(function () {
  elemento.remove();
}, 3000); // Rimuovi l'elemento dopo 3 secondi
