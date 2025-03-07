// Aggiungere un metodo statico `creaPersona` che accetta un nome e un'età e restituisce un'istanza della classe `Persona`.

class Persona {
  constructor(nome, eta) {
    this.nome = nome;
    this.eta = eta;
  }

  static creaPersona(nome, eta) {
    return new Persona(nome, eta);
  }

  getNome() {
    return this.nome;
  }

  getEta() {
    return this.eta;
  }
}

const persona = Persona.creaPersona("Mario", 30);
console.log(persona.getNome()); // Mario
console.log(persona.getEta()); // 30
