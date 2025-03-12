// Cambiare lo stile di un pulsante dopo 1 secondo utilizzando setTimeout:

const pulsante = document.getElementById("pulsante");

setTimeout(function () {
  pulsante.style.backgroundColor = "green";
  pulsante.style.color = "white";
}, 1000);
