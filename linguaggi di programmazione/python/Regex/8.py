# Scrivere una regex che identifica le date nel formato "gg/mm/aaaa".

import re

text = "Today's date is 15/07/2024."
dates = re.findall(r'\b\d{2}/\d{2}/\d{4}\b', text)
print(dates)