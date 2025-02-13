# Vocabulary
- **contemporary** -> ժամանակակից  
- **trivial** -> չնչին, պարզ, հասարակ  
- **non-trivial** -> բարդ, դժվար
- **Consequently** -> Հետևաբար  
- **endeavors** -> Ձգտել  
- **abbreviation** (e.g., Dr., Gov., vs.) -> հապավում  
- **nuisance** -> տհաճություն  
- **enclosed** -> փակված  
- **notation** -> նշում
- **acquainted topics** -> ծանոթ թեմաներ
- **establish** -> հաստատել
- **drills** -> exercises(վարժություններ, օրինակներ)
- **tempted** -> բարդ
- **solidify** our understanding -> укрепить наше понимание
- **get acquainted** -> ծանոթանալ
- **broth** -> бульон
- **Bring to a boil** -> եռացնել 
- **related** -> իրար հետ կապ ունեցող
## **Notation**
- <span style="color: blue;">CC</span>: Concepts and Techniques(blue)
- <span style="color: green;">AA</span>: Advice(green)
- <span style="color: red;">XX</span>: Warning(red)

---
# **Notes**

### 🔹 Every C++ program must have a function called `main` to define where execution starts.
The main function has an int return type because the operating system uses this value to determine whether the program executed successfully(0) or encountered an error(non-zero).
### **A function has four main parts:**
1. **Return type**  
2. **Function Name** (e.g., `main`)  
3. **Function Parameter list** (inside parentheses `()` – can be empty)  
4. **Function body** (inside curly braces `{ }` – contains statements)  

### **What is a statement?**
A part of a C++ program that specifies an action is called a `statement`.
### IDE -> Integrated development environment
# Compilation
C++ is a high-level, `compiled programming language`. That means that to get a program to run, you must first translate it from the human-readable form to something a machine can ‘‘understand.’’ That translation is done by a program called a `compiler

What you read and write is called **source code** or **program text**, while what the computer executes is called **object code** or **machine code**.
C++ source code files typically have the `.cpp` extension (e.g., `hello_world.cpp`), and object code files have the `.obj` extension on **Windows** or `.o` on **Linux**.

`C++ source code -> compiler -> Object code`
(read more info from the book `Compilers Principles Techniques and Tools (2nd Edition).pdf )

# Linking

The output from a linker is called an `executable file`and on Windows its name is often given the `program_name.exe`
`source file 1 -> compiler -> object file 1 -> linker -> executable file
`source file 2 -> compiler -> object file 2 -> linker -> executable file
Please note that object code and executables are not portable among systems. For example, when we compile for a Windows machine, we get object code for Windows that will not run on a Linux machine.

Errors found by the compiler are called `compile-time errors`, 
errors found by the linker are called `link-time errors`, 
and errors not found until the program is run are called `run-time errors` or `logic errors` 

[1] What is the purpose of the ‘‘Hello, World!’’ program?
The purpose of the hello world program is to verify that a C++ development environment is set up correctly. It serves as a beginner-friendly first step demonstrating how to write...compile...and execute a simple program.

[2] Name the four parts of a function.
### **A function has four main parts:**
1. **Return type**  
2. **Function Name** (e.g., `main`)  
3. **Function Parameter list** (inside parentheses `()` – can be empty)  
4. **Function body** (inside curly braces `{ }` – contains statements)  

[3] Name a function that must appear in every C++ program.
Every C++ program must have main function, which servers as an entry point and typically returns an success or failure exit code status

[4] In the ‘‘Hello, World!’’ program, what is the purpose of the line return 0;?
The purpose of the line return 0; indicates that the program executed successfully, while none-zero value indicates an error

[5] What is the purpose of the compiler?
The purpose of the compiler is to translate the source code written in a high-level programming language like C++ into machine code, because computers can only execute machine code, which consists of binary instructions(1s and 0s) that directly control the hardware by telling the processor what tasks to perform

[6] What is the purpose of the import statement?
The import statement is used to include modules in C++, which optimizes compilation by only loading necessary components from a module

[7] What is the purpose of the #include directive?
The #include directive is used to include head files in C++, which copies their contents into the source code before compilation

