# Implementare un decoratore `@authenticate` che richiede una password prima di eseguire la funzione decorata.

def authenticate(password):
    def decorator(func):
        def wrapper(*args, **kwargs):
            pw = input("Inserisci la password: ")
            if pw == password:
                return func(*args, **kwargs)
            else:
                print("Password errata!")
        return wrapper
    return decorator

@authenticate("s3cr3t")
def segreto():
    print("Questo è un messaggio segreto.")

segreto()