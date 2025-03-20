// Parse di una stringa XML e stampa dei valori utilizzando la libreria `javax.xml.parsers`.

import org.w3c.dom.Document;
import org.w3c.dom.Element;
import org.w3c.dom.Node;
import org.w3c.dom.NodeList;

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;

public class ParsingXmlSemplice {
    public static void main(String[] args) {
        try {
            String xmlString = "<persone><persona><nome>Mario</nome><eta>30</eta></persona><persona><nome>Luca</nome><eta>25</eta></persona></persone>";
            DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
            DocumentBuilder builder = factory.newDocumentBuilder();
            Document document = builder.parse(new java.io.ByteArrayInputStream(xmlString.getBytes()));

            NodeList listaPersone = document.getElementsByTagName("persona");

            for (int i = 0; i < listaPersone.getLength(); i++) {
                Node nodo = listaPersone.item(i);
                if (nodo.getNodeType() == Node.ELEMENT_NODE) {
                    Element elemento = (Element) nodo;
                    String nome = elemento.getElementsByTagName("nome").item(0).getTextContent();
                    String eta = elemento.getElementsByTagName("eta").item(0).getTextContent();

                    System.out.println("Nome: " + nome);
                    System.out.println("Età: " + eta);
                }
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}