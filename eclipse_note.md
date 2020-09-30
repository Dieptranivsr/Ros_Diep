# Eclipse Documentation 
## Preprocessor Include Paths, Macros

The C/C++/CUDA editors use the CDT indexer to improve syntax highlighting, allowing you to jump to macro definitions and to browse through include files.

The following table lists the compiler executables supported by the CDT CMake build integration.



| Compiler | Vendor/Standard  | Language | Macros  | Include directories | System include directories  | Macros file | Include file | Compiler executables |
| ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- | ------------- |
| gcc  | GNU Project  | C  | Yes | Yes  | Yes | Yes (-imacros) | Yes (-imacros)  | cc, cc.exe, gcc, gcc.exe, ".+-gcc", ".+-gcc.exe |
| Content Cell  | Content Cell  | First Header  | Second Header | First Header  | Second Header | Second Header | First Header  | Second Header |

### Target Triplet

https://wiki.osdev.org/Target_Triplet#Structure
