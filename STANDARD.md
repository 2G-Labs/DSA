# Pseudocode Standard v1.0

## Naming Conventions (camelCase)
- **Variables:** Descriptive names starting with a lowercase letter (e.g., `currentIndex`, `tempValue`).
- **Functions/Procedures:** Meaningful names starting with a lowercase letter (e.g., `insertNode`, `bubbleSort`).

## Syntax Guidelines
- **Indentation:** 4 Space indentation for consistent use & readability (Don't use tabs).
- **Formatting:** Clear and readable formatting throughout the code.
- **Comments:** Use `#` as single line comment to explain complex logic or denote sections, providing insights into the algorithm's logic.
- **Sections:** Divide the pseudocode into sections using blankline and a comment (heading of the section).

## Standard Notations
Use these standard notations for writing pseudocodes.

### Comments
```
# This is a comment, it starts with `#` and ends with the newline.
```

### Main Algorithm body
- **Without input:**
  ```plaintext
  function algorithmName():
      # algorithm
  ```
- **With inputs:**
  ```plaintext
  function algorithmName(param1, param2):
      # algorithm
  ```

> [!Note]
> The `param1` & `param2` should be self explainatory.


### Control Structures
- **Conditionals:**
  ```plaintext
  if condition:
      # code block
  else if anotherCondition:
      # code block
  else:
      # code block
  ```
- **Loops:**
  ```plaintext
  while condition:
      # code block

  for i from startValue to endValue:
      # code block

  for item in collection:
      # code block
  ```

### Operations
- **Variables Operations:**
  - Assignment: `variable = value`
  - Arithmetic Operations: `+, -, *, /, %`
  - Increment/Decrement: `++, --`
  - Comparison: `==, !=, <, >, <=, >=`
  - Logical Operations: `AND, OR, NOT`
- **Data Structure Operations:**
  - Arrays/Lists:
    - Access: `array[index]`
    - Insertion: `array.append(element)`
    - Deletion: `array.remove(element)`
  - Linked Lists:
    - Node Creation: `createNode(value)`
    - Node Insertion: `insertNode(value)`
    - Node Deletion: `deleteNode(value)`

## Example Pseudocode

```plaintext
# Example pseudocode illustrating the standard conventions

function binarySearch(array, target):
    left = 0
    right = array.length - 1

    while left <= right:
        mid = floor((left + right) / 2)

        if array[mid] == target:
            return mid
        else if array[mid] < target:
            left = mid + 1
        else:
            right = mid - 1

    return -1
```
## Example Template:

```plaintext
# Algorithm Name: Brief Description

# Initialize variables
variable_1 = value
variable_2 = value

# Function/Procedure Definitions
function_name(parameter1, parameter2):
    # Function logic
    ...

    # Main algorithm steps
    for i = 1 to n:
        if condition:
            perform action1
        else:
            perform action2

    # Final output or return statement
    return result
```
## Conclusion
Adhering to these pseudocode standards ensures consistency, readability,
and a better understanding of algorithms and data structures implementations, minimising ambiguity in code interpretation.
