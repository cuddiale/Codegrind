// Utilizzare la sintassi ES6 per incapsulare proprietà in una classe.

class ContoBancario {
  #saldo = 0; // Proprietà privata

  deposita(importo) {
    if (importo > 0) {
      this.#saldo += importo;
    }
  }

  preleva(importo) {
    if (importo > 0 && this.#saldo >= importo) {
      this.#saldo -= importo;
    }
  }

  getSaldo() {
    return this.#saldo;
  }
}

const conto = new ContoBancario();
conto.deposita(100);
conto.preleva(50);
console.log(conto.getSaldo()); // 50
console.log(conto.#saldo); // SyntaxError: Private field '#saldo' must be declared in an enclosing class
