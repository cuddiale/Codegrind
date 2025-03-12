// Cambiare lo sfondo della pagina ogni 5 secondi utilizzando setInterval:

const colori = ["red", "green", "blue"];
let indice = 0;

const intervallo = setInterval(function () {
  document.body.style.backgroundColor = colori[indice];

  indice++;

  if (indice === colori.length) {
    indice = 0;
  }
}, 5000);
