// Utilizzare getter e setter per incapsulare una proprietà.

class ContoBancario {
  constructor() {
    this._saldo = 0;
  }

  deposita(importo) {
    if (importo > 0) {
      this._saldo += importo;
    }
  }

  preleva(importo) {
    if (importo > 0 && this._saldo >= importo) {
      this._saldo -= importo;
    }
  }

  get saldo() {
    return this._saldo;
  }

  set saldo(valore) {
    if (valore >= 0) {
      this._saldo = valore;
    }
  }
}

const conto = new ContoBancario();
conto.deposita(100);
conto.preleva(50);
console.log(conto.saldo); // 50
conto.saldo = 200;
console.log(conto.saldo); // 200
conto.saldo = -100;
console.log(conto.saldo); // 200 (valore non cambiato)
