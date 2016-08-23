CC= g++

CFLAGS = -std=c++11

all:
	$(CC) $(CFLAGS) ./src/main.cpp -o UCR.exe

main:
	$(CC) $(CFLAGS) ./src/main.cpp

clean:
	rm -rf UCR.exe
