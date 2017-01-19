#pragma once
#include <iostream>
#include <vector>
using namespace std;

class LogList{
private:
	vector<int> originList;

public:
	LogList(vector<int> input_vector);
	void relocate();
	vector<int> getLogList();
};