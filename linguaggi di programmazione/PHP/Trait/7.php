<!-- Utilizzare più trait in una classe. -->

<?php
trait A {
    public function metodoA() {
        echo "Metodo A";
    }
}

trait B {
    public function metodoB() {
        echo "Metodo B";
    }
}

class Test {
    use A, B;
}

$test = new Test();
$test->metodoA(); // Output: Metodo A
$test->metodoB(); // Output: Metodo B
?>