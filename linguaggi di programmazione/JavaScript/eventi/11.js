// Aggiungere un event listener al cambio di valore di un elemento input di tipo range:

const inputRange = document.getElementById("mioInputRange");
inputRange.addEventListener("input", function () {
  console.log("Il valore del range è cambiato:", inputRange.value);
});
