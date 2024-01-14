# Selection Sort
Selection sort is a straightforward sorting algorithm that sorts an array by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning. The process is iteratively applied to the remaining unsorted elements until the entire array is sorted.

## Pseudocode
```plaintext
function selectionSort(array):
    n = array.length()
    for i = 0 to n - 1:
        # Assume the current index is the minimum
        minIndex = i

        # Search for the minimum element in the unsorted part
        for j = i + 1 to n - 1:
            if array[j] < array[minIndex]:
                minIndex = j

        # Swap the found minimum element with the first element
        temp = array[minIndex]
        array[minIndex] = array[i]
        array[i] = temp
```

## Time & Space Complexity
|Case        | Time          | Space |
|------------|----------------:|-----
|Best        | Ω(n<sup>2</sup>)| Ω(1)|
|Average     | Θ(n<sup>2</sup>)| Θ(1)|
|Worst       | O(n<sup>2</sup>)| O(1)|

## Variants
- Double-Selection Sort
- Stable Selection Sort
- Recursive Selection Sort
- Block-Swap Selection Sort

## Use Cases
- Suitable for sorting small datasets due to its simplicity.
- Applicable in situations with constrained memory where constant space complexity is advantageous.
- Considered when the cost of swapping elements is significantly higher than the cost of comparisons.

## Best Practices
- Inefficient for large datasets; prefer more efficient algorithms like `Merge Sort` or `QuickSort`.
- Explore variants or optimizations, such as stable selection sort, based on specific requirements.
