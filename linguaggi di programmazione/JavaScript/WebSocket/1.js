// Stabilire una connessione WebSocket con un server e loggare lo stato della connessione.

const socket = new WebSocket("ws://echo.websocket.org");

socket.addEventListener("open", function (event) {
  console.log("Connessione aperta:", event);
});

socket.addEventListener("close", function (event) {
  console.log("Connessione chiusa:", event);
});

socket.addEventListener("error", function (event) {
  console.error("Errore:", event);
});
