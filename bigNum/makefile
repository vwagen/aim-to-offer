calculation: addBigNum.o bigNumCalculation.o calculationSupport.o compareBigNum.o subBigNum.o
	g++ -o calculation addBigNum.o bigNumCalculation.o calculationSupport.o compareBigNum.o subBigNum.o

bigNumCalculation.o: bigNumCalculation.cpp bigNumCalculation.hpp
	g++ -c bigNumCalculation.cpp

calculationSupport.o: calculationSupport.cpp calculationSupport.hpp
	g++ -c calculationSupport.cpp

addBigNum.o: addBigNum.cpp
	g++ -c addBigNum.cpp

subBigNum.o: subBigNum.cpp
	g++ -c subBigNum.cpp

compareBigNum.o: compareBigNum.cpp
	g++ -c compareBigNum.cpp

clean:
	rm calculation *.o
