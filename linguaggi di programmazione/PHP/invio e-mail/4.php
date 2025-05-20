<!-- Utilizzare PHPMailer per inviare un'email con un allegato. -->

<?php
use PHPMailer\PHPMailer\PHPMailer;
use PHPMailer\PHPMailer\Exception;

require 'vendor/autoload.php';

$mail = new PHPMailer(true);

try {
    $mail->setFrom('mittente@example.com', 'Mittente');
    $mail->addAddress('destinatario@example.com');
    $mail->Subject = 'Email con allegato';
    $mail->Body    = 'Questo è un messaggio di prova con un allegato.';

    $mail->addAttachment('/path/to/file.txt');

    $mail->send();
    echo 'Email inviata con successo.';
} catch (Exception $e) {
    echo 'Errore nell\'invio dell\'email: ', $mail->ErrorInfo;
}
?>