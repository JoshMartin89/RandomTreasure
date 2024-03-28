#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Treasure {

public:

	virtual string whatAmI() = 0;
	virtual string Description() = 0;
	virtual string Aura() = 0;
	virtual int Cash() = 0;
};
