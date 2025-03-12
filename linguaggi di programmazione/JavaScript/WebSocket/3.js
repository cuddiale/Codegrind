// Gestire gli errori di connessione WebSocket e loggare il messaggio di errore.

const socket = new WebSocket("ws://invalid.websocket.org");

socket.addEventListener("error", function (event) {
  console.error("Errore di connessione:", event);
});
