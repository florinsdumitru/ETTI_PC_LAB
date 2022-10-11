SOURCE_FILES= source1.c source2.c source3.c
OBJ_FILES=$(SOURCE_FILES:.c=.o)

prog: $(OBJ_FILES)
	gcc $^ -o $@

%.o: %.c
	gcc -c $^ -o $@

.PHONY: clean
clean:
	rm -f prog $(OBJ_FILES)
