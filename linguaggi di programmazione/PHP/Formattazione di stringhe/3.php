<!-- Formattare un numero decimale con due cifre decimali utilizzando `number_format`. -->

<?php
$num = 1234.5678;
$numFormattato = number_format($num, 2);
echo $numFormattato; // Output: 1,234.57
?>