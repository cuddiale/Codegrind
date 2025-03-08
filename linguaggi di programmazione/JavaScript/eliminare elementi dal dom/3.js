// Rimuovere tutti gli elementi figli di un elemento padre:

const elementoPadre = document.getElementById("elementoPadre");
while (elementoPadre.firstChild) {
  elementoPadre.firstChild.remove();
}
