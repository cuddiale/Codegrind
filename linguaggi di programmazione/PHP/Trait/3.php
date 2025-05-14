<!-- Gestire i conflitti tra metodi di due trait utilizzando `insteadof`. -->

<?php
trait A {
    public function messaggio() {
        echo "Messaggio da A";
    }
}

trait B {
    public function messaggio() {
        echo "Messaggio da B";
    }
}

class Test {
    use A, B {
        A::messaggio insteadof B;
    }
}

$test = new Test();
$test->messaggio(); // Output: Messaggio da A
?>