less_k_numbers: less_k_numbers.o heap_sort.o
	g++ -o less_k_numbers less_k_numbers.o heap_sort.o

less_k_numbers.o: less_k_numbers.cpp less_k_numbers.hpp
	g++ -c less_k_numbers.cpp

heap_sort.o: heap_sort.cpp
	g++ -c heap_sort.cpp

clean:
	rm less_k_numbers *.o
