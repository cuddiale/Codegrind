// Leggere un file JSON e stampare i valori utilizzando la libreria `org.json`.

import org.json.JSONArray;
import org.json.JSONObject;

import java.nio.file.Files;
import java.nio.file.Paths;

public class LetturaFileJson {
    public static void main(String[] args) {
        try {
            String jsonString = new String(Files.readAllBytes(Paths.get("data.json")));
            JSONArray jsonArray = new JSONArray(jsonString);

            for (int i = 0; i < jsonArray.length(); i++) {
                JSONObject jsonObject = jsonArray.getJSONObject(i);
                String nome = jsonObject.getString("nome");
                int eta = jsonObject.getInt("eta");

                System.out.println("Nome: " + nome);
                System.out.println("Età: " + eta);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}