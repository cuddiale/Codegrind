// Aggiungere un event listener al tasto destro del mouse su un elemento:

const elemento = document.getElementById("mioElemento");
elemento.addEventListener("contextmenu", function (event) {
  event.preventDefault();
  console.log("Hai cliccato con il tasto destro sull'elemento!");
});
