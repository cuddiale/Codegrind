// Scrivi un metodo chiamato "ConvertiCelsiusFahrenheit" che accetta una temperatura in gradi Celsius e restituisce il corrispondente valore in gradi Fahrenheit.

public static double ConvertiCelsiusFahrenheit(double temperaturaCelsius)
{
    double temperaturaFahrenheit = (temperaturaCelsius * 9 / 5) + 32;
    return temperaturaFahrenheit;
}

// Esempio di utilizzo del metodo:
double temperaturaCelsius = 25.0;
double temperaturaFahrenheit = ConvertiCelsiusFahrenheit(temperaturaCelsius);
Console.WriteLine("La temperatura in gradi Fahrenheit è: " + temperaturaFahrenheit);