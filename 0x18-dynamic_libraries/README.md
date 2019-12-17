# C - Dynamic libraries

## What does Dynamic Library mean?
A dynamic library is a programming concept in which shared libraries with special functionalities are launched only during program execution, which minimizes overall program size and facilitates improved application performance for reduced memory consumption. In most software programs, distributing specific functionalities into distinct modules allows loading as needed.

A dynamic library is never part of an executable file or application. During runtime, a link is established between a dynamic library and executable file or application. [Techopedia](https://www.techopedia.com/definition/27133/dynamic-library)

![](https://miro.medium.com/max/2488/1*8OkfpKXsDhXQB0vy8-PRVg.png)
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
```

```
nm -D libholberton.so
0000000000000a90 T _abs
0000000000000bd7 T _isalpha
0000000000000c25 T _islower
0000000000000c46 T _isupper
0000000000000ce9 T _putchar
		 U write
```