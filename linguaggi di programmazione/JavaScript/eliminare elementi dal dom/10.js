// Rimuovere gli elementi che corrispondono ad una classe tramite querySelector dopo un click di un bottone:

const pulsante = document.getElementById("mioPulsante");
pulsante.addEventListener("click", function () {
  const elementiDaRimuovere = document.querySelectorAll(".elementoDaRimuovere");
  elementiDaRimuovere.forEach(function (elemento) {
    elemento.remove();
  });
});
