// Creare una classe "Rettangolo" con proprietà base e altezza, e un metodo per calcolare l'area.

class Rettangolo {
  constructor(base, altezza) {
    this.base = base;
    this.altezza = altezza;
  }

  calcolaArea() {
    const area = this.base * this.altezza;
    return area;
  }
}

const rettangolo = new Rettangolo(5, 3);
const area = rettangolo.calcolaArea();
console.log("Area del rettangolo:", area);
