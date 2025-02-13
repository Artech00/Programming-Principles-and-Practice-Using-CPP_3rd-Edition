📌 **A header file** is a file (`.h` or `.hpp`) that contains **declarations** of functions, classes, and variables, telling the compiler what exists but not how it works.
With header files we must provide the corresponding `.cpp` file to define the declared functions.
So we need 3 things
1. Header (`.h`) files declare functions but don’t define them,
2. **Source (`.cpp`) files** that provides the actual function implementations
3. and **Main file (`main.cpp`)** which will call the functions implemented in `.cpp` files.

We need both `.h` and `.cpp` unless we're using a library.

### 📌 **Example: Header + Source File Structure**

#### **✅ `math_functions.h` (Declaration)**

```cpp
#pragma once

int add(int a, int b);   // Function declaration
int multiply(int a, int b);
```

#### **✅ `math_functions.cpp` (Implementation)**

```cpp
#include "math_functions.h"

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
```

#### **✅ `main.cpp` (Uses the Implementations)**

```cpp
#include <iostream>
#include "math_functions.h"

int main() {
    std::cout << "Sum: " << add(4, 2) << std::endl;
    std::cout << "Product: " << multiply(4, 2) << std::endl;
    return 0;
}
```

#### **✅ Compiling Without a Library**

```sh
g++ main.cpp math_functions.cpp -o program
```

#### **🔥Run the Compiled Executable**
```sh
./program.exe
```
---

