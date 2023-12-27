# Linear Search
Searches the data in an list in a linear fashion.

## Pseudocode
```
# Linear Search

function linearSearch(array, target):
    for i = 0 to n - 1:
      if array[i] == target:
            return i        # target was found at index `i`
    return -1        # Indicating target not found.
```

## Time Complexity
|Case        | Result|
|------------|------:|
|Best        |   Ω(1)|
|Average     |   Θ(n)|
|Worst       |   O(n)|

## Where to use
- When the data is unsorted.
- When the data is very less. (few hundreds)

## Tips
- When you have to do multiple searches in a large array, then it is highly suggested to sort the array, and use algorithms for sorted array.
