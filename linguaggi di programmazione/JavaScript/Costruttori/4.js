// Override del metodo `saluta` nella sottoclasse `Studente` per includere il corso di studi nel saluto.

class Persona {
  constructor(nome, eta) {
    this.nome = nome;
    this.eta = eta;
  }

  saluta() {
    return `Ciao, mi chiamo ${this.nome} e ho ${this.eta} anni.`;
  }
}

class Studente extends Persona {
  constructor(nome, eta, corso) {
    super(nome, eta);
    this.corso = corso;
  }

  saluta() {
    return `${super.saluta()} Studio ${this.corso}.`;
  }
}

const studente = new Studente("Mario", 20, "Informatica");
console.log(studente.saluta()); // Ciao, mi chiamo Mario e ho 20 anni. Studio Informatica.
