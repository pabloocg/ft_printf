[![License][license-logo]][license-url]

<br />
<p align="center">
  <h2 align="center">ft_printf</h2>

  <p align="center">
    Because putnbr and putstr aren’t enough
    <br />
    <a href="https://github.com/pabloocg/ft_printf/tree/master/srcs"><strong>Explore the docs »</strong></a>
  </p>
</p>

<!-- TABLE OF CONTENTS -->
<details open="open">
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>

## About The Project

This project is pretty straight forward. You will recode printf. Hopefully you will be able to reuse it in future project without the fear of being flagged as a cheater. You will mainly learn how to use variadic arguments.


### Madatory Part

| Program name     	| libftprintf.a                                                                       	|
|------------------	|-------------------------------------------------------------------------------------	|
| Turn in files    	| *.c, */*.c, *.h, */*.h, Makefile                                                    	|
| Makefile         	| all, clean, fclean, re, bonus                                                       	|
| External functs. 	| malloc, free, write, va_start, va_arg, va_copy, va_end                              	|
| Libft authorized 	| yes                                                                                 	|
| Description      	| Write a library that contains ft_printf, a function that will mimic the real printf 	|

- The prototype of ft_printf should be **int** **ft_printf(const** **char** ***,** **...);**
- It will manage the following conversions: **cspdiuxX%**
- It will manage any combination of the following flags: **'-0.*'** and minimum field width with all conversions

### Bonus Part

- Manage one or more of the following conversions: **nfge**
- Manage one or more of the following flags: **l** **ll** **h** **hh**
- Manage all the following flags: **'#**  **+'** (yes, one of them is a space)

## Getting Started

### Installation

1. Clone the repo
    ```sh
    git clone https://github.com/pabloocg/ft_printf.git
    ```
2. Enter the repository and run make
    ```sh
    cd ft_printf && make
    ```

## Usage

Now you can use the ft_printf function of the library in your projects!</br>
The only thing you have to do is to compile your project with the library.
```sh
gcc your_program.c -L (library_path) -lftprintf
```
Don't forget to include the ft_printf.h file in your project
```
#include "library_path/ft_printf.h"
```

## License

Distributed under the Apache License 2.0. See `LICENSE.txt` for more information.

## Contact

Pablo Cuadrado García </br>
[Linkedin][linkedin-url] - pablocuadrado97@gmail.com

[license-logo]: https://img.shields.io/hexpm/l/plug?style=for-the-badge
[license-url]: https://github.com/pabloocg/ft_printf/LICENSE.txt
[linkedin-url]: https://linkedin.com/in/pablo-cuadrado97

