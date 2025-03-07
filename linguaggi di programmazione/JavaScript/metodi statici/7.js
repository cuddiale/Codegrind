// Creare una classe con un metodo statico che trovi il valore massimo in un array.

class ArrayUtil {
  static trovaMax(array) {
    return Math.max(...array);
  }
}

console.log(ArrayUtil.trovaMax([1, 2, 3, 4, 5])); // 5
console.log(ArrayUtil.trovaMax([-10, 0, 10, 20])); // 20
