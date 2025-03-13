// Gestire diverse eccezioni con messaggi specifici per ciascuna.

function calcola(a, b, operazione) {
  try {
    if (typeof a !== "number" || typeof b !== "number") {
      throw new TypeError("Entrambi gli argomenti devono essere numeri");
    }
    if (operazione === "dividi" && b === 0) {
      throw new RangeError("Divisione per zero non permessa");
    }
    switch (operazione) {
      case "somma":
        return a + b;
      case "sottrai":
        return a - b;
      case "moltiplica":
        return a * b;
      case "dividi":
        return a / b;
      default:
        throw new Error("Operazione non valida");
    }
  } catch (e) {
    console.error(`${e.name}: ${e.message}`);
  }
}

console.log(calcola(10, 2, "somma")); // 12
console.log(calcola(10, 2, "dividi")); // 5
console.log(calcola(10, 0, "dividi")); // RangeError: Divisione per zero non permessa
console.log(calcola(10, "due", "somma")); // TypeError: Entrambi gli argomenti devono essere numeri
console.log(calcola(10, 2, "sbagliato")); // Error: Operazione non valida
