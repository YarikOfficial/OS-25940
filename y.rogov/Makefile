all: build/1.out\
     build/2.out\
     build/3.out\
     build/4.out

clean: 
	rm -r build
build/1.out: build
	cc 1/main.c -o build/1.out
build/2.out: build
	cc 2/ex_time.c -o build/2.out
build/3.out: build
	cc 3/main.c -o build/3.out
build/4.out: build
	cc 4/main.c -o build/4.out
build:
	mkdir -p build
