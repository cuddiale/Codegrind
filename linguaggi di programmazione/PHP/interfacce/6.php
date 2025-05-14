<!-- Creare un'interfaccia "SchedaAudio" con un metodo "riproduciAudio()". Creare una classe "SchedaAudioUSB" che implementa l'interfaccia e implementa il metodo "riproduciAudio()" per riprodurre l'audio attraverso una scheda audio USB. -->

<?php
interface SchedaAudio {
    public function riproduciAudio();
}

class SchedaAudioUSB implements SchedaAudio {
    public function riproduciAudio() {
        return "L'audio viene riprodotto attraverso la scheda audio USB.";
    }
}

$schedaAudio = new SchedaAudioUSB();
echo $schedaAudio->riproduciAudio();
?>