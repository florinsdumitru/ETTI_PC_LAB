SOURCE_FILES=$(shell find -name '*.c')
OBJ_FILES=$(SOURCE_FILES:.c=.o)

prog: $(OBJ_FILES)
	gcc $^ -o $@

%.o: %.c
	gcc -c $^ -o $@

.PHONY: clean
clean:
	rm -f prog $(OBJ_FILES)
