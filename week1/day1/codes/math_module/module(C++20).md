Modules are collections of code files, similar to header files, that encapsulate our code(like `functions`, `classes`, `variables` into a single unit(related group of codes)

Modules have 2 parts:
1. **Module Definition (`math_module.ixx`)** – Defines a module named `math_module`.
2. **Module Implementation (`main.cpp`)** – Imports and uses the module.
### **1. Module Definition (`math_module.ixx`)**

```cpp
export module math_module;

export int add(int a, int b) {
    return a + b;
}

export int multiply(int a, int b) {
    return a * b;
}
```

- `export module math_module;` → Defines the module.
- `export` before function declarations → Makes them available for import.

---

### **2. Module Usage (`main.cpp`)**

```cpp
import math_module;
#include <iostream>

int main() {
    std::cout << "Sum: " << add(3, 5) << std::endl;
    std::cout << "Product: " << multiply(4, 6) << "\n";
    return 0;
}
```

- `import math_module;` → Imports the module instead of using `#include`.

---
### **Compilation (Using g++ )**
1. Compiling the Module Interface Unit:
```sh
g++ -std=c++20 -fmodules-ts -x c++ -c math_module.ixx -o math_module.o
```
 
2.  Compiling the Main File:
```sh
g++ -std=c++20 -fmodules-ts -c main.cpp -o main.o
```

3. Linking the Object Files:
```sh
g++ -std=c++20 -fmodules-ts math_module.o main.o -o program
```

4. Run the Compiled Executable
```sh
./program.exe
```
---
### **Output:**

```
Sum: 8
Product: 24
```

