// Aggiungere un controllo nel costruttore della classe `Persona` per assicurarsi che l'età sia un numero positivo.

class Persona {
  constructor(nome, eta) {
    if (eta <= 0) {
      throw new Error("L'età deve essere un numero positivo.");
    }
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

try {
  const persona = new Persona("Mario", -5);
} catch (e) {
  console.log(e.message); // L'età deve essere un numero positivo.
}

const personaValida = new Persona("Luigi", 25);
console.log(personaValida.getNome(), personaValida.getEta()); // Luigi 25
