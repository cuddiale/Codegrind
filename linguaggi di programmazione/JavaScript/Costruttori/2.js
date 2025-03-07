// Aggiungere un metodo `saluta` alla classe `Persona` che restituisce un messaggio di saluto.

class Persona {
  constructor(nome, eta) {
    this.nome = nome;
    this.eta = eta;
  }

  getNome() {
    return this.nome;
  }

  getEta() {
    return this.eta;
  }

  saluta() {
    return `Ciao, mi chiamo ${this.nome} e ho ${this.eta} anni.`;
  }
}

const persona = new Persona("Mario", 30);
console.log(persona.saluta()); // Ciao, mi chiamo Mario e ho 30 anni
