// Creare una classe Libro con un campo titolo privato e un metodo setTitolo pubblico per impostare il valore del campo:

public class Libro {
    private String titolo;

    public void setTitolo(String titolo) {
        this.titolo = titolo;
    }
}

public static void main(String[] args) {
    Libro libro = new Libro();
    libro.setTitolo("Il Signore degli Anelli");
    System.out.println("Titolo: " + libro.titolo);
}