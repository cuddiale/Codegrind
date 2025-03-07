// Creare una sottoclasse `Studente` che eredita da `Persona` e aggiungere una proprietà `corso`.

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

class Studente extends Persona {
  constructor(nome, eta, corso) {
    super(nome, eta);
    this.corso = corso;
  }

  getCorso() {
    return this.corso;
  }
}

const studente = new Studente("Mario", 20, "Informatica");
console.log(studente.getNome()); // Mario
console.log(studente.getEta()); // 20
console.log(studente.getCorso()); // Informatica
