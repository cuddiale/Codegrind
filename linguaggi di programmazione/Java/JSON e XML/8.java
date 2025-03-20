// Creare una stringa XML a partire da valori Java utilizzando la libreria `javax.xml.parsers` e `org.w3c.dom`.

import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerException;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
import org.w3c.dom.Document;
import org.w3c.dom.Element;

public class CreazioneXml {
    public static void main(String[] args) {
        try {
            DocumentBuilderFactory docFactory = DocumentBuilderFactory.newInstance();
            DocumentBuilder docBuilder = docFactory.newDocumentBuilder();

            Document doc = docBuilder.newDocument();
            Element rootElement = doc.createElement("persone");
            doc.appendChild(rootElement);

            Element persona1 = doc.createElement("persona");
            rootElement.appendChild(persona1);

            Element nome1 = doc.createElement("nome");
            nome1.appendChild(doc.createTextNode("Mario"));
            persona1.appendChild(nome1);

            Element eta1 = doc.createElement("eta");
            eta1.appendChild(doc.createTextNode("30"));
            persona1

.appendChild(eta1);

            Element persona2 = doc.createElement("persona");
            rootElement.appendChild(persona2);

            Element nome2 = doc.createElement("nome");
            nome2.appendChild(doc.createTextNode("Luca"));
            persona2.appendChild(nome2);

            Element eta2 = doc.createElement("eta");
            eta2.appendChild(doc.createTextNode("25"));
            persona2.appendChild(eta2);

            TransformerFactory transformerFactory = TransformerFactory.newInstance();
            Transformer transformer = transformerFactory.newTransformer();
            DOMSource source = new DOMSource(doc);
            StreamResult result = new StreamResult(System.out);
            transformer.transform(source, result);
        } catch (ParserConfigurationException | TransformerException e) {
            e.printStackTrace();
        }
    }
}