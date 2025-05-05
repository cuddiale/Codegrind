// Scrivi un metodo chiamato "CalcolaAreaCerchio" che accetta il raggio del cerchio come parametro e restituisce l'area corrispondente.

public static double CalcolaAreaCerchio(double raggio)
{
    double area = Math.PI * raggio * raggio;
    return area;
}

// Esempio di utilizzo del metodo:
double raggio = 5.0;
double areaCerchio = CalcolaAreaCerchio(raggio);
Console.WriteLine("L'area del cerchio con raggio " + raggio + " è: " + areaCerchio);