#include "Error.h"
#include <string>




Error::Error()
{
}

Error::Error(string message)
{
	this->message = message;
}


Error::~Error()
{
}

string Error::getMessage()
{
	return message;
}
