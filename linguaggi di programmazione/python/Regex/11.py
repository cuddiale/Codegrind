# Scrivere una regex che estrae le parole che iniziano e finiscono con una vocale.

import re

text = "Argentina is an area where apricots grow."
words = re.findall(r'\b[aeiouAEIOU][a-z]*[aeiouAEIOU]\b', text)
print(words)