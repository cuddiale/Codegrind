// Creare una classe "Triangolo" con proprietà base e altezza, e un metodo per calcolare l'area.

class Triangolo {
  constructor(base, altezza) {
    this.base = base;
    this.altezza = altezza;
  }

  calcolaArea() {
    const area = (this.base * this.altezza) / 2;
    return area;
  }
}

const triangolo = new Triangolo(6, 4);
const area = triangolo.calcolaArea();
console.log("Area del triangolo:", area);
