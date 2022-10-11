prog: source1.o source2.o source3.o
	gcc $^ -o $@

%.o: %.c
	gcc -c $^ -o $@

.PHONY: clean
clean:
	rm -f prog *.o
