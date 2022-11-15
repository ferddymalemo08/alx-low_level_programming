# 0x0E-structures_typedef
---
## Objective:
- Structures; When, why and how to use them
- How to use typedef
---
| Task | Description |
| 0. Poppy | Define a new type struct dog with the following elements:
- name, type = char *
- age, type = float
- owner, type = char * |
| 1-init_dog.c | Write a function that initialize a variable of type struct dog |
| 2-print_dog.c | Write a function that prints a struct dog
- Prototype: void print_dog(struct dog *d);
- Format: see example bellow
- You are allowed to use the standard library
- If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
- If d is NULL print nothing. |
