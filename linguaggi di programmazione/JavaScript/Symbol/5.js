// Utilizzare Symbol per simulare proprietà private in una classe.

const _saldo = Symbol("saldo");

class ContoBancario {
  constructor() {
    this[_saldo] = 0;
  }

  deposita(importo) {
    if (importo > 0) {
      this[_saldo] += importo;
    }
  }

  getSaldo() {
    return this[_saldo];
  }
}

const conto = new ContoBancario();
conto.deposita(100);
console.log(conto.getSaldo()); // 100
console.log(conto._saldo); // undefined
