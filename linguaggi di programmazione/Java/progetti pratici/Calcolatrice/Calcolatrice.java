import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Calcolatrice extends JFrame {
    private JTextField display;
    private double primoNumero;
    private double secondoNumero;
    private String operazione;

    public Calcolatrice() {
        setTitle("Calcolatrice");
        setSize(400, 500);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
        setLayout(new BorderLayout());

        display = new JTextField();
        display.setFont(new Font("Arial", Font.PLAIN, 24));
        display.setHorizontalAlignment(JTextField.RIGHT);
        display.setEditable(false);
        add(display, BorderLayout.NORTH);

        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(4, 4));

        String[] buttonLabels = {
                "7", "8", "9", "/",
                "4", "5", "6", "*",
                "1", "2", "3", "-",
                "0", "C", "=", "+"
        };

        for (String label : buttonLabels) {
            JButton button = new JButton(label);
            button.setFont(new Font("Arial", Font.PLAIN, 24));
            button.addActionListener(new ButtonClickListener());
            panel.add(button);
        }

        add(panel, BorderLayout.CENTER);
    }

    private class ButtonClickListener implements ActionListener {
        @Override
        public void actionPerformed(ActionEvent e) {
            String command = e.getActionCommand();

            switch (command) {
                case "C":
                    display.setText("");
                    primoNumero = 0;
                    secondoNumero = 0;
                    operazione = "";
                    break;
                case "=":
                    secondoNumero = Double.parseDouble(display.getText());
                    double risultato = 0;
                    switch (operazione) {
                        case "+":
                            risultato = primoNumero + secondoNumero;
                            break;
                        case "-":
                            risultato = primoNumero - secondoNumero;
                            break;
                        case "*":
                            risultato = primoNumero * secondoNumero;
                            break;
                        case "/":
                            if (secondoNumero != 0) {
                                risultato = primoNumero / secondoNumero;
                            } else {
                                JOptionPane.showMessageDialog(null, "Errore: Divisione per zero");
                            }
                            break;
                    }
                    display.setText(String.valueOf(risultato));
                    break;
                case "+":
                case "-":
                case "*":
                case "/":
                    primoNumero = Double.parseDouble(display.getText());
                    operazione = command;
                    display.setText("");
                    break;
                default:
                    display.setText(display.getText() + command);
                    break;
            }
        }
    }
}