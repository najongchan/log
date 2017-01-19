#include <iostream>
#include <vector>
#include <algorithm>

#include "log.h"
using namespace std;

int main() {
	int T;
	cin >> T;
	vector<int> Level_list;
	for (int i = 0; i < T; i++) {
		int num_log;
		cin >> num_log;
		
		Log *x;
		x = new Log(num_log);
		x->setLevel();
		Level_list.push_back(x->getLevel());
	}
	for (int i = 0; i < Level_list.size(); i++) {
		cout << Level_list[i] << endl;
	}

	return 0;
}