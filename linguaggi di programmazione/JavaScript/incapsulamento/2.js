// Utilizzare un `WeakMap` per incapsulare proprietà private.

const privati = new WeakMap();

class ContoBancario {
  constructor() {
    privati.set(this, { saldo: 0 });
  }

  deposita(importo) {
    if (importo > 0) {
      privati.get(this).saldo += importo;
    }
  }

  preleva(importo) {
    if (importo > 0 && privati.get(this).saldo >= importo) {
      privati.get(this).saldo -= importo;
    }
  }

  getSaldo() {
    return privati.get(this).saldo;
  }
}

const conto = new ContoBancario();
conto.deposita(100);
conto.preleva(50);
console.log(conto.getSaldo()); // 50
