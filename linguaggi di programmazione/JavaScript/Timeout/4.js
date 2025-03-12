// Creare un effetto di animazione che fa apparire gradualmente un elemento dopo 1 secondo utilizzando setTimeout:

const elemento = document.getElementById("elemento");
elemento.style.opacity = "0";

setTimeout(function () {
  elemento.style.opacity = "1";
}, 1000);
