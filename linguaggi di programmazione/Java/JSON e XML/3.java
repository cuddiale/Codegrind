// Parse di un array JSON e stampa dei valori utilizzando la libreria `org.json`.

import org.json.JSONArray;
import org.json.JSONObject;

public class ParsingJsonArray {
    public static void main(String[] args) {
        String jsonString = "[{\"nome\":\"Mario\", \"eta\":30}, {\"nome\":\"Luca\", \"eta\":25}]";
        JSONArray jsonArray = new JSONArray(jsonString);

        for (int i = 0; i < jsonArray.length(); i++) {
            JSONObject jsonObject = jsonArray.getJSONObject(i);
            String nome = jsonObject.getString("nome");
            int eta = jsonObject.getInt("eta");

            System.out.println("Nome: " + nome);
            System.out.println("Età: " + eta);
        }
    }
}