Csub Compiler

=====

This repository holds the code for CS 3310 lab project(compiler).


### Introduction

This is a C compiler, which converts C code to Javascript.I have tried to
include all the basic functionalities required to writed a program while defining the subset.


* [Compiler Structure Description]


### Team members
* Vinay Krishna 111501004
* Ayush Mittal 111501035

### Requirement

So far the compiler works with either mac or linux. Besides that,
you need to have Standard ML and ml-ulex,ml-yacc installed.


### Build
To build the compiler, simply run
```
sml -m sources.cm
```

This will build the image using `sources.cm`. 

### Compile
There are two outputs possible, 
To view the abstract tree , run 
```
Parse.parse("inputfilename");
```

To get the output code  run
```
Code_gen.gencode("inputfilename","outputfilename");
```

### Sample Programs 
Some sample c programs are present in test folder.

### Future Goals
Type checking and scope validation.
Adding pointer and structure extensions.

[Compiler Structure Description]: <structdesc.md>
