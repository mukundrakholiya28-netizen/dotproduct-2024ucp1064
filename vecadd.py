import numpy as np #Change 2

#parallel branch

def parallelFunc():
	print("This is a parallel functin")

#Fixed a bug here
def test():
	print("In test function")
	
#this is just change in main

vectorA = np.array([1, 2, 3])
vectorB = np.array([4, 5, 6])

ans = np.dot(vectorA, vectorB)
