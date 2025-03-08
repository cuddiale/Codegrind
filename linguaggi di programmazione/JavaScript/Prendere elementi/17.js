// Ottenere tutti gli elementi che contengono un determinato testo e aggiungere loro una classe.

const elementiConTesto = document.querySelectorAll(':contains("mioTesto")');
elementiConTesto.forEach((elemento) => {
  elemento.classList.add("miaClasse");
});
