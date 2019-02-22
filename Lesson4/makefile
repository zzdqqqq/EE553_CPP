frac: Fraction.o main.o
    g++ Fraction.o main.o -o frac

Fraction.o: Fraction.hh Fraction.cpp
    g++ -c Fraction.cpp

main.o: main.cpp Fraction.hh
    g++ -c main.cpp
