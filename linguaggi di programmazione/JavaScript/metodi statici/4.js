// Creare una classe con un metodo statico che convalidi un indirizzo email.

class Validatore {
  static emailValida(email) {
    const regex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    return regex.test(email);
  }
}

console.log(Validatore.emailValida("test@example.com")); // true
console.log(Validatore.emailValida("test@com")); // false