[8] What does a .cpp suffix at the end of a file name signify in C++?
The .cpp suffix signifies that the file contains C++ source code for implementation, which will be  compiled into machine code during the **build process(entire compilation processes)**

[9] What does the linker do for your program?
The linker combines the object files generated by the compiler, to create a single executable program. It resolves references to functions and variables across different files, ensuring that all parts of the program can access each other correctly during execution

[10] What is the difference between a source file and an object file?
A `source file`(.cpp) contains human-readable code written by the programmer, while an `object file`(.o or .obj) is the machine-readable output of the compiler, containing translated code that still needs to be linked into an executable

[11] What is an executable?
An executable is a final compiled program, that the operating system can run directly. It's created when the **linker** combines all necessary **object files** and resolves function references, producing a final file(.exe on Windows or a binary file in Linux/macOS)

[12] What is an IDE and what does it do for you?
An IDE(Integrated Development Environment) is a software tool(program) that combines a code editor, compiler, and debugger to help programmers write, test, and manage code efficiently

[13] How do you get a compiled program to run?
You run the compiled program by executing its **executable file** either by double-clicking it through a graphical interface or by running it through a terminal(in Linux) or command prompt(in Windows)

[14] What is a comment?
A `comment` is text in the code that is ignored by the compiler during the compilation process(specifically during the preprocessing stage) and is used to explain or clarify the code for better understanding

[15] What is the purpose of a drill?
The purpose of a `drill` is to establish or reinforce programming concepts and improve skills through practical code examples. A `drill` is a sequence of modifications to a single program, "growing" it from something completely trivial to something that might be a useful part of a real program 

[16] If you understand everything in the textbook, why is it necessary to practice?
Even if we understand everything in the textbook, practice is necessary because it helps us apply theoretical knowledge in real-world scenarios, solidifying our understanding and improving problem solving skills.

### Terms
1.`function`
A **function** is a set of instructions that performs a specific task. Function simplifies our code by preventing us from writing redundant code.
A function takes input data, called parameters.
A function returns a specific result, depending on it's return type
EXCEPT for void, a void function does not return a value.
#### **A function has four main parts:**
2. **Return type**  
3. **Function Name** (e.g., `main`)  
4. **Function Parameter list** (inside parentheses `()` – can be empty)  
5. **Function body** (inside curly braces `{ }` – contains statements)

2 .`output`
An **output** is the result produced by a program or a function after processing input data. It can be displayed on the screen, saved to a file, or used in further computations.

3.`compiler`
A **compiler** is a program that translates source written in a high-level programming language like C++ into machine code, because computers can only execute machine code, which consists of binary instructions(1s and 0s) that directly control the hardware by telling the processor what tasks to perform

4.`error`
An **error** is a mistake in a program that prevents it from working correctly, often due to incorrect syntax or logic

5.`linker`
A **linker** is a program that combines the object files generated by the compiler, to create a single executable program. It resolves references to functions and variables across different files, ensuring that all parts of the program can access each other correctly during execution

6.`command line`
The **command line** is a text-based interface where users type commands to perform tasks like running programs, managing files, or configuring system settings.

7.`executable`
An **executable** is a machine code file, which a computer's processor can directly execute. It is generated by compiling and linking source code written in a programming language like C++.

8.`object code`
**Object code** is the machine-readable, intermediate binary code generated by the compiler before linking. It is not yet a complete executable but contains machine-level instructions converted from source code.

9.`comment`
A **comment** is text in the code that is ignored by the compiler during the compilation process(specifically during the preprocessing stage) and is used to explain or clarify the code for better understanding

10.`import`
An **import** allows us to use the external code, such as libraries or modules, by bringing their functionality into our program.

11.`library`
📌 **A header file** is a file (`.h` or `.hpp`) that contains **declarations** of functions, classes, and variables, telling the compiler what exists but not how it works.
With header files we must provide the corresponding `.cpp` file to define the declared functions.
So we need 3 things
1. Header (`.h`) files declare functions but don’t define them,
2. **Source (`.cpp`) files** that provides the actual function implementations
3. and **Main file (`main.cpp`)** which will call the functions implemented in `.cpp` files.

