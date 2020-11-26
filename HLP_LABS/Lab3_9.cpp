#include <stdio.h>
FILE* file;
char exe[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char line[1024], * symbol;
int dictionary[26];
int numOfLetters = 1;
void choose();
void read();
void sort();

int main(void) {
	fopen_s(&file, "help.txt", "r+t");
	for (int i = 0; i < 26; i++) {
		dictionary[i] = 1;
	}
	choose();
	for (int i = 0; i < 26; i++) {
		printf ("%c %d\n", exe[i], dictionary [i]);
	}
	
	
	fclose(file);

}
void read() {
	while (!feof(file)) {
		symbol = fgets(line, 1024, file);
		while (*symbol != '\0') {
			if (*symbol == NULL) {
				break;
			}
			for (int i = 0; i < 26; i++) {
				if (*symbol == exe[i]) {
					dictionary[i] ++;
					break;
				}
			}
			symbol++;


		}
	}
}

void sort() {
	int buffer;
	char sbuffer[1];
	for (int i = 0; i < 25;i++) {
		if (dictionary[i] < dictionary[i + 1]) {
			buffer = dictionary[i];
			dictionary[i] = dictionary[i + 1];
			dictionary[i + 1] = buffer;
			sbuffer[0] = exe[i];
			exe[i] = exe[i + 1];
			exe[i + 1] = sbuffer[0];
			i = -1;
		}
	}
}

void choose() {
	int turn;
	printf("In what order do you want to display the dictionary: \n");
	printf("1) Alphabetical \n");
	printf("2) Frequency\n");
	scanf_s("%d", &turn);
	switch (turn){
		case 1:
			read();
			break;
		case 2:
			read();
			sort();
			break;
	}
}
