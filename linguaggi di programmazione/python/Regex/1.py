# Scrivere una regex per trovare tutte le occorrenze di "cat" in una stringa.

import re

text = "The cat chased the other cat."
matches = re.findall(r'cat', text)
print(matches)