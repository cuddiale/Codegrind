// Ottenere elementi per tag e aggiungere loro una classe.
const elementi = document.getElementsByTagName("p");
for (let i = 0; i < elementi.length; i++) {
  elementi[i].classList.add("mioStile");
}
