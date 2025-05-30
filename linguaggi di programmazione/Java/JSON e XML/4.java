// Creare un array JSON a partire da valori Java utilizzando la libreria `org.json`.

import org.json.JSONArray;
import org.json.JSONObject;

public class CreazioneJsonArray {
    public static void main(String[] args) {
        JSONArray jsonArray = new JSONArray();

        JSONObject jsonObject1 = new JSONObject();
        jsonObject1.put("nome", "Mario");
        jsonObject1.put("eta", 30);

        JSONObject jsonObject2 = new JSONObject();
        jsonObject2.put("nome", "Luca");
        jsonObject2.put("eta", 25);

        jsonArray.put(jsonObject1);
        jsonArray.put(jsonObject2);

        System.out.println(jsonArray.toString());
    }
}