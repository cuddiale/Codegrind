// Utilizzare simboli per incapsulare metodi privati all'interno di una classe.

const _calcolaInteressi = Symbol("calcolaInteressi");

class ContoBancario {
  constructor() {
    this.saldo = 0;
  }

  deposita(importo) {
    if (importo > 0) {
      this.saldo += importo;
    }
  }

  preleva(importo) {
    if (importo > 0 && this.saldo >= importo) {
      this.saldo -= importo;
    }
  }

  [_calcolaInteressi]() {
    return this.saldo * 0.05;
  }

  aggiungiInteressi() {
    this.saldo += this[_calcolaInteressi]();
  }

  getSaldo() {
    return this.saldo;
  }
}

const conto = new ContoBancario();
conto.deposita(1000);
conto.aggiungiInteressi();
console.log(conto.getSaldo()); // 1050
console.log(conto[_calcolaInteressi]()); // TypeError: conto[_calcolaInteressi] is not a function
Precedente
Metodi Statici
Successivo
Prendere Elementi