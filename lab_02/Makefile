prog: source1.o source2.o source3.o
	gcc $^ -o $@

source1.o: source1.c
	gcc -c $^ -o $@

source2.o: source2.c
	gcc -c $^ -o $@

source3.o: source3.c
	gcc -c $^ -o $@

.PHONY: clean
clean:
	rm -f prog *.o
