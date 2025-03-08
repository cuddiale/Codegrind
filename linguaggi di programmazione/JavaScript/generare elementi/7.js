// Creare un nuovo elemento `button` e aggiungere un gestore di eventi per il click:

const nuovoPulsante = document.createElement("button");
nuovoPulsante.textContent = "Clicca qui";
nuovoPulsante.addEventListener("click", function () {
  console.log("Il pulsante è stato cliccato");
});
document.body.appendChild(nuovoPulsante);
