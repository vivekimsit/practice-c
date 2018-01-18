# practice-c

[![Join the chat at https://gitter.im/practice-c/general](https://badges.gitter.im/Join%20Chat.svg)](https://gitter.im/practice-c/general?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)

> Revising C lang

The codes here are just for learning purpose, there may be better ways to write them.

TODO
---

- [x] Types, Operators and Expressions
  - [x] Data types and sizes
  - [x] Enum data type
  - [x] Type conversions
  - [x] Constants
  - [x] Operators (Assignment, bit and ternary)
  - [x] Increment and decrement
  - [x] Precedence
- [x] Flow Control
  - [x] if/else
  - [x] switch
  - [x] while
  - [x] do-while
  - [x] for
  - [ ] Examples
- [ ] Functions
  - [ ] Examples
- [ ] Recursion
- [ ] Pointers
  - [x] Introduction
  - [x] Functions
  - [x] Arrays
  - [x] Pointer arithmentic
  - [x] Character ararys
  - [x] Array of pointers and multidimensional arrays
  - [x] Pointer to functions
  - [ ] Examples
- [ ] Arrays
- [ ] Strings
  - [x] Basic operations on string
  - [ ] Examples
- [ ] Storage Classes
  - [x] Register
  - [ ] Static
- [ ] Structures and Unions
- [ ] Input/Output
- [ ] File Input/Output



Pointers to functions
---

```c
int *fp(int, int);

its not the pointer to the function because
() has higher precedence to * hence its interpreted
as fp as function which returns a pointer to an int.

int sum(int, int);
     |
int (*fp)(int, int);

since, () is left associative hence above
is pointer to a function which takes two 
ints and returns an int.


fp = sum
s = sum(5, 6)
s = (*fp)(5, 6)
```

The `()` is left associative hence 
