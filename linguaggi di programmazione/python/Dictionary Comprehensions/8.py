# Creare un dictionary comprehension che genera un dizionario di numeri interi e le loro radici quadrate.

import math
numeri = range(1, 6)
radici = {n: math.sqrt(n) for n in numeri}
print(radici)