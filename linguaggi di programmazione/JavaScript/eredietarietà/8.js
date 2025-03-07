// Creare una classe "Veicolo" con metodo "avviaMotore". Successivamente, creare una classe "Motocicletta" che erediti dalla classe "Veicolo" e abbia un metodo "guida" oltre al metodo "avviaMotore".

class Veicolo {
  avviaMotore() {
    console.log("Motore avviato.");
  }
}

class Motocicletta extends Veicolo {
  guida() {
    console.log("Guida la motocicletta.");
  }
}

const motocicletta = new Motocicletta();
motocicletta.avviaMotore();
motocicletta.guida();
