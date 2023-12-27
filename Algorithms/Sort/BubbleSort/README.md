# Bubble Sort
Bubble sort is a simple and straightforward sorting algorithm that repeatedly steps through the list of elements to be sorted, compares adjacent elements, and swaps them if they are in the wrong order. This process continues until the entire list is sorted.

## Pseudocode
```plaintext
# Bubble Sort

function bubbleSort(array):
    for i = 0 to array.length() - 1:
        swapped = false    # Flag to keep track of the swapping
        for j = 0 to array.length() - 1 - i:
            if array[j] > array[j+1]:
                # Swap with the next elements
                temp = array[j]
                array[j] = array[j+1]
                array[j+1] = temp

                # Set the flag
                swapped = true
        if NOT swapped:
            return

```

## Time Complexity
|Case        | Result          |
|------------|----------------:|
|Best        |   Ω(n)          |
|Average     | Θ(n<sup>2</sup>)|
|Worst       | O(n<sup>2</sup>)|

## Where to use
- When simplicity is needed.
- When the array is very small.

## Tips
- Use `QuickSort` when the performance is concerned.
