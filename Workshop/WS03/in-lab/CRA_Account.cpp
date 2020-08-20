#include <cstring>
#include <iostream>
#include "CRA_Account.h"

using namespace std;

namespace sict
{
	void set(const char* familyName, const char* givenName, int sin) {
		if (strlen(sin) == 9 && sin < max_sin && sin > min_sin) {
			*familyName_ = familyName;
			*givenName_ = givenName;
			sin_ = sin;
		}

		
	}
	bool isEmpty() {

	}
	void display() {

	}
}