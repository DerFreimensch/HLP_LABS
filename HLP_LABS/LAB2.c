#include <stdio.h>
FILE* file;
FILE* file1;
char line1[1024];
char line2[1024];
int i = 0, k=0;

char exe[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char* ptr;

void read() {
	while (!feof(file)) {
		ptr = fgets(line1, 1024, file);
		while (*ptr != '\0') {
			for (i = 0; i < 26; i++) {
				if (*ptr == exe[i]) {
					i = 0;
					*ptr = ' ';
					break;
				}
			}
			line2[k++] = *ptr;
			ptr++;
		}
		fputs(line2, file1);
		k = 0;
	}
}
int main(void) {
	fopen_s(&file, "file.txt", "r+t");
	fopen_s(&file1, "file1.txt", "w+t");
	read();
	fclose(file);
	fclose(file1);
	return 0;
}