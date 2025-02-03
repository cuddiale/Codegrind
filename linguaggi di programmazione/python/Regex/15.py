# Scrivere una regex che verifica la presenza di parole con caratteri ripetuti consecutivamente (es. "letter" o "balloon").

import re

text = "This room seems too quiet and still."
repeated_chars = re.findall(r'\b\w*([a-zA-Z])\1\w*\b', text)
print(repeated_chars)