We need both `.h` and `.cpp` unless we're using a library.

📌 **A library** is a precompiled collection of **function implementations** (`.lib`, `.a`, `.so`, `.dll`) that the linker uses to provide the actual code for declared functions.

**First, we create a header file (`.h`)**, which only contains function **declarations**. Then, we must **explicitly compile** the `.cpp` file(s) into a **static (`.a`, `.lib`)** or **dynamic (`.so`, `.dll`)** library.

If we **don’t** perform this explicit compilation, we are just working with regular `.cpp` and `.h` files, and we must include and compile the `.cpp` source files in every project that uses them.

12.[[module(C++20)]](introduced in C++20)
Modules are collections of code files, similar to header files, that encapsulate our code(like `functions`, `classes`, `variables` into a single unit(related group of codes)
#### Key Features of C++ Modules
- **Enhanced Encapsulation:** Only necessary symbols are exposed.
- **Faster Compilation:** Compiled once and reused.
- **No Header Guards:** Eliminates the need for `#pragma once` or include guards.

| **Environment**        | **Default Compiler**                                                                                            | **Typical Module Interface Extension**                                       |
| ---------------------- | --------------------------------------------------------------------------------------------------------------- | ---------------------------------------------------------------------------- |
| **Visual Studio Code** | **Depends on configuration:** <br> - Windows: GCC(usually)<br> - Linux: GCC or Clang <br> - macOS: GCC or Clang | **Your choice:** <br> - MSVC setups: `.cppm` <br> - GCC/Clang setups: `.ixx` |
| **Visual Studio 2022** | **MSVC (by default)**                                                                                           | **`.cppm`**                                                                  |
| **Linux**              | **GCC (commonly)**, Clang                                                                                       | **`.ixx`** (by convention)                                                   |
| **macOS**              | **Clang (default via Xcode)**                                                                                   | **`.ixx`** (by convention)                                                   |
Additional content to watch:
4. https://www.youtube.com/watch?v=ZwaE-JM7smI&t=758s
5. https://www.youtube.com/watch?v=pAxEfF2yVlM&t=905s

---
13.`bug`
**Main Idea:**  
An error in a program is often called a **bug**.

**Origin Story:**  
The reason for calling an error ‘‘a bug’’ is that in a very early system a program failed because an insect had found its way into the computer In the early days, computers were much more vulnerable to physical issues, and there was an incident where an actual insect got into a machine and caused a malfunction.

14.`main()`
Every C++ program must have main function, which servers as an entry point and typically returns an success or failure exit code status

Additional content to watch:
6. look at [[argc_argv]]
7. watch https://www.youtube.com/watch?v=SEJjSo4qkl8&t=144s

15.`C++` 
C++ is a high-level, `compiled programming language`. That means that to get a program to run, you must first translate it from the human-readable form to something a machine can ‘‘understand.’’ That translation is done by a program called a `compiler

16.`IDE`
An IDE(Integrated Development Environment) is a software tool that combines a code editor, compiler, and debugger to help programmers write, test, and manage code efficiently

17.`source code`
What you read and write is called **source code** or **program text**, while what the computer executes is called **object code** or **machine code**.
C++ source code files typically have the `.cpp` extension (e.g., `hello_world.cpp`), and object code files have the `.obj` extension on **Windows** or `.o` on **Linux**.

18.`statement`
A part of a C++ program that specifies an action is called a `statement`.

19.`#include`
The #include directive is used to include header files in C++, which copies their contents into the source code before compilation

20.`debugging`
**Debugging** is the process of identifying, analyzing, and fixing errors in a program.

21.[[header file]]
📌 **A header file** is a file (`.h` or `.hpp`) that contains **declarations** of functions, classes, and variables, telling the compiler what exists but not how it works.
With header files we must provide the corresponding `.cpp` file to define the declared functions.
So we need 3 things
1. Header (`.h`) files declare functions but don’t define them,
2. **Source (`.cpp`) files** that provides the actual function implementations
3. and **Main file (`main.cpp`)** which will call the functions implemented in `.cpp` files.

We need both `.h` and `.cpp` unless we're using a library.

22.`program`
A program is a set of clear instructions that tells a computer exactly what to do.

23.`compile-time`
**Compile-time** is the phase in which your source code is read, checked for errors, and converted into machine code before your program runs.

24.`cout`
**cout**  means character output , which displays our data on the terminal using the << operator 
`<<` (called **insertion operator** or **stream insertion operator**))

