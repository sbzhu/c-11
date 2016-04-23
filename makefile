all : c11 
c11 : c11.cpp
	g++ -std=c++0x c11.cpp -o c11 
