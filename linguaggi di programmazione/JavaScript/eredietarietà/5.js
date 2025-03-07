// Creare una classe "Veicolo" con metodo "accelera". Successivamente, creare una classe "Automobile" che erediti dalla classe "Veicolo" e abbia un metodo "suonaClacson" oltre al metodo "accelera".

class Veicolo {
  accelera() {
    console.log("Veicolo in accelerazione...");
  }
}

class Automobile extends Veicolo {
  accelera() {
    console.log("Automobile in accelerazione...");
  }

  suonaClacson() {
    console.log("Beep Beep!");
  }
}

const automobile = new Automobile();
automobile.accelera();
automobile.suonaClacson();
