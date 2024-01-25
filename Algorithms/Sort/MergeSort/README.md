# Merge Sort
MergeSort is a robust sorting algorithm that divides an array into smaller halves, sorts each half independently, and then merges them back together. It ensures reliable and consistent performance, making it suitable for a wide range of applications.  

## Pseudocode
```plaintext
function mergeSort(array):
	if array.length() > 1:
		mid = array.length() / 2
		left = array[0...mid-1]
		right = array[mid...]

		# Recursively sort the two halves
		mergeSort(left)
		mergeSort(right)

		# Merge the sorted halves
		merge(array, left, right)

function merge(array, left, right):
	i = j = k = 0

	while i < left.length() and j < right.length():
		if left[i] <= right[j]:
			array[k] = left[i]
			i = i + 1
		else:
			array[k] = right[j]
			j = j + 1
		k = k + 1

	# Copy remaining elements if any
	while i < left.length():
		array[k] = left[i]
		i = i + 1
		k = k + 1

	while j < right.length():
		array[k] = right[j]
		j = j + 1
		k = k + 1
```

## Time & Space Complexity
|Case    |Time            |Space |
|--------|:---------------|:-----|
|Best    |Ω(n log(n)      |Ω(n)  |
|Average |Θ(n log(n)      |Θ(n)  |
|Worst   |O(n log(n)      |O(n)  |

## Variants
- Bottom-Up MergeSort
- Natural MergeSor
  
## Use Cases
- Efficient for sorting large datasets consistently.
- Frequently used in scenarios where stable sorting is required.
- Suitable for scenarios with linked lists due to its sequential access.

## Best Practice
- Offers consistent performance across different scenarios.
- Well-suited for handling large datasets efficiently.
- Preferred for scenarios where stability in sorting order is important.
- Efficiently works with linked lists due to its sequential nature.