// Creare un oggetto JSON a partire da valori Java utilizzando la libreria `org.json`.

import org.json.JSONObject;

public class CreazioneJson {
    public static void main(String[] args) {
        JSONObject jsonObject = new JSONObject();
        jsonObject.put("nome", "Luca");
        jsonObject.put("eta", 25);
        jsonObject.put("citta", "Milano");

        System.out.println(jsonObject.toString());
    }
}