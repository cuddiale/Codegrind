// Creare una classe astratta Dispositivo con un metodo astratto accendi che accende il dispositivo

public abstract class Dispositivo {
    public abstract void accendi();

    public static void main(String[] args) {
        Dispositivo dispositivo = new Dispositivo() {
            public void accendi() {
                System.out.println("Dispositivo acceso");
            }
        };

        dispositivo.accendi();
    }
}
