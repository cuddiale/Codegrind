// Aggiungere un valore predefinito per l'età nel costruttore della classe `Persona`.

class Persona {
  constructor(nome, eta = 18) {
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

const persona1 = new Persona("Mario");
const persona2 = new Persona("Luigi", 25);

console.log(persona1.getNome(), persona1.getEta()); // Mario 18
console.log(persona2.getNome(), persona2.getEta()); // Luigi 25
