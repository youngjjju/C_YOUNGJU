#include <iostream>
#include <cstring>
using namespace std;

typedef struct {
	int accountID;
	char userName[10];
	int moneyLeft;
}account;

account Acc[50];
int totalAccNum = 0;

void makeAccount() {

	int ID;
	char name[10];
	int moneyDeposit;

	cout << "\n[Account Open]" << endl;
	cout << "Acc ID: "; cin >> ID;
	cout << "Name: "; cin >> name;
	cout << "Money : "; cin >> moneyDeposit;
	cout << "\n";
	Acc[totalAccNum].accountID = ID;
	Acc[totalAccNum].moneyLeft = moneyDeposit;
	strcpy(Acc[totalAccNum].userName, name);
	totalAccNum++;

}

void depositMoney() {

	int accountNum, depositMoney;
	cout << "\n[Deposit]" << endl;
	cout << "Acc ID: "; cin >> accountNum;
	cout << "Money: "; cin >> depositMoney;

	for (int i = 0; i <= totalAccNum; i++) {
		if (Acc[i].accountID == accountNum) {
			Acc[i].moneyLeft += depositMoney;
		}
	}
	cout << "Deposit Done\n" << endl;
}

void withdrawMoney() {

	int accountNum, withdrawMoney;
	cout << "\n[Withdrawal]" << endl;
	cout << "Acc ID: "; cin >> accountNum;
	cout << "Money: "; cin >> withdrawMoney;

	for (int i = 0; i <= totalAccNum; i++) {
		if (Acc[i].accountID == accountNum) {
			Acc[i].moneyLeft -= withdrawMoney;
		}
	}
	cout << "Withdrawal Done\n" << endl;

}

void showAllAccInfo() {

	for (int i = 0; i < totalAccNum; i++) {
		cout << "\nAcc ID: " << Acc[i].accountID << endl;
		cout << "Name: " << Acc[i].userName << endl;
		cout << "Remain: " << Acc[i].moneyLeft << endl;
		cout << "\n";
	}

}

void showMenu() {

	cout << "-----Menu-----" << endl;
	cout << "1. Acc Open" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdrawal" << endl;
	cout << "4. Print All Acc Info" << endl;
	cout << "5. Quit" << endl;
	cout << "Which Thing?: ";

}

int main() {
	int num;
	while (1) {

		showMenu();
		cin >> num;
		switch (num) {
		case 1: {
			makeAccount();
			break;
		}
		case 2: {
			depositMoney();
			break;
		}
		case 3: {
			withdrawMoney();
			break;
		}
		case 4: {
			showAllAccInfo();
			break;
		}
		case 5:break;
		}
		if (num == 5) {
			break;
		}

	}
	return 0;
}