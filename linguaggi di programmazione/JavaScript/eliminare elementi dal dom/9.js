// Rimuovere un elemento dopo un determinato evento:

const pulsante = document.getElementById("mioPulsante");
pulsante.addEventListener("click", function () {
  const elementoDaRimuovere = document.getElementById("elementoDaRimuovere");
  elementoDaRimuovere.remove();
});
