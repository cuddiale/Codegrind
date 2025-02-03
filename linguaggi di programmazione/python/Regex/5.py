# Scrivere una regex per trovare tutti i punti esclamativi in una stringa.

import re

text = "Wow! I can't believe it! It really works!"
exclamations = re.findall(r'!', text)
print(exclamations)