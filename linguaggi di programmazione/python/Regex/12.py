# Scrivere una regex che cattura i numeri di telefono nel formato internazionale (+39 0123 456789).

import re

text = "My phone number is +39 0123 456789."
phones = re.findall(r'\+\d{2} \d{4} \d{6}', text)
print(phones)