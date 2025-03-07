// Utilizzare i simboli per incapsulare una proprietà all'interno di una classe.

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

  preleva(importo) {
    if (importo > 0 && this[_saldo] >= importo) {
      this[_saldo] -= importo;
    }
  }

  getSaldo() {
    return this[_saldo];
  }
}

const conto = new ContoBancario();
conto.deposita(100);
conto.preleva(50);
console.log(conto.getSaldo()); // 50
console.log(conto[_saldo]); // undefined
