# Bubble Sort
Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Basic steps of the bubble sort algorithm:

1. Start at the beginning of the list.
2. Compare the first two elements.
3. If the first element is greater than the second, swap them.
4. Move to the next pair of elements and repeat steps 2-3.
5. Continue this process until the end of the list is reached.
6. After the first pass, the largest element is guaranteed to be at the end of the list.
7. Repeat steps 1-6 for the remaining unsorted portion of the list.
8. Continue this process until the entire list is sorted.

## Pseudocode
### Slightly optmized variant (Comb Sort)
```
fun sort(arr){
  FOR i = FROM 0 to arr.length - 1, do {
    FOR j = FROM 0 to arr.length - 1 - i, do {
      IF arr[j] > arr[j+1], then swap(arr[j], arr[j+1])
    }
  }
}
```

### Optmized variant (with a flag)
```
fun sort(arr){
  FOR i = FROM 0 to arr.length - 1, do {
    let swapped = false
    FOR j = FROM 0 to arr.length - 1 - i, do {
      IF arr[j] > arr[j+1], then {
        swap(arr[j], arr[j+1])
        swapped = true
      }
    IF not swapped then break
    }
  }
}
```
