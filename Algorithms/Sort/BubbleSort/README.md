# Bubble Sort
This sorting works


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
