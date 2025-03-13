// Utilizzare `try` e `catch` per gestire un'eccezione lanciata da una divisione per zero.

function dividi(a, b) {
  try {
    if (b === 0) {
      throw new Error("Divisione per zero non permessa");
    }
    return a / b;
  } catch (e) {
    console.error(e.message);
  }
}

console.log(dividi(10, 2)); // 5
console.log(dividi(10, 0)); // Divisione per zero non permessa
