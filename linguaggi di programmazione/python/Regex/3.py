# Scrivere una regex per dividere una stringa in base agli spazi.

import re

text = "Split this string by spaces"
parts = re.split(r'\s+', text)
print(parts)