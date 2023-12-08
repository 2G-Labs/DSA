# Binary Search
Binary search is a searching algoritm, which search for a key/data in a **sorted** array.  

## Pseudocode
```BinarySearch(array, target)
  // Input: array is a sorted array, and target is the value to search for

  // Initialize variables
  Set low to 0
  Set high to the length of array - 1

  // Binary search loop
  While low <= high
    // Calculate middle index
    Set mid to (low + high) / 2

    // Check if the middle element is the target
    If array[mid] equals target
      Return mid  // Target found

    // If the target is less than the middle element, search in the left half
    If target < array[mid]
      Set high to mid - 1

    // If the target is greater than the middle element, search in the right half
    Else
      Set low to mid + 1
    End If
  End While

  // If the loop completes without finding the target, return a sentinel value (e.g., -1)
  Return -1
End BinarySearch
```
## Time Complexity
| Case    | Result   |
|---------|----------:|
| Best    | O(1)     |
| Average | O(log n) |
| Worst   | O(log n) |

## Where to use
You can use this algorithm, when the array is sorted.  
It is helpful when you have large sorted array.  

