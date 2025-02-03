# Scrivere una regex che identifica le frasi che contengono almeno tre parole in maiuscolo.

import re

text = "This is a TEST string with CAPITAL words and SOME more."
sentences = re.findall(r'\b(?:[A-Z][a-z]*\s){2,}[A-Z][a-z]*\b', text)
print(sentences)