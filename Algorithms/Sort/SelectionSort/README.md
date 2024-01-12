# Selection Sort
Selection sort is a straightforward sorting algorithm that sorts an array by repeatedly finding the minimum element from the unsorted part of the array and putting it at the beginning. The process is iteratively applied to the remaining unsorted elements until the entire array is sorted.

## Pseudocode
```
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

## Time Complexity
|Case        | Result          |
|------------|----------------:|
|Best        | Ω(n<sup>2</sup>)|
|Average     | Θ(n<sup>2</sup>)|
|Worst       | O(n<sup>2</sup>)|

## Where to use
- When simplicity is prioritized over performance.
- When the array is small.

## Tips
- Selection sort has a fixed number of swaps, making it useful when the write operation is costly.
- For larger datasets, consider using more efficient algorithms such as `MergeSort` or `QuickSort`.

