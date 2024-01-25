# Quick Sort
Quick Sort is a powerful sorting algorithm that efficiently sorts an array by dividing it into smaller segments. It's known for its speed and is often used in real-world applications. Unlike `Insertion Sort`, Quick Sort doesn't build the sorted array one element at a time; instead, it divides the array into smaller segments, sorts them independently, and then combines them.

## Pseudocode
```plaintext
function quickSort(array, low, high):
	if low < high:
		# Partition the array into two segments
		pivotIndex = partition(array, low, high)

		# Recursively sort the two segments
		quickSort(array, low, pivotIndex - 1)
		quickSort(array, pivotIndex + 1, high)

function partition(array, low, high):
	# Choose the rightmost element as the pivot
	pivot = array[high]
	i = low - 1

	# Iterate through the array to rearrange elements
	for j = low to high - 1:
		if array[j] <= pivot:
			i = i + 1
			swap(array, i, j)

	# Place the pivot in its correct position
	swap(array, i + 1, high)
	return i + 1

function swap(array, i, j):
	temp = array[i]
	array[i] = array[j]
	array[j] = temp
```

## Time & Space Complexity
|Case    |Time            |Space    |
|:-------|:---------------|:--------|
|Best    |Ω(n log(n))     |Ω(log(n))|
|Average |Θ(n log(n))     |Θ(log(n))|
|Worst   |O(n<sup>2</sup>)|O(log(n))|

## Variants
- Randomized QuickSort
- Hybrid QuickSort (combining QuickSort with another sorting algorithm for small segments)

## Use Cases
- Highly effective for sorting large datasets efficiently.
- Frequently used in various programming libraries and languages.
- Well-suited for scenarios where speed is crucial.

## Best Practice
- Efficient for large datasets, outperforms algorithms like `Insertion Sort` for big tasks.
- Implementing randomized versions helps avoid worst-case scenarios.
- Consider the hybrid version for increased efficiency with smaller datasets.
- Well-suited for scenarios where elements are scattered throughout the array.