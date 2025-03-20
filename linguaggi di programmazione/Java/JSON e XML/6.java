// Creare e scrivere un file JSON utilizzando la libreria `org.json`.

import org.json.JSONArray;
import org.json.JSONObject;

import java.nio.file.Files;
import java.nio.file.Paths;

public class ScritturaFileJson {
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

        try {
            Files.write(Paths.get("output.json"), jsonArray.toString().getBytes());
            System.out.println("File JSON scritto con successo!");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}