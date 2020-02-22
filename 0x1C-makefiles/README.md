# 0x1C. C - Makefiles

Makefiles are a simple way to organize code compilation. This tutorial does not even scratch the surface of what is possible using make, but is intended as a starters guide so that you can quickly and easily create your own makefiles for small to medium-sized projects.

A Simple Example
Let's start off with the following three files, hellomake.c, hellofunc.c, and hellomake.h, which would represent a typical main program, some functional code in a separate file, and an include file, respectively.

```
hellomake.c | hellofunc.c | hellomake.h
------------|-------------|------------
```#include <hellomake.h>
int main()
{
// call a function in another file
myPrintHelloMake();

return(0);
}
``` |
```
#include <stdio.h>
#include <hellomake.h>

void myPrintHelloMake(void){
printf("Hello makefiles!\n");

return;
}
``` |

/*
example include file
*/

vooid myPrintHelloMake(void);

```

