// Implementare un ping/pong per verificare la connessione WebSocket.

const socket = new WebSocket("ws://echo.websocket.org");

socket.addEventListener("open", function () {
  console.log("Connessione aperta");
  setInterval(function () {
    socket.send("ping");
  }, 5000);
});

socket.addEventListener("message", function (event) {
  if (event.data === "ping") {
    console.log("Ping ricevuto, rispondo con pong");
    socket.send("pong");
  } else {
    console.log("Messaggio ricevuto:", event.data);
  }
});

socket.addEventListener("close", function () {
  console.log("Connessione chiusa");
});
