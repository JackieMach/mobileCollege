CC= g++

CFLAGS = -std=c++11

all:
	$(CC) $(CFLAGS) ./src/Driver.cpp -o UCR.exe

Driver:
	$(CC) $(CFLAGS) ./src/Driver.cpp

Courses:
	$(CC) $(CFLAGS) ./src/Courses.cpp

SchoolSeason.cpp:
	$(CC) $(CFLAGS) ./src/SchoolSeason.cpp

clean:
	rm -rf UCR.exe
	rm -rf ./src/a.out
