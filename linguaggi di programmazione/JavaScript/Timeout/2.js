// Creare un timer che mostra un messaggio dopo un certo numero di secondi utilizzando setTimeout:

const tempo = 5;

setTimeout(function () {
  console.log(`È passato ${tempo} secondi`);
}, tempo * 1000);
