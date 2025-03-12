// Inviare e ricevere messaggi JSON tramite un WebSocket.

const socket = new WebSocket("ws://echo.websocket.org");

socket.addEventListener("open", function () {
  const message = { tipo: "saluto", contenuto: "Ciao, server!" };
  socket.send(JSON.stringify(message));
});

socket.addEventListener("message", function (event) {
  const data = JSON.parse(event.data);
  console.log("Messaggio JSON ricevuto:", data);
});
