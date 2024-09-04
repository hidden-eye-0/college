import numpy as np

values = [4.3, 3.1, 8.2, 8.2, 3.2, 0.9, 1.6, 6.5]
matrix = np.array(values).reshape(4, 2)

print(matrix)

matrix1 = np.delete(matrix, 1, axis=0)

print("Matrix after removing one row:")
print(matrix1)

print("Dimensions of the matrix:", matrix1.shape)

first_column = matrix[:, 0]

sorted_first_column = np.sort(first_column)

matrix[:, 1] = sorted_first_column

print("Updated matrix:")
print(matrix)
