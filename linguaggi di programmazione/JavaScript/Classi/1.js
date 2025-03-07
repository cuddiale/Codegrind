// Creare una classe "Persona" con proprietà nome e cognome.Aggiungere un metodo "saluta" che stampi un saluto con il nome e cognome.

class Persona {
  constructor(nome, cognome) {
    this.nome = nome;
    this.cognome = cognome;
  }

  saluta() {
    console.log(`Ciao, sono ${this.nome} ${this.cognome}`);
  }
}

const persona = new Persona("Mario", "Rossi");
persona.saluta();
