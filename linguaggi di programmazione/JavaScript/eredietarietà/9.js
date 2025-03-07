// Creare una classe "Forma" con metodo "calcolaArea". Successivamente, creare una classe "Cerchio" che erediti dalla classe "Forma" e abbia una proprietà "raggio" e implementi il metodo "calcolaArea" per calcolare l'area del cerchio.

class Forma {
  calcolaArea() {
    console.log("Area sconosciuta");
  }
}

class Cerchio extends Forma {
  constructor(raggio) {
    super();
    this.raggio = raggio;
  }

  calcolaArea() {
    const area = Math.PI * Math.pow(this.raggio, 2);
    console.log("Area del cerchio:", area.toFixed(2));
  }
}

const cerchio = new Cerchio(5);
cerchio.calcolaArea();
