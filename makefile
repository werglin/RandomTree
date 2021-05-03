all:compile run
compile:
	g++ -I ./include -c ./src/node.cpp -o ./lib/node.o
	g++ -I ./include -c ./src/tree.cpp -o ./lib/tree.o
	g++ -I ./include -o ./bin/prog ./src/prog.cpp ./lib/node.o ./lib/tree.o
run:
	./bin/prog