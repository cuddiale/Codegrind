<!-- Inviare un'email semplice utilizzando la funzione `mail()` in modo sequenziale. -->

<?php
$to = "destinatario@example.com";
$subject = "Email di prova";
$message = "Questo è un messaggio di prova.";
$headers = "From: mittente@example.com";

if(mail($to, $subject, $message, $headers)) {
    echo "Email inviata con successo.";
} else {
    echo "Errore nell'invio dell'email.";
}
?>