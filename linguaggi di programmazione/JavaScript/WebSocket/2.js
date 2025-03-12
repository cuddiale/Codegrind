// Inviare un messaggio al server WebSocket e ricevere una risposta.

const socket = new WebSocket("ws://echo.websocket.org");

socket.addEventListener("open", function () {
  socket.send("Ciao, server!");
});

socket.addEventListener("message", function (event) {
  console.log("Messaggio ricevuto:", event.data);
});
