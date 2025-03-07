// Utilizzare le chiusure per incapsulare proprietà private.

function ContoBancario() {
  let saldo = 0;

  return {
    deposita: function (importo) {
      if (importo > 0) {
        saldo += importo;
      }
    },
    preleva: function (importo) {
      if (importo > 0 && saldo >= importo) {
        saldo -= importo;
      }
    },
    getSaldo: function () {
      return saldo;
    },
  };
}

const conto = ContoBancario();
conto.deposita(100);
conto.preleva(50);
console.log(conto.getSaldo()); // 50
