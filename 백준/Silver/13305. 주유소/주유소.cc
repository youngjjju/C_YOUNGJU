#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> distance;
	vector<int> price;
	int moneyPoint[1000];
	for (int i = 0; i < N-1; i++) {
		int temp;
		cin >> temp;
		distance.push_back(temp);
	}
	for (int i = 0; i < N; i++) { 
		int temp;
		cin >> temp;
		price.push_back(temp);
	}
	int cheapest = min_element(price.begin(), price.end())-price.begin();
	moneyPoint[0]=cheapest;
	int moneyPointIndex = 1;
	while(cheapest!=0){
		vector<int> newPrice(price.begin(), price.begin() + cheapest);
		int prevCheapest = cheapest;
		cheapest = min_element(newPrice.begin(), newPrice.end()) - newPrice.begin();
		if (prevCheapest < cheapest) {break;}
		moneyPoint[moneyPointIndex]=cheapest;
		moneyPointIndex++;
	}
	sort(moneyPoint, moneyPoint + moneyPointIndex);
	int totalMoney = 0;
	int i=0;
	while (i+1 < moneyPointIndex) {
		totalMoney += price[moneyPoint[i]] * (moneyPoint[i+1] - moneyPoint[i]);
		i++;
	}
	if (moneyPointIndex == 1) {
		cout << accumulate(distance.begin(), distance.end(), 0)*price[0];
	}else {
		cout << totalMoney;
	}
}