all:compile run
compile:
	g++ -I ./include -c ./src/Dugum.cpp -o ./lib/Dugum.o
	g++ -I ./include -c ./src/Lst.cpp -o ./lib/Lst.o
	g++ -I ./include -o ./bin/prog ./src/prog.cpp ./lib/Dugum.o ./lib/Lst.o
run:
	./bin/prog