OBJ = circle.o rect.o
LIB = libOO.a 

main: main.c $(LIB)
	gcc -o main main.c $(LIB)
	./main
$(LIB): $(OBJ)
	ar -rcs $(LIB) $(OBJ)
rect.o: src/rect.c
	gcc -c -o rect.o src/rect.c
circle.o: src/circle.c
	gcc -c -o circle.o src/circle.c

clean: 
	rm -f $(OBJ)