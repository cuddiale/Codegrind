// Chiudere una connessione WebSocket in modo pulito.

const socket = new WebSocket("ws://echo.websocket.org");

socket.addEventListener("open", function () {
  console.log("Connessione aperta");
  socket.send("Ciao, server!");

  // Chiudere la connessione dopo aver inviato il messaggio
  socket.close(1000, "Chiusura normale");
});

socket.addEventListener("close", function (event) {
  console.log("Connessione chiusa:", event);
});
