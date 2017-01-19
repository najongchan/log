#pragma once
#include <iostream>
#include <vector>
#include "relocate.h"
using namespace std;

class Log {
private:
	int level;
	vector<int> log;
public:
	Log(int input_size);
	void setLevel();
	int getLevel();
};