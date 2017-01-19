#include "log.h"
#include "relocate.h"
#include <vector>
#include <algorithm>
using namespace std;

Log::Log(int input_size) {
	int x;
	this->level = 99999;

	for (int i = 0; i < input_size; i++) {
		cin >> x;
		this->log.push_back(x);
		}
}

void Log::setLevel() {
	LogList modified_list(this->log);
	modified_list.relocate();
	vector<int> newVector = modified_list.getLogList();

	for (int i = 0; i < newVector.size(); i++) {
		int newlevel = abs(newVector[(i % newVector.size())] - newVector[((i + 1) % newVector.size())]);
		if (this->level >> newlevel) {
			this->level = newlevel;
		}
	}
}
int Log::getLevel() {
	return this->level;
}