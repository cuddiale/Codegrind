// Utilizzare await con una funzione asincrona per effettuare una chiamata AJAX:

async function effettuaChiamataAJAX(url, metodo) {
  const xhr = new XMLHttpRequest();

  return new Promise(function (resolve, reject) {
    xhr.open(metodo, url);

    xhr.onload = function () {
      if (xhr.status >= 200 && xhr.status < 300) {
        resolve(xhr.responseText);
      } else {
        reject("Errore nella chiamata AJAX");
      }
    };

    xhr.onerror = function () {
      reject("Errore nella chiamata AJAX");
    };

    xhr.send();
  });
}

async function esegui() {
  try {
    const response = await effettuaChiamataAJAX(
      "https://api.example.com/dati",
      "GET"
    );
    console.log(response);
  } catch (errore) {
    console.log(errore);
  }
}

esegui();
