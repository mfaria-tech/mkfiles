CC=clang
CFLAGS=	-g \
	-lm \
	-O0 \
	-Qunused-arguments \
	-std=c11 \
	-Wall \
	-Werror \
	-Wextra \
	-Wno-gnu-folding-constant \
	-Wno-sign-compare \
	-Wno-unused-parameter \
	-Wno-unused-variable
EXEC=mkfiles.exe
SRC= 	mkfiles.c \
	errs.c
OBJ= $(SRC:.c=.o)

all: $(OBJ)
	$(CC) -o $(EXEC) $(OBJ) $(CFLAGS)

mkfiles.o: src/mkfiles.c
	$(CC) -c $(CFLAGS) src/mkfiles.c -o mkfiles.o

errs.o: src/errs.c
	$(CC) -c $(CFLAGS) src/errs.c -o errs.o

clean:
	@rm -rf $(OBJ) 
