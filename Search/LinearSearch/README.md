# Linear Search
Searches the data in an list in a linear fashion.

## Pseudocode
```
1. For every element from start to end of the list, do
  a. If the element matches the searched value, then the value is found and it's position is returned
  b. else continue with the loop
2. Item is not found, and return the NOT_FOUND code accordingly (say -1).
```

## Time Complexity
|Case        | Result|
|------------|------:|
|Worst       |   O(n)|
|Best        |   Ω(1)|
|Average     |   Θ(n)|

## Where to use
- The linear search is used when the data is unsorted.

## Tips
- When you have to do multiple searches in a large array, then it is highly suggested to sort the array, and use algorithms for sorted array.
