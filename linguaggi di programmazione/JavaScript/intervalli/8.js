// Creare un timer che mostra il tempo trascorso dall'inizio in secondi utilizzando setInterval:

let tempo = 0;

const intervallo = setInterval(function () {
  tempo++;
  console.log("Tempo trascorso:", tempo, "secondi");
}, 1000);
