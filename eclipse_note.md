# Eclipse Documentation 
## Preprocessor Include Paths, Macros

The C/C++/CUDA editors use the CDT indexer to improve syntax highlighting, allowing you to jump to macro definitions and to browse through include files.

The following table lists the compiler executables supported by the CDT CMake build integration.



| Compiler | Vendor/Standard  | Language | Macros  | Include directories | System include directories  | Macros file | Include file | Compiler executables |
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| gcc  | GNU Project  | C  | Yes | Yes  | Yes | Yes (-imacros) | Yes (-imacros)  | cc, cc.exe, gcc, gcc.exe, ".+-gcc", ".+-gcc.exe" |
| g++  | GNU Project  | C++  | Yes | Yes  | Yes | Yes (-imacros) | Yes (-imacros)  | c++, c++.exe, g++, g++.exe, ".+-g\+\+", ".+-g\+\+.exe", ".+-c\+\+", ".+-c\+\+.exe" |
| clang  | LLVM  | C  | Yes | Yes  | Yes | N/A | Yes (-imacros)  | clang, clang.exe |
| clang++  | LLVM  | C++  | Yes | Yes  | Yes | N/A | Yes (-imacros)  | clang++, clang++.exe |
| cc  | POSIX  | C  | Yes | Yes  | No | No | No  | cc, cc.exe |
| c++  | POSIX  | C++  | Yes | Yes  | No | No | No  | c++, c++.exe |

Remarks:

 * ".+-gcc" This representes a Java regular expression that also matches a target triplet, thus allowing to work with cross-compilers named like e.g. arm-none-eabi-gcc.
 * ".+-g\+\+" This representes a Java regular expression that also matches a target triplet, thus allowing to work with cross-compilers named like e.g. arm-none-eabi-g++.

### Target Triplet

https://wiki.osdev.org/Target_Triplet#Structure
