<!-- Creare un'interfaccia "Suonabile" con un metodo "suona()". Creare una classe "Chitarra" che implementa l'interfaccia e implementa il metodo "suona()" per far suonare la chitarra. -->

<?php
interface Suonabile {
    public function suona();
}

class Chitarra implements Suonabile {
    public function suona() {
        return "La chitarra sta suonando!";
    }
}

$chitarra = new Chitarra();
echo $chitarra->suona();
?>