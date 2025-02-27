import requests

# Funzione per ottenere i tassi di cambio dall'API
def get_exchange_rate(api_key, base_currency, target_currency):
    url = f"https://v6.exchangerate-api.com/v6/{api_key}/latest/{base_currency}"
    response = requests.get(url)
    data = response.json()
    if response.status_code == 200:
        rates = data['conversion_rates']
        return rates[target_currency]
    else:
        raise Exception(f"Errore nell'ottenere i tassi di cambio: {data['error-type']}")

# Funzione per convertire l'importo tra due valute
def convert_currency(amount, base_currency, target_currency, api_key):
    rate = get_exchange_rate(api_key, base_currency, target_currency)
    converted_amount = amount * rate
    return converted_amount

def main():
    api_key = "your_api_key_here"
    print("Convertitore di Valute")

    while True:
        try:
            amount = float(input("Inserisci l'importo da convertire: "))
            base_currency = input("Inserisci la valuta di origine (es. USD, EUR): ").upper()
            target_currency = input("Inserisci la valuta di destinazione (es. USD, EUR): ").upper()

            converted_amount = convert_currency(amount, base_currency, target_currency, api_key)
            print(f"{amount} {base_currency} corrispondono a {converted_amount:.2f} {target_currency}")

        except Exception as e:
            print(f"Errore: {e}")

        another = input("Vuoi effettuare un'altra conversione? (s/n): ").lower()
        if another != 's':
            break

if __name__ == "__main__":
    main()