// Creare una classe "Cerchio" con proprietà raggio e un metodo per calcolare l'area

class Cerchio {
  constructor(raggio) {
    this.raggio = raggio;
  }

  calcolaArea() {
    return Math.PI * this.raggio * this.raggio;
  }
}

const cerchio = new Cerchio(5);
const area = cerchio.calcolaArea();
console.log("Area del cerchio:", area);
