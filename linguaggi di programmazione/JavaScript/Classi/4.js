// Creare una classe "Libro" con proprietà titolo e autore. Aggiungere un metodo "dettagli" alla classe "Libro" che stampi i dettagli del libro.

class Libro {
  constructor(titolo, autore) {
    this.titolo = titolo;
    this.autore = autore;
  }

  dettagli() {
    console.log(`Titolo: ${this.titolo}, Autore: ${this.autore}`);
  }
}

const libro = new Libro("Il Signore degli Anelli", "J.R.R. Tolkien");
libro.dettagli();
