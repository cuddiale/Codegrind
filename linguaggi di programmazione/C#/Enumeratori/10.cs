// Utilizza il metodo Enum.IsDefined per verificare se un valore numerico specifico corrisponde a un membro dell'enum "GiorniSettimana".

bool valoreValido = Enum.IsDefined(typeof(GiorniSettimana), 3);
Console.WriteLine("Valore valido: " + valoreValido);
