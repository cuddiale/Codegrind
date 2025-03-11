// Utilizzare un callback per eseguire un'azione su ogni carattere di una stringa:

const stringa = "Hello, world!";

function stampaCarattere(carattere) {
  console.log(carattere);
}

Array.from(stringa).forEach(stampaCarattere);
