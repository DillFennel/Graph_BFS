all: main

main: graph.o graph_operations.o main.o
	g++ graph.o graph_operations.o main.o -o main

graph.o:
	g++ -c graph.cpp

graph_operations.o:
	g++ -c graph_operations.cpp

main.o:
	g++ -c main.cpp

clean:
	rm -rf *.o *.gch main