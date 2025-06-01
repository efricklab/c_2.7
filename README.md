## ✅ **2.7 Lab - Functions in C (GitHub Codespaces Version)**

### **Introduction**

In this lab, you will use **GitHub Codespaces** to write a C program that defines and uses functions to add and multiply two numbers. Functions are essential for writing modular, reusable, and maintainable code. You’ll learn how to declare, define, and call functions.

---

### **Objectives**

By the end of this lab, you will:

1. Create and run a C program in GitHub Codespaces.
2. Use functions to perform addition and multiplication.
3. Pass arguments and return values in C functions.
4. Compile and run C code using the built-in terminal.

---

### **Lab Steps**

---

### ✅ Step 1: Launch GitHub Codespaces

1. Go to your GitHub repository.
2. Click the green **Code** button → **Codespaces** tab → **Create codespace on main**.
3. Wait for your development environment to load.

---

### ✅ Step 2: Create the Program File

1. In the Codespaces editor, open the **Explorer** panel.
2. Right-click in the file tree an open `functions.c`.
3. Verify the following code:

```c
#include <stdio.h>

// Function declarations
int addTwoNumbers(int a, int b);
int multiplyTwoNumbers(int a, int b);

int main() {
    int num1, num2, sum, product;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    sum = addTwoNumbers(num1, num2);
    product = multiplyTwoNumbers(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    printf("The product of %d and %d is: %d\n", num1, num2, product);

    return 0;
}

// Function definitions
int addTwoNumbers(int a, int b) {
    return a + b;
}

int multiplyTwoNumbers(int a, int b) {
    return a * b;
}
```

4. Save the file (`Ctrl+S` or `Cmd+S`).

---

### ✅ Step 3: Compile the Program

1. Open the terminal: **Terminal > New Terminal**.
2. Compile the file using:

```bash
gcc functions.c -o functions
```

3. Verify that the executable was created:

```bash
ls
```



### ✅ Step 4: Run the Program

1. Run the program:

```bash
./functions
```

2. Example interaction:

```
Enter the first number: 10
Enter the second number: 20
The sum of 10 and 20 is: 30
The product of 10 and 20 is: 200
```

---

### ✅ Step 5: Experiment with Inputs

Run the program again using different number combinations to ensure it behaves correctly.

---

### ✅ Step 6: Understand the Code

* `int addTwoNumbers(int a, int b)` returns the sum.
* `int multiplyTwoNumbers(int a, int b)` returns the product.
* The `main()` function prompts for input, calls both functions, and prints results.

---

### ✅ Summary

In this lab, you:

* Used **GitHub Codespaces** to write and run a C program.
* Learned how to declare, define, and call functions in C.
* Built a modular program to perform arithmetic operations.

Functions are the building blocks of scalable C programs—you're now ready to apply them in more complex scenarios.
