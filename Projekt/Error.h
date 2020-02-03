#pragma once
#include <string>
using namespace std;
class Error
{
private:
	string message;
public:
	Error();
	Error(string message);
	~Error();
	string getMessage();
};

