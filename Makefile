 SimExe: driver.o 
	g++ driver.o -o SimExe
 driver.o: driver.cpp ArrayPriorityQueue.h
	g++ -c driver.cpp
 clean:
	rm *.o StackExe