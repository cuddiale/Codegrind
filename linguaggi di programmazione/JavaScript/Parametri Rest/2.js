// Creare una funzione che concatena un numero variabile di stringhe.

function concatena(...stringhe) {
  return stringhe.join(" ");
}

console.log(concatena("Ciao", "mondo", "!")); // "Ciao mondo !"
console.log(concatena("JavaScript", "è", "fantastico")); // "JavaScript è fantastico"
