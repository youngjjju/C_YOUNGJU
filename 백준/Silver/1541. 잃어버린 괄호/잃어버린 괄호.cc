#include <iostream>
#include <string>
#include <vector>
#include <string.h>
using namespace std;

int main() {
	
	string equation;
	getline(cin, equation);
	vector<string> words;
	char word[6];
	int total = 0;
	int index = 0;
	int minusMode = 0;
	for (int i = 0; i < size(equation); i++) {
		char singleWord = equation[i];
		
		if (singleWord >= '0' && singleWord <= '9') { 
			word[index] = singleWord; 
			index++;
		}
		else { 
			if (index > 0) {
				word[index] = '\0';
				if (minusMode==0) { total += stoi(word); }
				else { total -= stoi(word); }
				memset(word, 0, sizeof(word));
				index = 0;
			}
		}
		if (singleWord == '-') {
			minusMode = 1;
		}
	}
	if (index > 0) {
		word[index] = '\0';
		if (!minusMode) { total += stoi(word); }
		else { total -= stoi(word); }
	}
	
	cout << total;
}