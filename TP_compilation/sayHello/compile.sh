#!/bin/sh

#g++ -std=c++11 -O2 -Wall -Wextra -o sayHello.out sayHello.cpp module1.cpp

g++ -Wall -Wextra -std=c++11 -c module1.cpp 
g++ -Wall -Wextra -std=c++11 -c sayHello.cpp

g++ -o sayHello.out sayHello.o module1.o

