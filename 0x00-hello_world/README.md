#Intro To C

Knowing the different stages of compilation of a C program file is important, this section contains scripts for the different compilation stages and what they do.

## Preprocessor:
	The preprocessor in a C compiler processes directives like #include and #define before compilation, handling file inclusion, macros, and conditional code. This part generates some intermediate files and gives them to the compiler

## Compiler
	The next stage after the preprocessor stage, the compiler transforms logic from c file into something the computer can run. This part generates assembly code and gives to the assembler

## Assembler
	The following stage is the assembly stage. Tne assembler acts as a bridge between the human readable assembly code and the machine-readable object code. It converts assembly files into object files, which contain low level instructions in binary.
