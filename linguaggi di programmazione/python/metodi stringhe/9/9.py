# Assegnare una stringa "Ciao mondo" ad una variabile "stringa". Mandare quindi a schermo gli ultimi 5 caratteri della stringa in maiuscolo, sostituendo il carattere "o" con "k"

stringa = "Ciao mondo"
print(stringa[-5:].upper().replace("o", "k"))

