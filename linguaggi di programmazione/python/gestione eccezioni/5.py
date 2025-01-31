# Scrivere un programma che tenta di eseguire un'operazione non supportata, come la divisione di due stringhe, e gestisce l'eccezione risultante.

try:
    '10' / '2'
except TypeError:
    print("Errore: Operazione non supportata tra stringhe.")