//#include <iostream>
//#include <cstring>
//#include <string>
//
//using namespace std;
//
//
//
//class Bank
//{
//public:
//	Bank() {
//		Adress = "Unknown";
//		Status = "Unknown";
//		prozents = 0;
//		count = 0;
//	}
//	void setBank(string Adress_, string Status_, int prozents_, int count_) {
//		Adress = Adress_;
//		Status = Status_;
//		prozents = prozents_;
//		count = count_;
//	}
//	string showBank() {
//		return Adress + " " + Status + " " + to_string(prozents) + " " + to_string(count);
//	}
//	int getprozentsBank() {
//		return prozents;
//	}
//	int getcountBank() {
//		return count;
//	}
//	
//
//private:
//	string Adress;
//	string Status;
//	int prozents;
//	int count;
//};
//
//Bank mas[5];
//string Adress_;
//string Status_;
//int prozents_;
//int count_;
//
//int main(void) {
//	int choose = 0;
//	cout << "1) Add new Bank's data base\n";
//	cout << "2) Show Bank's with big prozents\n";
//	cout << "3) Show Bank's with count lesser then\n";
//	cout << "4) Show bankrupts\n";
//	cout << "5) Show all Banks\n";
//	cout << "6) Exit\n";
//	cin >> choose;
//	switch (choose) {
//	case 1:
//	{
//		for (int i = 0; i < 5; i++) {
//			cout << "print Adress, Status, prozents and count\n";
//			cin >> Adress_;
//			cin >> Status_;
//			cin >> prozents_;
//			cin >> count_;
//			Bank NewBank;
//			NewBank.setBank(Adress_, Status_, prozents_, count_);
//			mas[i] = NewBank;
//		}
//		main();
//	}
//	case 2:
//	{
//		int a = 0;
//		int b = 0;
//		cout << "enter prozents\n";
//		cin >> a;
//		for (int i = 0; i < 5; i++) {
//			b = mas[i].getprozentsBank();
//			if (a < b) {
//				cout << mas[i].showBank() << endl;
//			}
//		}
//		main();
//	}
//	case 3:
//	{
//		int a = 0, b = 0;
//		cout << "enter count\n";
//		cin >> a;
//		for (int i = 0; i < 5; i++)
//		{
//			b = mas[i].getcountBank();
//			if (a > b) {
//				cout << mas[i].showBank() << endl;
//			}
//
//		}
//		main();
//	}
//	case 4:
//	{
//		int b = 0;
//		for (int i = 0; i < 5; i++)
//		{
//			b = mas[i].getcountBank();
//			if (b == 0) {
//				cout << mas[i].showBank() << endl;
//			}
//
//		}
//		main();
//	}
//	case 5:
//	{
//		for (int i = 0; i < 5; i++) {
//			cout << mas[i].showBank() << endl;
//		}
//		main();
//	}
//	case 6:
//	{
//		exit(0);
//	}
//	}
//	}