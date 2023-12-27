# Binary Search
Binary search is a searching algoritm that works on the principle of divide and conquer.

It works by dividing the **sorted array** into two halves, and searching only in that half, where the element would be.

## Pseudocode
```plaintext
# Binary Search

function binarySearch(array, target):
    # Initialize variables
    low = 0
    high = array.length() - 1
    
    while low <= high:
        # Calculate middle index
        mid = (low + high) / 2

        if array[mid] == target:
            # target lies in the middle of the array.
            return mid  # Target found
        
        if target < array[mid]:
            # target lises in the left half of the divided array.
            high = mid - 1
        else:
            # The target > array[mid]
            # target lies in the right half of the divided array.
            low = mid + 1
    
    return -1 # Representing target was not found
```
## Time Complexity
| Case    | Result   |
|---------|---------:|
| Best    | O(1)     |
| Average | O(log n) |
| Worst   | O(log n) |

## Where to use
You can use this algorithm, when
- The array is sorted.  
- The data is huge.
