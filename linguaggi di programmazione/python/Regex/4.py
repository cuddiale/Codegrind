# Scrivere una regex che estrae i numeri da una stringa.

import re

text = "There are 12 apples and 30 oranges"
numbers = re.findall(r'\d+', text)
print(numbers)