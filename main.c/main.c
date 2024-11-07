#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

typedef enum {
	PTR_LEFT,
	PTR_RIGHT,
	INC,
	DEC,
	PUT,
	GET,
	OPEN_LOOP,
	CLOSE_LOOP
} TypeKeyword;

typedef struct {
	TypeKeyword type;
} TokenKeyword;

int main(void) {
	FILE* file = NULL;
	char current = ' ';

	file = fopen("C:/Users/Cyber_User/Documents/BrainFuckCompiler/test.bf", "r");
	if (file == NULL) {
		printf("Error: Cannot open file\n");
		return 1;
	}
	current = fgetc(file);

	while (current != EOF) {
		printf("%c", current);
		current = fgetc(file);
	}

	return 0;
}