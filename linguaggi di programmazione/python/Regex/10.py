# Scrivere una regex per verificare se una stringa è un numero esadecimale valido.

import re

hex_number = "1A3F"
is_hex = bool(re.fullmatch(r'\b[0-9A-F]+\b', hex_number))
print(is_hex)