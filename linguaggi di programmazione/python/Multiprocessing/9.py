# Utilizzare multiprocessing per calcolare simultaneamente somme di parti diverse di una stessa lista.

from multiprocessing import Process, Array

def partial_sum(arr, start, end, result, index):
    result[index] = sum(arr[start:end])

if __name__ == '__main__':
    arr = list(range(1, 101))
    result = Array('i', 2)

    p1 = Process(target=partial_sum, args=(arr, 0, 50, result, 0))
    p2 = Process(target=partial_sum, args=(arr, 50, 100, result, 1))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

    total_sum = sum(result)
    print("Somma totale:", total_sum)