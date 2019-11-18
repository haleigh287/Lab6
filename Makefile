QueueDemo: main.o Test.o Queue.o
	g++ -g -Wall -std=c++11 main.o Queue.o Test.o -o QueueDemo

main.o: main.cpp
	g++ -g -std=c++11 -c main.cpp

Test.o: Test.h Test.cpp
	g++ -std=c++11 -g -Wall -c Test.cpp

clean:
	rm main.o QueueDemo *~
