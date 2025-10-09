#ifndef REFRIGERATOR


#include <iostream>
#include "DaXiang.h"
using namespace std;

class Refrigerator
{
public:
	void OpenDoor(void)
	{
		cout << "冰箱门打开" << endl;
	}

	void PutIn(Elephant ele)
	{
		cout << "大象 " << ele.GetName() << " 已经被放进冰箱" << endl;
	}

	void CloseDoor(void)
	{
		cout << "冰箱门关上" << endl;
	}
};

#endif 