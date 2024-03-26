import random

numbers = [random.randint(1, 7000) for _ in range(int(input("Nombre d'éléments ")))]

print(' '.join(map(str, numbers)))
