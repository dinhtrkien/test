#include <iostream>
#include "date.h"

using namespace std;
int main()
{
	Date today;
	int d, m, y;
	today.set(d, m, y);
	today.print();
	
	return 0;
}

