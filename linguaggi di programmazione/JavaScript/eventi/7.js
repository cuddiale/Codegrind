// Aggiungere un event listener al cambio di selezione di un elemento select:

const select = document.getElementById("mioSelect");
select.addEventListener("change", function () {
  console.log("Hai selezionato una nuova opzione:", select.value);
});
