# Scrivere una regex per verificare se una stringa contiene solo lettere maiuscole.

import re

text = "HELLO"
is_upper = bool(re.fullmatch(r'[A-Z]+', text))
print(is_upper)