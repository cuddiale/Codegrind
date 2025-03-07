// Creare una classe con un metodo statico che converta gradi Celsius in Fahrenheit.

class Convertitore {
  static celsiusToFahrenheit(celsius) {
    return (celsius * 9) / 5 + 32;
  }
}

console.log(Convertitore.celsiusToFahrenheit(0)); // 32
console.log(Convertitore.celsiusToFahrenheit(100)); // 212
