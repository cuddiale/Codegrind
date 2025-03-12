// Utilizzare le promise per effettuare una chiamata AJAX:

function effettuaChiamataAJAX(url, metodo) {
  return new Promise(function (resolve, reject) {
    const xhr = new XMLHttpRequest();

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

effettuaChiamataAJAX("https://api.example.com/dati", "GET")
  .then(function (response) {
    console.log(response);
  })
  .catch(function (errore) {
    console.log(errore);
  });
