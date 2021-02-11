[Home of Lab Report](../lab.html)

# Program Ex 02: Compilation and Execution of C Program

## Aim

To compile and execute a C program on Mosh.

## Discuss

Compile means to covert the source code (i.e. program code written in C) to machine language (i.e. code that the computer understands)  and this process is called compilation. And compilation is done by compiler. So, the compiler finally converts the source code to an executable file and the process of running an executable file is called execution. Thus, we are gonna compile and excute a C program to get the output and as we are working on remote server (as per exercise 1), we need to dp compilation and execution on remote server using Mosh within which we are gonna use xmake utility software.
Using xmake we will create a project under `public_html` folder (most preferable as this folder is already created and it can be accessed through website link) with a name (decided by the user) using create command

## Procedure

1. Enter into public_html directory by issuing command: `cd public_html` where `cd` stands for change directory and it is used as we are changing directory from `home` to `public_html`.
2. Issue command `xmake create -l c test` to create a xmake project for language C with name `test` (`test` can be replaced with any other name as per your choice and problem for which project is being made). So, in this command `-l` stands for language and `c` is to specify C language.
3. Enter into test directory by issuing command `cd test`. Within test directory there is a file named `xmake.lua` which is not for our purpose and a folder named `src` within which there is a `main.c` which contains the C program code which is our concern.
4. `main.c` file contains a default program to print `hello world!`. C program code within `main.c` can be edited using a editor name `nano` but in actual there are many editors available such as `pico`, `joe` etc. But for now we will use `nano`.
5. Now, for compilation we need to issue command `xmake` which will create a directory named `build` within project folder, `test`. In `build` folder there wil be few more directories (one inside another) and at last there will be executeable file with name that of project name.
6. At last to execute that executable file we need to issue comand `xmake run` which will print `hello world!` on screen which is the default program's output.

## Source file/s

```
src/.
└── main.c

0 directories, 1 file
```

---


# src/main.c

```

#include <stdio.h>

int main(int argc, char** argv)
{
    printf("hello world!\n");
    return 0;
}

```

---

## Compilation

```
xmake

checking for architecture ... x86_64
[ 50%]: ccache compiling.release src/main.c
[ 75%]: linking.release comp_exec
[100%]: build ok!

```

## Execution
```
xmake run

hello world!

```

### Lessons Learned:

1. What is compilation and execution?
2. What is source code and machine code?
3. Use of `cd` command `xmake` commands.
4. How to compile and execute a C program?
