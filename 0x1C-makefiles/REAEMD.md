## 0x1C. C - Makefiles 

# OBJ = $(SRC:.c=.o) 
- convert each .c file into -o example 
    main.c foot.c bad.c => main.o foot.o bad.o

OBJ = main.o foot.o bad.o

