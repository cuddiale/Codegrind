// Creare una classe con un metodo statico che generi un ID univoco.

class Utilita {
  static generaIdUnico() {
    return "_" + Math.random().toString(36).substr(2, 9);
  }
}

console.log(Utilita.generaIdUnico()); // Esempio: _5gztq4l8p
console.log(Utilita.generaIdUnico()); // Esempio: _7pd83k9zn
