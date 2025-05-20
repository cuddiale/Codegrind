<!-- Utilizzare PHPMailer per inviare un'email tramite un server SMTP. -->

<?php
use PHPMailer\PHPMailer\PHPMailer;
use PHPMailer\PHPMailer\Exception;

require 'vendor/autoload.php';

$mail = new PHPMailer(true);

try {
    $mail->isSMTP();
    $mail->Host = 'smtp.example.com';
    $mail->SMTPAuth = true;
    $mail->Username = 'username@example.com';
    $mail->Password = 'password';
    $mail->SMTPSecure = 'tls';
    $mail->Port = 587;

    $mail->setFrom('mittente@example.com', 'Mittente');
    $mail->addAddress('destinatario@example.com');
    $mail->Subject = 'Email inviata tramite SMTP';
    $mail->Body    = 'Questo è un messaggio di prova inviato tramite SMTP.';

    $mail->send();
    echo 'Email inviata con successo.';
} catch (Exception $e) {
    echo 'Errore nell\'invio dell\'email: ', $mail->ErrorInfo;
}
?>