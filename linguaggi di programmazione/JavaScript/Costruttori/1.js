// Creare una classe `Persona` con un costruttore che accetta il nome e l'età, e metodi per ottenere il nome e l'età.

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
}

const persona = new Persona("Mario", 30);
console.log(persona.getNome()); // Mario
console.log(persona.getEta()); // 30
