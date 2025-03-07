// Creare una classe "Veicolo" con proprietà "marca" e "anno di produzione". Successivamente, creare una classe "Automobile" che erediti dalla classe "Veicolo" e abbia una proprietà aggiuntiva "modello".

class Veicolo {
  constructor(marca, anno) {
    this.marca = marca;
    this.anno = anno;
  }
}

class Automobile extends Veicolo {
  constructor(marca, anno, modello) {
    super(marca, anno);
    this.modello = modello;
  }
}

const automobile = new Automobile("Fiat", 2020, "Panda");
console.log(automobile.marca, automobile.anno, automobile.modello);
