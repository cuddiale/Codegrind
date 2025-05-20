<!-- Inviare un'email con headers aggiuntivi, inclusi `CC` e `BCC`. -->

<?php
$to = "destinatario@example.com";
$subject = "Email di prova con CC e BCC";
$message = "Questo è un messaggio di prova con CC e BCC.";
$headers = "From: mittente@example.com\r\n";
$headers .= "CC: cc@example.com\r\n";
$headers .= "BCC: bcc@example.com\r\n";

if(mail($to, $subject, $message, $headers)) {
    echo "Email inviata con successo.";
} else {
    echo "Errore nell'invio dell'email.";
}
?>