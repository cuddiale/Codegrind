// Creare un pulsante che aumenta di 1 ogni volta che viene cliccato utilizzando setInterval:

const pulsante = document.getElementById("pulsante");
let contatore = 0;

pulsante.addEventListener("click", function () {
  contatore++;
});

setInterval(function () {
  console.log(contatore);
}, 1000);
