import datetime

def codice_cognome(cognome):
    consonanti = ''.join([c for c in cognome if c.isalpha() and c not in 'AEIOU'])
    vocali = ''.join([c for c in cognome if c.isalpha() and c in 'AEIOU'])
    codice = (consonanti + vocali + 'XXX')[:3].upper()
    return codice

def codice_nome(nome):
    consonanti = ''.join([c for c in nome if c.isalpha() and c not in 'AEIOU'])
    vocali = ''.join([c for c in nome if c.isalpha() and c in 'AEIOU'])
    if len(consonanti) >= 4:
        consonanti = consonanti[0] + consonanti[2] + consonanti[3]
    codice = (consonanti + vocali + 'XXX')[:3].upper()
    return codice

def codice_data_nascita(data_nascita, sesso):
    mese_codice = 'ABCDEHLMPRST'
    data = datetime.datetime.strptime(data_nascita, '%d/%m/%Y')
    anno = str(data.year)[-2:]
    mese = mese_codice[data.month - 1]
    giorno = data.day + 40 if sesso == 'F' else data.day
    giorno = f'{giorno:02d}'
    return anno + mese + giorno

comuni = {
    'ROMA': 'H501',
    'MILANO': 'F205',
    'NAPOLI': 'F839',
    # Aggiungi altri comuni qui
}

def codice_comune(comune):
    return comuni.get(comune.upper(), 'XXXX')

def carattere_di_controllo(cf_parziale):
    valori = {
        **{chr(i): i - 48 for i in range(48, 58)},
        **{chr(i): i - 55 for i in range(65, 91)}
    }
    dispari = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
               1, 0, 5, 7, 9, 13, 15, 17, 19, 21, 1, 0, 5, 7, 9, 13, 15, 17, 19, 21,
               1, 0, 5, 7, 9, 13, 15, 17, 19, 21, 1, 0, 5, 7, 9, 13, 15, 17, 19, 21]
    pari = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
            1, 0, 5, 7, 9, 13, 15, 17, 19, 21, 1, 0, 5, 7, 9, 13, 15, 17, 19, 21,
            1, 0, 5, 7, 9, 13, 15, 17, 19, 21, 1, 0, 5, 7, 9, 13, 15, 17, 19, 21]

    somma = sum(dispari[valori[cf_parziale[i]]] if i % 2 == 0 else pari[valori[cf_parziale[i]]] for i in range(15))
    return chr((somma % 26) + 65)

def genera_codice_fiscale(nome, cognome, data_nascita, sesso, comune):
    cf = codice_cognome(cognome)
    cf += codice_nome(nome)
    cf += codice_data_nascita(data_nascita, sesso)
    cf += codice_comune(comune)
    cf += carattere_di_controllo(cf)
    return cf

def main():
    print("Generatore di Codice Fiscale")

    cognome = input("Inserisci il cognome: ")
    nome = input("Inserisci il nome: ")
    data_nascita = input("Inserisci la data di nascita (dd/mm/yyyy): ")
    sesso = input("Inserisci il sesso (M/F): ").upper()
    comune = input("Inserisci il comune di nascita: ")

    codice_fiscale = genera_codice_fiscale(nome, cognome, data_nascita, sesso, comune)
    print(f"Il tuo codice fiscale è: {codice_fiscale}")

if __name__ == "__main__":
    main()