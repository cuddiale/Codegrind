// Creare un nuovo elemento `p`, aggiungere del testo al suo interno e aggiungerlo a un elemento padre specifico:

const nuovoParagrafo = document.createElement("p");
nuovoParagrafo.textContent = "Questo è un nuovo paragrafo";
const elementoPadre = document.getElementById("elementoPadre");
elementoPadre.appendChild(nuovoParagrafo);
