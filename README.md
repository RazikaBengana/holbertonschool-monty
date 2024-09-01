<div align="center">
<br>

![Monty.png](README-image/monty.png)

</div>


<p align="center">
<img src="https://img.shields.io/badge/-C-yellow">
<img src="https://img.shields.io/badge/-Linux-lightgrey">
<img src="https://img.shields.io/badge/-WSL-brown">
<img src="https://img.shields.io/badge/-Ubuntu%2020.04.4%20LTS-orange">
<img src="https://img.shields.io/badge/-JetBrains-blue">
<img src="https://img.shields.io/badge/-Holberton%20School-red">
<img src="https://img.shields.io/badge/License-not%20specified-brightgreen">
</p>


<h1 align="center"> C - Stacks, Queues - LIFO, FIFO </h1>


<h3 align="center">
<a href="https://github.com/RazikaBengana/holbertonschool-monty#eye-about">About</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-monty#hammer_and_wrench-tasks">Tasks</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-monty#memo-learning-objectives">Learning Objectives</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-monty#computer-requirements">Requirements</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-monty#keyboard-more-info">More Info</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-monty#mag_right-resources">Resources</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-monty#bust_in_silhouette-authors">Authors</a> •
<a href="https://github.com/RazikaBengana/holbertonschool-monty#octocat-license">License</a>
</h3>

---

<!-- ------------------------------------------------------------------------------------------------- -->

<br>
<br>

## :eye: About

<br>

<div align="center">

**`C - stacks, queues - LIFO, FIFO`** project is a collaborative group assignment that involves creating a stack-based interpreter for `Monty ByteCodes` files.
<br>
It requires to implement a program that can read and execute various stack operations like `push`, `pop`, `swap`, and arithmetic operations defined in Monty ByteCodes instructions.
<br>
The project challenges to handle error conditions, manage memory efficiently, and work with linked list data structures to represent and manipulate the stack.
<br>
<br>
This project has been created by **[Holberton School](https://www.holbertonschool.com/about-holberton)** to enable every student to understand how `Stacks` & `Queues` in C language work.

</div>

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :hammer_and_wrench: Tasks

<br>

**`0. push, pall`**

**`1. pint`**

**`2. pop`**

**`3. swap`**

**`4. add`**

**`5. nop`**

**`6. sub`**

**`7. div`**

**`8. mul`**

**`9. mod`**

**`10. comments`**

**`11. pchar`**

**`12. pstr`**

**`13. rotl`**

**`14. rotr`**

**`15. stack, queue`**

**`16. Brainf*ck`**

**`17. Add two digits`**

**`18. Multiplication`**

**`19. Multiplication level up`**

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :memo: Learning objectives

<br>

**_You are expected to be able to [explain to anyone](https://fs.blog/feynman-learning-technique/), without the help of Google:_**

<br>

```diff

General

+ What do LIFO and FIFO mean

+ What is a stack, and when to use it

+ What is a queue, and when to use it

+ What are the common implementations of stacks and queues

+ What are the most common use cases of stacks and queues

+ What is the proper way to use global variables

```

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :computer: Requirements

<br>

```diff

General

+ Allowed editors: vi, vim, emacs

+ All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic

+ All your files should end with a new line

+ A README.md file, at the root of the folder of the project is mandatory

+ Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

+ You are allowed to use a maximum of one global variable

+ No more than 5 functions per file

+ You are allowed to use the C standard library

+ The prototypes of all your functions should be included in your header file called monty.h

+ Don’t forget to push your header file

+ All your header files should be include guarded

+ You are expected to do the tasks in the order shown in the project

```

<br>

**_Why all your files should end with a new line? See [HERE](https://unix.stackexchange.com/questions/18743/whats-the-point-in-adding-a-new-line-to-the-end-of-a-file/18789)_**

<br>
<br>

### GitHub

<br>

There should be one project repository per group. <br>
If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :keyboard: More Info

<br>

### Data structures:

<br>

- Please use the following data structures for this project (don’t forget to include them in your header file):

<br>

```yaml
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
```

<br>
<br>

```yaml
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```

<br>
<br>

### Compilation & Output:

<br>

- Your code will be compiled this way:

<br>

```yaml
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

<br>

- Any output must be printed on `stdout`.

- Any error message must be printed on `stderr`
  - [Here is a link to a GitHub repository](https://github.com/ku1ik/stderred) that could help you making sure your errors are printed on `stderr`.

<br>
<br>

### Tests:

<br>

- We strongly encourage you to work all together on a set of tests.

<br>
<br>

### The Monty language:

<br>

- `Monty 0.98` is a scripting language that is first compiled into `Monty ByteCodes` (Just like `Python`). <br>
It relies on a unique stack, with specific instructions to manipulate it. <br>

- The goal of this project is to create an interpreter for `Monty ByteCodes` files.

<br>
<br>

#### Monty byte code files:

<br>

- Files containing Monty ByteCodes usually have the `.m` extension. <br>
Most of the industry uses this standard but it is not required by the specification of the language. <br>

- There is not more than one instruction per line.

<br>

- There can be any number of spaces before or after the opcode and its argument:

<br>

```yaml
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
```

<br>
<br>

- Monty ByteCodes files can contain blank lines <br>
(empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account):

<br>

```yaml
julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
```

<br>
<br>

#### The monty program:

<br>

- Usage: `monty file`
    - where `file` is the path to the file containing Monty ByteCode.

<br>

- If the user does not give any file or more than one argument to your program, print the error message `USAGE: monty file`, followed by a new line, and exit with the status `EXIT_FAILURE`.

<br>

- If, for any reason, it’s not possible to open the file, print the error message `Error: Can't open file <file>`, followed by a new line, and exit with the status `EXIT_FAILURE`
  - where `<file>` is the name of the file.

<br>

- If the file contains an invalid instruction, print the error message `L<line_number>: unknown instruction <opcode>`, followed by a new line, and exit with the status `EXIT_FAILURE`
  - where is the line number where the instruction appears.
  - Line numbers always start at 1.

<br>

- The monty program runs the bytecodes line by line and stop if either:
  - it executed properly every line of the file
  - it finds an error in the file
  - an error occured.

<br>

- If you can’t malloc anymore, print the error message `Error: malloc failed`, followed by a new line, and exit with status `EXIT_FAILURE`.

- You have to use `malloc` and `free` and are not allowed to use any other function from `man malloc` (`realloc`, `calloc`, …).

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :mag_right: Resources

<br>

**_Do you need some help?_**

<br>

**Read or watch:**

* [Google](https://www.google.com/webhp?q=stack%20and%20queue)

* [How do I use extern to share variables between source files in C?](https://stackoverflow.com/questions/1433204/how-do-i-use-extern-to-share-variables-between-source-files)

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :bust_in_silhouette: Authors

<br>

**${\color{blue}Noémie \space Pham}$** ---> `Github` : [Noémie Huynh](https://github.com/noemiepham)

**${\color{blue}Razika \space Bengana}$**

<br>
<br>

<!-- ------------------------------------------------------------------------------------------------- -->

## :octocat: License

<br>

```C - stacks, queues - LIFO, FIFO``` _project has no license specified._

<br>
<br>

---

<p align="center"><br>2022</p>