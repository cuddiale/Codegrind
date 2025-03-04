// Scrivi un programma che confronti le proprietà di due oggetti e stampi sulla console se le proprietà corrispondenti hanno lo stesso valore.

const oggetto1 = {
  nome: "Mario",
  età: 30,
  professione: "Ingegnere",
};

const oggetto2 = {
  nome: "Luigi",
  età: 30,
  professione: "Architetto",
};

for (let chiave in oggetto1) {
  if (oggetto1[chiave] === oggetto2[chiave]) {
    console.log(chiave + " ha lo stesso valore in entrambi gli oggetti.");
  } else {
    console.log(chiave + " ha valori diversi negli oggetti.");
  }
}
