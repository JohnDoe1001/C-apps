#include <stdio.h>
int main() {
  // overcomplicated code in
	// 3
	// 2
	// 1
  char * char[] = "Hello World!";
	int * pointer_char = &char;
	printf(*pointer_char);
	// now pray to god that this program doesn't
	// create a memory leak :P
}
