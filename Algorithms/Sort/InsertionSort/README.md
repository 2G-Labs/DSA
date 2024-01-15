# Insertion Sort
Insertion sort is a simple sorting algorithm that builds the final sorted array one element at a time. It is much less efficient on large lists than more advanced algorithms such as `QuickSort`, `MergeSort`, or `HeapSort`. However, it performs well for small datasets or lists that are nearly sorted.

## Pseudocode
```plaintext
function insertionSort(array):
    n = array.length()
    for i = 1 to n - 1:
        key = array[i]
        j = i - 1

        # Move elements greater than key to one position ahead
    	while j >= 0 and array[j] > key:
        	array[j + 1] = array[j]
        	j = j - 1

    	# Place the key at its correct position
    	array[j + 1] = key
```

## Time & Space Complexity
|Case    |Time            |Space |
|--------|---------------:|-----:|
|Best    |Ω(n)            |Ω(1)  |
|Average |Θ(n<sup>2</sup>)|Θ(1)  |
|Worst   |O(n<sup>2</sup>)|O(1)  |

## Variants
- Binary Insertion Sort
- Shell Sort

## Use Cases
- Effective for small datasets or nearly sorted lists.
- Well-suited for situations where the input array is already partially sorted.
- Simplicity and low overhead make it suitable for educational purposes.

## Best Practices
- Inefficient for large datasets, opt for more efficient algorithms like `QuickSort` or `MergeSort`.
- Consider using variants like Binary Insertion Sort for slightly better performance.
- Well-suited for scenarios where elements are added to the array sequentially over time.
