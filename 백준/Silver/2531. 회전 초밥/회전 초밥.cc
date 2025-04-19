#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
	int N, d, k, c, c_sushi=0, max_total = 0;
	int sushi_list[30001] = {0,};
	vector <int> v;
	set <int> set;
	cin >> N >> d >> k >> c;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	for (int i = 0; i < k; i++) {
		set.insert(v[i]);
		sushi_list[v[i]]++;
	}
	if (set.find(c) == set.end()) { c_sushi=1; }
	max_total = set.size() + c_sushi;
	
	for (int i = 0; i < N-1; i++) {
		sushi_list[v[i]]--;
		if (!sushi_list[v[i]]) {
			set.erase(v[i]);
		}
		sushi_list[v[(i + k) % N]]++;
		set.insert(v[ (i+k) % N]);
		c_sushi = (set.find(c) == set.end()) ? 1 : 0;
		if (set.size() + c_sushi > max_total) { max_total = set.size() + c_sushi; }
	}
	printf("%d", max_total);
}