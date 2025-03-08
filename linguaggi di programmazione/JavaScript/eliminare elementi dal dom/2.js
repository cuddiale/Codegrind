// Rimuovere un elemento figlio da un elemento padre:

const elementoPadre = document.getElementById("elementoPadre");
const elementoFiglioDaRimuovere =
  elementoPadre.querySelector(".elementoFiglio");
elementoPadre.removeChild(elementoFiglioDaRimuovere);
