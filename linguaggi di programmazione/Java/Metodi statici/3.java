// Creare un metodo statico che converte una temperatura da Celsius a Fahrenheit.

public class ConvertitoreTemperatura {
    public static double celsiusToFahrenheit(double celsius) {
        return (celsius * 9/5) + 32;
    }

    public static void main(String[] args) {
        double celsius = 25;
        double fahrenheit = ConvertitoreTemperatura.celsiusToFahrenheit(celsius);
        System.out.println(celsius + " gradi Celsius sono " + fahrenheit + " gradi Fahrenheit.");
    }
}