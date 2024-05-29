# 0x1C. C - Makefiles 

## Rules in Makefiles

'''bash
	target: prerequisites
    		recipe
'''
### Explicit Rule

'''bash
main.o: main.c
    gcc -c main.c -o main.o

'''
## Implicit Rule

''' bash 
%.o: %.c
    gcc -c $< -o $@
'''
## OBJ = $(SRC:.c=.o) 
- convert each .c file into -o example 
    main.c foot.c bad.c => main.o foot.o bad.o

OBJ = main.o foot.o bad.o
## .PHONY

- Summary : it make sure the target is a command not a file like main.o 

'''bash
fclean: clean oclean
main.o: main.c
	gcc main.c -o main.o
.PHONY: fclean main.o

'''
- it makes sure that the fclean and main.o are command and not file

