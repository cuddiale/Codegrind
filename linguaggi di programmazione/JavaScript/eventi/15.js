// Aggiungere un event listener al caricamento di un'immagine:

const immagine = document.getElementById("miaImmagine");
immagine.addEventListener("load", function () {
  console.log("L'immagine è stata caricata!");
});