25.`std`
**std** is the **standard namespace**, which contains standard library features like `cout`, `cin`, `string`, `vector`, and so on...

- `std::cout` → Standard output stream
- `std::cin` → Standard input stream
- `std::vector` → Dynamic array from the Standard Template Library (STL)


### Exercises
/*Task1
Change the program to output the two lines
Hello, programming!
Here we go!
(book exercise).
*/

/*Task2
Write a program that lists the instructions,
a computer would follow to find the upstairs bathroom(book exercise).
*/
#### Task 2 Step-by-Step Instructions

4. **Initialize Position and Orientation**
    - Set the starting position `(x, y, z) = (0, 0, 0)`.
    - Face a default direction ().
5. **Scan Surroundings for Navigational Cues**
    - Rotate in fixed increments (e.g., 90-degree steps).
    - At each step, detect objects such as walls, doors, and stairs.
6. **Locate the Stairs**
    - Identify an object labeled as “stairs” through detection.
    - If no stairs are detected, print the message.
7. **Navigate to the Stairs**
    - Walk towards the detected stairs in a straight line.
8. **Climb the Stairs**
    - Verify the number of stairs.
    - Step up one stair at a time while maintaining balance.
    - Stop when the top floor is reached.
9. **Reorient and Locate the Bathroom**
    - Perform another scan to detect rooms or doors.
    - Identify a door leading to a potential bathroom.
10. **Move Toward the Bathroom Door**
    - Walk in the direction of the detected door.
11. **Find the  Bathroom, and open it**
    - Verify if the bathroom is found, and enter it.


/*Task3(Implement later with key value algorithm, add some info about kitchen utensils, and so on..)
*/
Find a good cookbook. Read the instructions
Rewrite those instructions so that each individual action is in its own numbered paragraph.
• Rewrite those instructions so that each individual action is in its own numbered paragraph.
• Be careful to list all ingredients and all kitchen utensils used at each step. Be
careful about crucial details, such as the desired oven temperature, preheating the oven, the preparation of the muffin pan, the way to time the cooking, and the need to protect your hands when removing the muffins from the oven
• Consider those instructions from the point of view of a cooking novice (if you are not one, get help from a friend who does not know how to cook).
• Build a glossary of terms used. (What’s a muffin pan? What does preheating do? What do you mean by ‘‘oven’’?)
• Now bake some muffins and enjoy your results.

Ingredients
12. 1 tablespoon olive oil
13. 1 tsp no salt Cajun seasoning
14. 1 shallot diced(separated group of onion)
15. 1 clove garlic grated(1 зубчик чеснока, натертый на терке)
16. 1 bell pepper seasoning(Բուլղարական Պղպեղի համեմունք)
17. 1/3 cup low sodium diced tomato
18. 1 avocado diced
19. 1/2 cup andouille sausage
20. 1 can low sodium black beans washed and drained
21. 1 cup shredded Monterey jack cheese
22. 1 package ramen noodles
23. 2 cups beef broth(2 стакана говяжьего бульона)

Instructions:
In a pot or skillet with high sides bring to heat over a burner set for med-high heat 1 minute
- `1 tablespoon olive oil`,
- `1 shallot(diced(separated group of onion))`,
- `1 clove garlic grated(1 зубчик чеснока, натертый на терке)`, 
- `1 bell pepper seasoning(Բուլղարական Պղպեղի համեմունք)`
then, add
- `1/3 cup low sodium diced tomato`
- `1 avocado diced`
- `1/2 cup andouille sausage`
- `1 can low sodium black beans washed and drained`
- `1 cup shredded Monterey jack cheese`
- `1 package ramen noodles`
- `2 cups beef broth(2 стакана говяжьего бульона)`

Bring to a boil, reduce heat, cover, wait 8-9 minutes, and that's it


