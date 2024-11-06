.PHONY: all
all: unique unittests

unittests: unittests.o tree.o
	clang unittests.o tree.o -o unittests

unique: unique.o tree.o
	clang unique.o tree.o -o unique

unique.o: unique.c tree.h
	clang -c unique.c

tree.o: tree.c tree.h
	clang -c tree.c

unittests.o: unittests.c tree.h
	clang -c unittests.c

clean:
	rm *.o unique unittests
