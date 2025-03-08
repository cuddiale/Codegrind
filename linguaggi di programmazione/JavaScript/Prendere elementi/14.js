// Ottenere tutti gli elementi che hanno un determinato attributo e aggiungere loro una classe.

const elementiConAttributo = document.querySelectorAll("[data-mioAttributo]");
elementiConAttributo.forEach((elemento) => {
  elemento.classList.add("miaClasse");
});
