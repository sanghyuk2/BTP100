#ifndef  CRA_ACCOUNT_H
#define CRA_ACCOUNT_H

namespace sict {
		
	int max_name_length = 40;
	int min_sin = 100000000;
	int max_sin = 999999999;

	class CRA_Account {
		char familyName_;
		char givenName_;
		int sin_;

	public:
		void set(const char* familyName, const char* givenName, int sin);
		bool isEmpty() const;
		void display() const;
	};

	
}

#endif // ! CRA_ACCOUNT_H

