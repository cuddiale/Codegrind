# Scrivere una regex che verifica se una stringa contiene un indirizzo IPv4 valido.

import re

ip = "192.168.1.1"
is_valid_ip = bool(re.fullmatch(r'(?:(?:25[0-5]|2[0-4]\d|[01]?\d\d?)\.){3}(?:25[0-5]|2[0-4]\d|[01]?\d\d?)', ip))
print(is_valid_ip)