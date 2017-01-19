#include "relocate.h"
#include <vector>
#include <algorithm>
using namespace std;

LogList::LogList(vector<int> input_vector) {
	this->originList = input_vector;
}
void LogList::relocate() {
	sort(this->originList.begin(), this->originList.end());
}
vector<int> LogList::getLogList() {
	return this->originList;
}


