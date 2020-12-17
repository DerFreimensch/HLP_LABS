/*#include <iostream>
#include <fstream>
#include <string>
using namespace std;
FILE* file;
char exe[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
char * symbol;
char line[1024];
int dictionary[26];
int numOfLetters = 1;
void choose();
void read();
void sort();

int main(void) {
	
	for (int i = 0; i < 26; i++) {
		dictionary[i] = 1;
	}
	choose();
	for (int i = 0; i < 26; i++) {
		cout << exe[i] << ' '  << dictionary [i] << endl;
	}
	
	
	

}
void read() {
	ifstream file;
	file.open("help.txt");
	while (!file.eof()) {
		file.getline(line , 1024);
		symbol = line;
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
	file.close();
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
	cout << "In what order do you want to display the dictionary: " << endl;
	cout << "1) Alphabetical " << endl;
	cout << "2) Frequency " << endl;
	cin >> turn;
	switch (turn){
		case 1:
			read();
			break;
		case 2:
			read();
			sort();
			break;
	}
}*/
