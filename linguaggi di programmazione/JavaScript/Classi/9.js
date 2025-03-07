// Creare una classe "Utente" con proprietà nome, cognome e un metodo per generare l'indirizzo email.

class Utente {
  constructor(nome, cognome) {
    this.nome = nome;
    this.cognome = cognome;
  }

  generaEmail() {
    const email = `${this.nome.toLowerCase()}.${this.cognome.toLowerCase()}@example.com`;
    return email;
  }
}

const utente = new Utente("Mario", "Rossi");
const email = utente.generaEmail();
console.log("Indirizzo email:", email);
