### Notes from Crafting interpreter
# Frontend of programming languages
1. Lexing ( tokens )
2. Parsing - builds a tree structure ( syntax trees / ast ) from the tokens
  a. reports syntax errors as well
3. binding or resolution
  a. where scope comes into play
  b. if statically typed, we type check if failed throw type error
4. attributes, symbol table

# Intermediate representation

# Optimization (huge part if compiled languages)
a. constant folding
languages like Lua and CPython spend most of their time optimizing runtime


# Code Generation
assembly like instructions


## Backend
Generating bytecode (Virtual machine code)
Runtime ( fully compiled language, code implementing runtime gets inserted directly into executable)


### Single Pass Compilers
No code parsing, analysis and code gen; output code in the parser without using IRs

### Tree walk interpreters
Begin executing code right after parsing into AST

### Transpilers
source to source compiler,
consider you made a language -> compile to C -> then C compilation pipeline begins

### JITs (Just in Time Compilation)
executing code by compiling to machine code



## Difference between Compilers and interpreters
Generating bytecode or machine code, you are compiling ( doesn't execute it )
when we say interpreter, takes source code and executes immediately ( runs from source )

