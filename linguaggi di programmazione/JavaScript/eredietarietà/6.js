// Creare una classe "Animale" con metodo "verso". Successivamente, creare una classe "Gatto" che erediti dalla classe "Animale" e sovrascriva il metodo "verso" per restituire il verso del gatto.

class Animale {
  verso() {
    console.log("Sconosciuto");
  }
}

class Gatto extends Animale {
  verso() {
    console.log("Miao!");
  }
}

const gatto = new Gatto();
gatto.verso();
