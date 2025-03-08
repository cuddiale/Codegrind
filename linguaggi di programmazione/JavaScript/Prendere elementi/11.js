// Ottenere il primo elemento figlio di un elemento padre e modificare il suo testo.

const elementoPadre = document.getElementById("elementoPadre");
const primoFiglio = elementoPadre.firstElementChild;
primoFiglio.textContent = "Nuovo testo";
