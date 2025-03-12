// Utilizzare await con una funzione asincrona per ottenere dati da un file:

async function leggiFile(file) {
  const fileReader = new FileReader();

  return new Promise(function (resolve, reject) {
    fileReader.onload = function (event) {
      resolve(event.target.result);
    };

    fileReader.onerror = function () {
      reject("Errore nella lettura del file");
    };

    fileReader.readAsText(file);
  });
}

const fileInput = document.getElementById("file-input");
const file = fileInput.files[0];

async function esegui() {
  try {
    const contenuto = await leggiFile(file);
    console.log(contenuto);
  } catch (errore) {
    console.log(errore);
  }
}

esegui();
