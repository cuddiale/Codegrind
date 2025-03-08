// Aggiungere un event listener al passaggio del mouse fuori da un elemento:

const elemento = document.getElementById("mioElemento");
elemento.addEventListener("mouseout", function () {
  console.log("Il mouse è uscito dall'elemento!");
});
