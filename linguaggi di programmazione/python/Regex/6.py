# Scrivere una regex per validare un indirizzo email.

import re

email = "example@domain.com"
is_valid = bool(re.fullmatch(r'[a-zA-Z0-9_.+-]+@[a-zA-Z0-9-]+\.[a-zA-Z0-9-.]+', email))
print(is_valid)