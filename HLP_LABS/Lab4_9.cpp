#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class Bus {
private:
	string name;
	string surname;
	int init;
	string brand;
	int busNumber;
	int ride;
public:
	Bus() {// ����������� �� ���������, ����� ��� ����, ����� � ��� ������� ��������������
		name = "Mr.Nobody";
		init = 0;

	}
	void setNewBus(string Bus_name, string Bus_surname, int Bus_init, string Bus_brand, int Bus_busNumber, int Bus_ride){// ������
		name = Bus_name;
		surname = Bus_surname;
		init = Bus_init;
		brand = Bus_brand;
		busNumber = Bus_busNumber;
		ride = Bus_ride;
	}
	int getBusNumber() {// ������ ��� ������ ��������
		return busNumber;
	}
	int getBusExpl() {//������ ��� ���� ������ ������������
		return init;
	}
	int getBusRide() {//  ������ ��� �������
		return ride;
	}
	string showBus() { // ����� ������������ ������
		return brand + " " + to_string(busNumber) + " " + to_string(init) + " " + to_string(ride) + " " + name + " " + surname;
 	}

};

Bus mas[3];
string name;
string surname;
int init;
string brand;
int busNumber;
int ride;

int main() {
	cout << "1) add list of bus\n2) expluatation more than 10 years\n3) number of bus\n4) ride more 10'000 km\n5) exit\n";
	int choose = 0;
	cin >> choose;
	cout << endl;
	switch (choose) {// ���� ��� ������ ������������� 
	case 1: {// ���������� ������� ��������
		for (int i = 0; i < 3; i++) {
			cout << "print Name of driver: ";
			cin >> name;
			cout << "print Surname of driver: ";
			cin >> surname;
			cout << "year of start expluatation: ";
			cin >> init;
			cout << "brand: ";
			cin >> brand;
			cout << "bus number: ";
			cin >> busNumber;
			cout << "duration: ";
			cin >> ride;
			Bus newBus;
			newBus.setNewBus(name, surname, init, brand, busNumber, ride);
			mas[i] = newBus;
		}
		cout << endl;
		main();
	}
	case 2: // ������� �������� �� ������ ������ 10 ���
	{
		int busexpl = 10;

		for (int i = 0; i < 3; i++) {
			if (busexpl < 2020 - mas[i].getBusExpl()) {
				cout << mas[i].showBus() << endl;
			}
		}
		cout << endl;
		main();
	}
	case 3: { // ������� �������� �� ������ ��������
		int busNumberID;

		cout << "Print Bus Number:\n";
		cin >> busNumberID;
		for (int i = 0; i < 3; i++) {
			if (busNumberID == mas[i].getBusNumber()) {
				cout << mas[i].showBus() << endl;
			}
		}
		cout << endl;
		main();
	}
	case 4:// ������� �������� � ��������� ������ 10000
	{
		int busride = 10000;

		for (int i = 0; i < 3; i++) {
			if (busride < mas[i].getBusRide()) {
				cout << mas[i].showBus() << endl;
			}
		}
		cout << endl;
		main();
	}
	case 5: { // ����� ���������
		exit(0);
	}
	}
}