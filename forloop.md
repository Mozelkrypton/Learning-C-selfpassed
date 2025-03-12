# Understanding `for` Loops in C

## **Overview**
A `for` loop in C is a control flow statement that allows code to be executed repeatedly based on a condition. It is commonly used when the number of iterations is known beforehand.

---

## **Syntax**
```c
for (initialization; condition; increment/decrement) {
    // Code to execute
}
```

### **Execution Flow**
1. **Initialization**: Executes once before the loop starts.
2. **Condition**: Evaluates before each iteration.
3. **Loop Body**: Executes if the condition is `true`.
4. **Increment/Decrement**: Updates the loop variable after each iteration.

---

## **Example Usage**
### **Basic Example**
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);
    }
    return 0;
}
```
**Output:**
```
Iteration 1
Iteration 2
Iteration 3
Iteration 4
Iteration 5
```

---

## **Special Cases**
### **Infinite Loop**
```c
for (;;) {
    printf("This will run forever!\n");
}
```
> Runs indefinitely unless manually terminated.

### **Skipping Values using `continue`**
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;  // Skips iteration when i = 3
    printf("%d ", i);
}
```
**Output:**
```
1 2 4 5
```

### **Breaking the Loop using `break`**
```c
for (int i = 1; i <= 5; i++) {
    if (i == 3) break;  // Stops loop when i = 3
    printf("%d ", i);
}
```
**Output:**
```
1 2
```

---

## **Fun Facts**
- The **semicolon (;)** in `for (;;) ` is required—even for infinite loops.
- You can **omit parts** of the `for` loop (e.g., initialization, condition, or increment).
- **Nested `for` loops** are useful for 2D problems (like matrix operations).
- You can **simulate a `while` loop** using a `for` loop:
  ```c
  for (; condition ;) { /* Code */ }
  ```
- **Reverse `for` loops** are useful for countdowns.

---

## **Challenges 🚀**
1. Write a `for` loop that prints only even numbers from 1 to 20.
2. Create a program that uses a nested `for` loop to print a multiplication table.
3. Implement a `for` loop that calculates the factorial of a number.

Happy coding! 🎯

