// Salvare un oggetto JSON in un file locale:

const oggetto = { nome: "Mario", cognome: "Rossi", eta: 30 };
const jsonStringa = JSON.stringify(oggetto);
const file = new Blob([jsonStringa], { type: "application/json" });
const url = URL.createObjectURL(file);
const link = document.createElement("a");
link.href = url;
link.download = "dati.json";
link.click();
