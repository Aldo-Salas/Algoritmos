def insertionSort(A):
  for j in range(1, len(A)):
    key = A[j]
    i = j - 1
    while(i >= 0) and (A[i] > key):
      A[i+1] = A[i]
      i = i - 1
      print(i, j)
    A[i+1] = key

data = [24, 30, 20, 15, 25]

insertionSort(data)
print data