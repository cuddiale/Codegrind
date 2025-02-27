import datetime

comuni = {
    'H501': 'ROMA',
    'F205': 'MILANO',
    'F839': 'NAPOLI',
    # Aggiungi altri comuni qui
}

def estrai_nome(codice):
    vocali = 'AEIOU'
    consonanti = ''.join([c for c in codice if c not in vocali])
    return consonanti

def estrai_data_nascita(codice, sesso):
    mese_codice = 'ABCDEHLMPRST'
    anno = int(codice[:2])
    if anno < 40:
        anno += 2000
    else:
        anno += 1900
    mese = mese_codice.index(codice[2])
    giorno = int(codice[3:5])
    if sesso == 'F':
        giorno -= 40
    return datetime.date(anno, mese + 1, giorno)

def estrai_comune(codice):
    return comuni.get(codice, 'Comune sconosciuto')

def decodifica_codice_fiscale(cf):
    cognome = estrai_nome(cf[:3])
    nome = estrai_nome(cf[3:6])
    sesso = 'F' if int(cf[9:11]) > 31 else 'M'
    data_nascita = estrai_data_nascita(cf[6:11], sesso)
    comune = estrai_comune(cf[11:15])
    return cognome, nome, data_nascita, sesso, comune

def main():
    print("Decodifica Codice Fiscale")

    cf = input("Inserisci il codice fiscale: ").upper()
    if len(cf) != 16:
        print("Codice fiscale non valido.")
        return

    cognome, nome, data_nascita, sesso, comune = decodifica_codice_fiscale(cf)

    print(f"Cognome: {cognome}")
    print(f"Nome: {nome}")
    print(f"Data di Nascita: {data_nascita.strftime('%d/%m/%Y')}")
    print(f"Sesso: {sesso}")
    print(f"Comune di Nascita: {comune}")

if __name__ == "__main__":
    main()