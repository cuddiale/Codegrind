// Creare una classe "Prodotto" con proprietà nome, prezzo e un metodo per applicare uno sconto al prezzo.

class Prodotto {
  constructor(nome, prezzo) {
    this.nome = nome;
    this.prezzo = prezzo;
  }

  applicaSconto(scontoPercentuale) {
    const sconto = (this.prezzo * scontoPercentuale) / 100;
    this.prezzo -= sconto;
  }
}

const prodotto = new Prodotto("Televisore", 1000);
console.log("Prezzo originale:", prodotto.prezzo);
prodotto.applicaSconto(20);
console.log("Prezzo scontato:", prodotto.prezzo);
