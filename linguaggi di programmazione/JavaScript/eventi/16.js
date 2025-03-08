// Aggiungere un event listener al tasto premuto sulla tastiera con combinazione di tasti:

document.addEventListener("keydown", function (event) {
  if (event.key === "Control" && event.shiftKey) {
    console.log("Hai premuto Ctrl + Shift sulla tastiera!");
  }
});
