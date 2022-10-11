OBJ_FILES=source1.o source2.o source3.o

prog: $(OBJ_FILES)
	gcc $^ -o $@

%.o: %.c
	gcc -c $^ -o $@

.PHONY: clean
clean:
	rm -f prog $(OBJ_FILES)
