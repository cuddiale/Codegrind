// Creare un cronometro che registra il tempo trascorso e lo mostra in formato "mm:ss" utilizzando setInterval:

let minuti = 0;
let secondi = 0;

const intervallo = setInterval(function () {
  secondi++;

  if (secondi === 60) {
    minuti++;
    secondi = 0;
  }

  console.log(
    `${minuti.toString().padStart(2, "0")}:${secondi
      .toString()
      .padStart(2, "0")}`
  );
}, 1000);
