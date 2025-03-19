// Creare un metodo statico che verifica se una stringa è un indirizzo email valido.

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class ValidatoreEmail {
    public static boolean emailValida(String email) {
        String regex = "^[a-zA-Z0-9_+&*-]+(?:\\.[a-zA-Z0-9_+&*-]+)*@(?:[a-zA-Z0-9-]+\\.)+[a-zA-Z]{2,7}$";
        Pattern pattern = Pattern.compile(regex);
        Matcher matcher = pattern.matcher(email);
        return matcher.matches();
    }

    public static void main(String[] args) {
        String email1 = "test@example.com";
        String email2 = "email.invalida.com";

        System.out.println(email1 + " è valida? " + ValidatoreEmail.emailValida(email1));
        System.out.println(email2 + " è valida? " + ValidatoreEmail.emailValida(email2));
    }
}