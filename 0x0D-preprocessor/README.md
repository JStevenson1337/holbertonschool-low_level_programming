You just released the optional tasks of this project. Have fun!
0x0D. C - Preprocessor
By Julien Barbier & Johan Euphrosine, Software Engineer at Google
Ongoing project - started 10-21-2021, must end by 10-22-2021 (in about 13 hours) - you're done with 0% of tasks.
Checker will be released at 10-21-2021 12:00 PM
Manual QA review must be done (request it when you are done with the project)
QA review fully automated.
Resources
Read or watch:

Understanding C program Compilation Process
Object-like Macros
Macro Arguments
Pre Processor Directives in C
The C Preprocessor
Standard Predefined Macros
include guard
Common Predefined Macros
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What are macros and how to use them
What are the most common predefined macros
How to include guard your header files
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use \_putchar
You don’t have to push \_putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
Don’t forget to push your header file
All your header files should be include guarded
Quiz questions
Show

Tasks 0. Object-like Macro
mandatory
Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/\*\*

- main - check the code
-
- Return: Always 0.
  \*/
  int main(void)
  {
  int s;

      s = 98 + SIZE;
      printf("%d\n", s);
      return (0);

  }
  julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
  julien@ubuntu:~/0x0c. macro, structures$ ./a
  1122
  julien@ubuntu:~/0x0c. macro, structures$
  Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-preprocessor
File: 0-object_like_macro.h

1. Pi
   mandatory
   Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/\*\*

- main - check the code
-
- Return: Always 0.
  \*/
  int main(void)
  {
  float a;
  float r;

      r = 98;
      a = PI * r * r;
      printf("%.3f\n", a);
      return (0);

  }
  julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
  julien@ubuntu:~/0x0c. macro, structures$ ./b
  30171.855
  julien@ubuntu:~/0x0c. macro, structures$
  Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-preprocessor
File: 1-pi.h

2. File name
   mandatory
   Write a program that prints the name of the file it was compiled from, followed by a new line.

You are allowed to use the standard library
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-preprocessor
File: 2-main.c

3. Function-like macro
   mandatory
   Write a function-like macro ABS(x) that computes the absolute value of a number x.

julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/\*\*

- main - check the code
-
- Return: Always 0.
  \*/
  int main(void)
  {
  int i;
  int j;

      i = ABS(-98) * 10;
      j = ABS(98) * 10;
      printf("%d, %d\n", i, j);
      return (0);

  }
  julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
  julien@ubuntu:~/0x0c. macro, structures$ ./d
  980, 980
  julien@ubuntu:~/0x0c. macro, structures$
  Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-preprocessor
File: 3-function_like_macro.h

4. SUM
   mandatory
   Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.

julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/\*\*

- main - check the code
-
- Return: Always 0.
  \*/
  int main(void)
  {
  int s;

      s = SUM(98, 1024);
      printf("%d\n", s);
      return (0);

  }
  julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
  julien@ubuntu:~/0x0c. macro, structures$ ./e
  1122
  julien@ubuntu:~/0x0c. macro, structures$
  Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x0D-preprocessor
File: 4-sum.h

5. Worst abuse of the C preprocessor (IOCCC winner, 1986)
   #advanced
   Compile this program, written by Jim Hague (UK), and feed ascii text into standard input.

Write a blog post to explain what this program does, how it works, and “de-obfuscate” it step by step for the reader
You blog post should have at least one picture, at the top of the blog post
Publish your blog post on Medium or LinkedIn
Share your blog post at least on LinkedIn
Once done, please add all urls below (blog post, LinkedIn post, etc.)

Please, remember that these blogs must be written in English to further your technical ability in a variety of settings It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.

julien@ubuntu:~/c/ioccc$ cat hague.c
#define DIT (
#define DAH )
#define **DAH ++
#define DITDAH \*
#define DAHDIT for
#define DIT*DAH malloc
#define DAH_DIT gets
#define \_DAHDIT char
\_DAHDIT \_DAH*[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:"
;main DIT DAH{_DAHDIT
DITDAH \_DIT,DITDAH DAH_,DITDAH DIT*,
DITDAH \_DIT*,DITDAH DIT*DAH DIT
DAH,DITDAH DAH_DIT DIT DAH;DAHDIT
DIT \_DIT=DIT_DAH DIT 81 DAH,DIT*=\_DIT
**DAH;_DIT==DAH_DIT DIT \_DIT DAH;\_\_DIT
DIT'\n'DAH DAH DAHDIT DIT DAH_=_DIT;DITDAH
DAH_;**DIT DIT DITDAH
_DIT_?_DAH DIT DITDAH DIT_ DAH:'?'DAH,**DIT
DIT' 'DAH,DAH* \_\_DAH DAH DAHDIT DIT
DITDAH DIT*=2,_DIT_=_DAH_; DITDAH _DIT_&&DIT
DITDAH _DIT_!=DIT DITDAH DAH*>='a'? DITDAH
DAH*&223:DITDAH DAH* DAH DAH; DIT
DITDAH DIT* DAH **DAH,_DIT_ **DAH DAH
DITDAH DIT*+= DIT DITDAH \_DIT*>='a'? DITDAH _DIT_-'a':0
DAH;}_DAH DIT DIT_ DAH{ **DIT DIT
DIT*>3?\_DAH DIT DIT*>>1 DAH:'\0'DAH;return
DIT\_&1?'-':'.';}**DIT DIT DIT* DAH \_DAHDIT
DIT*;{DIT void DAH write DIT 1,&DIT*,1 DAH;}
julien@ubuntu:~/c/ioccc$ gcc -std=gnu89 hague.c -o h
hague.c: In function ‘main’:  
hague.c:6:17: warning: conflicting types for built-in function ‘malloc’; expected ‘void \*(long unsigned int)’ [-Wbuiltin-declaration-mismatch]  
 6 | #define DIT_DAH malloc  
 | ^~~~~~  
hague.c:12:40: note: in expansion of macro ‘DIT_DAH’  
 12 | DITDAH \_DIT*,DITDAH DIT_DAH DIT  
 | ^~~~~~~  
hague.c:1:1: note: ‘malloc’ is declared in header ‘<stdlib.h>’  
 +++ |+#include <stdlib.h>  
 1 | #define DIT (  
/usr/bin/ld: /tmp/cczAyJcz.o: in function `main': hague.c:(.text+0x151): warning: the `gets' function is dangerous and should not be used.  
julien@ubuntu:~/c/ioccc$ ./h
Hello, World  
.... . .-.. .-.. --- --..-- ? .-- --- .-. .-.. -..  
julien@ubuntu:~/c/ioccc$
Add URLs here:

Copyright © 2021 Holberton Inc, All rights reserved.
