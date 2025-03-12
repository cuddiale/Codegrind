// Creare un timer che conta fino a 10 utilizzando setInterval:

let contatore = 1;

const intervallo = setInterval(function () {
  console.log(contatore);

  if (contatore === 10) {
    clearInterval(intervallo);
  }

  contatore++;
}, 1000);
