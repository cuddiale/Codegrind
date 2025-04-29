// Scrivi un programma che accetta un numero intero da 1 a 4 e utilizza un blocco 'switch' per selezionare una figura geometrica corrispondente (cerchio, quadrato, triangolo, rettangolo). Stampa il risultato a schermo.

Console.Write("Inserisci un numero da 1 a 4: ");
int numero = int.Parse(Console.ReadLine());
string figura;
switch (numero)
{
    case 1:
        figura = "Cerchio";
        break;
    case 2:
        figura = "Quadrato";
        break;
    case 3:
        figura = "Triangolo";
        break;
    case 4:
        figura = "Rettangolo";
        break;
    default:
        figura = "Figura non riconosciuta";
        break;
}
Console.WriteLine("La figura corrispondente è: " + figura);