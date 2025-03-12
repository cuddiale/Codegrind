// Implementare una logica di riconnessione automatica per un WebSocket quando la connessione viene chiusa.

let socket;

function connect() {
  socket = new WebSocket("ws://echo.websocket.org");

  socket.addEventListener("open", function () {
    console.log("Connessione aperta");
  });

  socket.addEventListener("close", function () {
    console.log("Connessione chiusa, riconnessione in corso...");
    setTimeout(connect, 1000);
  });

  socket.addEventListener("error", function (event) {
    console.error("Errore:", event);
  });

  socket.addEventListener("message", function (event) {
    console.log("Messaggio ricevuto:", event.data);
  });
}

connect();
