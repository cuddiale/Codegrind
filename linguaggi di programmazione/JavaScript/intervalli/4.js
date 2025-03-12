// Simulare un countdown da 5 a 0 utilizzando setInterval:

let contatore = 5;

const intervallo = setInterval(function () {
  console.log(contatore);

  if (contatore === 0) {
    clearInterval(intervallo);
    console.log("Countdown terminato");
  }

  contatore--;
}, 1000);
