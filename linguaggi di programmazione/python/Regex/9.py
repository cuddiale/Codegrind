# Scrivere una regex per rimuovere tutti i tag HTML da una stringa.

import re

html = "<html><head><title>Title</title></head><body>Content</body></html>"
clean_text = re.sub(r'<[^>]+>', '', html)
print(clean_text)