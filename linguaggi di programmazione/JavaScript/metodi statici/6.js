// Creare una classe con un metodo statico che confronti due stringhe ignorando la differenza tra maiuscole e minuscole.

class Stringhe {
  static confronta(s1, s2) {
    return s1.toLowerCase() === s2.toLowerCase();
  }
}

console.log(Stringhe.confronta("Ciao", "ciao")); // true
console.log(Stringhe.confronta("Ciao", "Mondo")); // false
