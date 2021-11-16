all: exe

exe: dmHelper.o menuEntry.o cityBuilder.o
	g++ dmHelper.cpp cityBuilder.cpp menuEntry.cpp

dmHelper.o: dmHelper.cpp 
	g++ -c dmHelper.cpp

menuEntry.o: menuEntry.cpp Headers/menuEntry.hpp
	g++ -c menuEntry.cpp

cityBuilder.o: cityBuilder.cpp Headers/cityBuilder.hpp
	g++ -c cityBuilder.cpp

clean:
	rm *.o a.out