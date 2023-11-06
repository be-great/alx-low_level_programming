# 0x0E. C - Structures, typedef



## Files
|File|Description|
|---|---|
|dog.h|Define a new type struct dog with the following elements:
    - name, type = char *
    - age, type = float
    - owner, type = char * |
|1-init_dog|function that initialize a variable of type struct dog|
|2-print_dog|function that prints a struct dog|
|||
|||
|||


## Command Run:-
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a && ./a
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b && ./b
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c && ./c
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d && ./d
	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e && ./e


	$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f && ./f
	$ valgrind ./f
