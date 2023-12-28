# Swap Algorithm
The swap algorithm takes 2 variables, and swap the values of them so that finally a = b & b = a

## Pseudocode
- Swap any value
  
  ```plaintext
  # Swap Algorithm
  
  function swap(a, b):
      temp = a              # Temporarily holds value of `a`
      a = b
      b = temp
  ```
  
- Swap number (SwapNum)
  
  ```plaintext
  # SwapNum Algorithm
  
  function swapNum(a, b):
      a = a + b
      b = a - b              # i.e., b = (a + b) - b  <=>  a
      a = a - b              # i.e., a = (a + b) - a  <=>  b
  ```
  > Uses less memory, but more CPU(ALU) used.

## Where to use
- When values needs to be swapped (like in some sorting algorithms).

## Tips
- Use `SwapNum` for keeping memory footprint to minimum.

