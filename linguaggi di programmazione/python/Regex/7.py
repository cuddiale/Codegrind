# Scrivere una regex che verifica se una stringa è un URL valido.

import re

url = "https://www.example.com"
is_url = bool(re.fullmatch(r'https?://[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}', url))
print(is_url)