sort: sort.o bubble_sort.o quick_sort.o merge_sort.o insert_sort.o heap_sort.o shell_sort.o straight_selection_sort.o
	g++ -o sort sort.o bubble_sort.o quick_sort.o merge_sort.o insert_sort.o heap_sort.o shell_sort.o straight_selection_sort.o

sort.o: sort.cpp sort.hpp
	g++ -c sort.cpp

bubble_sort.o: bubble_sort.cpp
	g++ -c bubble_sort.cpp

quick_sort.o: quick_sort.cpp
	g++ -c quick_sort.cpp

merge_sort.o: merge_sort.cpp
	g++ -c merge_sort.cpp

insert_sort.o: insert_sort.cpp
	g++ -c insert_sort.cpp

heap_sort.o: heap_sort.cpp
	g++ -c heap_sort.cpp

shell_sort.o: shell_sort.cpp
	g++ -c shell_sort.cpp

straight_selection_sort.o: straight_selection_sort.cpp
	g++ -c straight_selection_sort.cpp

clean: 
	rm sort *.o

