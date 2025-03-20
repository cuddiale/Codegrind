// Parse di una stringa JSON e stampa dei valori utilizzando la libreria `org.json`.

import org.json.JSONObject;

public class ParsingJsonSemplice {
    public static void main(String[] args) {
        String jsonString = "{\"nome\":\"Mario\", \"eta\":30, \"citta\":\"Roma\"}";
        JSONObject jsonObject = new JSONObject(jsonString);

        String nome = jsonObject.getString("nome");
        int eta = jsonObject.getInt("eta");
        String citta = jsonObject.getString("citta");

        System.out.println("Nome: " + nome);
        System.out.println("Età: " + eta);
        System.out.println("Città: " + citta);
    }
}