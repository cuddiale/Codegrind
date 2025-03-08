// Creare un nuovo elemento `input` di tipo testo e aggiungerlo a un modulo:

const nuovoInput = document.createElement("input");
nuovoInput.type = "text";
const modulo = document.getElementById("modulo");
modulo.appendChild(nuovoInput);
