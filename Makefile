default: main

main: main.cpp
	g++ main.cpp -o main

clean:
	rm -rf main
