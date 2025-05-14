<!-- Dichiarare una classe "Utente" con una proprietà "username" accessibile solo dalla classe stessa. -->

<?php
class Utente {
    private $username;

    public function setUsername($username) {
        $this->username = $username;
    }

    public function getUsername() {
        return $this->username;
    }
}

$utente = new Utente();
$utente->setUsername("mario_123");
echo "Username: " . $utente->getUsername();
?>
