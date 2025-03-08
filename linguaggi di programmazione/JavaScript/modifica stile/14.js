// Cambiare il font-size e il colore del testo di tutti gli elementi di un tag specifico:

const elementi = document.getElementsByTagName("h1");
for (let i = 0; i < elementi.length; i++) {
  elementi[i].style.fontSize = "24px";
  elementi[i].style.color = "blue";
}
