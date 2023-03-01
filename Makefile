CC=clang
CFLAGS=-g \
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
SRC=main.c \
	errs.c \
	config.c \
	yml_handler.c
OBJ=$(SRC:.c=.o)

all: binFolder $(EXEC)

$(EXEC): $(OBJ)
	@echo -e "\e[0;34mBuilding binary: $(EXEC)\e[0m"
	$(CC) -o bin/$(EXEC) bin/*.o $(CFLAGS)
	@echo -e "\e[0;34mFinished building\e[0m\n"

%.o: src/%.c
	@echo -e "\e[0;34mMake assemble step: $@\e[0m"
	$(CC) -c $(CFLAGS) $< -o bin/$@
	@echo ' '

binFolder:
	@mkdir -p bin

clean:
	@rm -rf bin/$(OBJ)

.PHONY: all clean
