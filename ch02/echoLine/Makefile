echoLine: ./src/echoLine.o ./src/readLn.o ./src/writeStr.o
	gcc -g -Wall -o ./bin/echoLine ./src/echoLine.o ./src/readLn.o ./src/writeStr.o

echoLine.o: ./src/echoLine.c ./src/readLn.h ./src/writeStr.h
	gcc -g -Wall -c ./bin/echoLine.c 

readLn.o: ./src/readLn.c ./src/readLn.h
	gcc -g -Wall -c ./bin/readLn.c 


writeStr.o: ./src/writeStr.c ./src/writeStr.h
	gcc -g -Wall -c ./bin/writeStr.c 

clean:
	rm -i *~
