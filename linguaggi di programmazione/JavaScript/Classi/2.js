// Creare una classe "Automobile" con proprietà marca e anno di produzione. Aggiungere un metodo "dettagli" alla classe "Automobile" che stampi i dettagli della vettura.

class Automobile {
  constructor(marca, anno) {
    this.marca = marca;
    this.anno = anno;
  }

  dettagli() {
    console.log(`Marca: ${this.marca}, Anno: ${this.anno}`);
  }
}

const automobile = new Automobile("Fiat", 2020);
automobile.dettagli();
