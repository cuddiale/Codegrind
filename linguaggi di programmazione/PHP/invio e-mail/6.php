<!-- Utilizzare PHPMailer per inviare un'email in formato HTML. -->

<?php
use PHPMailer\PHPMailer\PHPMailer;
use PHPMailer\PHPMailer\Exception;

require 'vendor/autoload.php';

$mail = new PHPMailer(true);

try {
    $mail->setFrom('mittente@example.com', 'Mittente');
    $mail->addAddress('destinatario@example.com');
    $mail->Subject = 'Email in HTML';
    $mail->isHTML(true);
    $mail->Body    = '<h1>Messaggio di prova</h1><p>Questo è un messaggio di prova in formato HTML.</p>';

    $mail->send();
    echo 'Email inviata con successo.';
} catch (Exception $e) {
    echo 'Errore nell\'invio dell\'email: ', $mail->ErrorInfo;
}
?>