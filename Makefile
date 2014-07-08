
all:calculator.c
	gcc calculator.c -std=c99 -o calculator
clean:
	rm -f calculator
