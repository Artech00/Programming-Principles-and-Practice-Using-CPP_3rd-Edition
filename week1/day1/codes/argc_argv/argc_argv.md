By default, when you run a program without any extra command-line arguments, it receives one argument: **`argv[0]`**, which stores the executable’s path or name.
The `main()` function can take 2 parameters—**`argc`** (argument count) and **`argv`** (argument vector)—which are used to **receive** command-line arguments. 

- **`int argc` (Argument Count):**  
Indicates the total number of arguments passed to the program. When no extra arguments are provided, `argc` is 1.
    
- **`char* argv[]` (Argument Vector):**  
An array of C-style strings where each element is a command-line argument. `argv[0]` is the program's name or path, and any additional arguments (if provided) start at `argv[1]`.
---
### **Code Example**

```cpp
#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Total arguments (argc): " << argc << "\n";

    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "]: " << argv[i] << "\n";
    }
    
    return 0;
}
```

- **Explanation:**
    - When you run the program without any extra arguments:
        
        ```sh
        ./argc_argv.exe
        ```
        
        The output will be:
        
        ```
        Total arguments (argc): 1
        argv[0]: C:\Users\user\source\repos\Programming-Principles-and-Practice-Using-CPP_3rd-Edition\argc_argv.exe
        ```
        
    - If you run it with additional arguments:
        
        ```sh
        ./argc_argv.exe hello world
        ```
        
        The output will be:
        
        ```
        Total arguments (argc): 3
        argv[0]: C:\Users\user\source\repos\Programming-Principles-and-Practice-Using-CPP_3rd-Edition\argc_argv.exe
        argv[1]: hello
        argv[2]: world
        ```
        
