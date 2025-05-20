<!-- Utilizzare la libreria PHPMailer per inviare un'email semplice utilizzando la programmazione orientata agli oggetti. -->

<?php
use PHPMailer\PHPMailer\PHPMailer;
use PHPMailer\PHPMailer\Exception;

require 'vendor/autoload.php';

$mail = new PHPMailer(true);

try {
    $mail->setFrom('mittente@example.com', 'Mittente');
    $mail->addAddress('destinatario@example.com');
    $mail->Subject = 'Email di prova con PHPMailer';
    $mail->Body    = 'Questo è un messaggio di prova inviato con PHPMailer.';

    $mail->send();
    echo 'Email inviata con successo.';
} catch (Exception $e) {
    echo 'Errore nell\'invio dell\'email: ', $mail->ErrorInfo;
}
?>