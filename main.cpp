#include "Refrigerator.h"
#include "DaXiang.h"
#include <iostream>

using namespace std;


int main()
{
	Refrigerator R;
	string name;
	cout << "�������������" << endl;
	cin >>name;
	Elephant e(name);
	R.OpenDoor();
	R.PutIn(e);
	R.CloseDoor();
	return 0;
}