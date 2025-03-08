// Rimuovere gli elementi che corrispondono a un selettore CSS:

const elementiDaRimuovere = document.querySelectorAll(".elementoDaRimuovere");
elementiDaRimuovere.forEach(function (elemento) {
  elemento.remove();
});
