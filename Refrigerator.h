#ifndef REFRIGERATOR


#include <iostream>
#include "DaXiang.h"
using namespace std;

class Refrigerator
{
public:
	void OpenDoor(void)
	{
		cout << "�����Ŵ�" << endl;
	}

	void PutIn(Elephant ele)
	{
		cout << "���� " << ele.GetName() << " �Ѿ����Ž�����" << endl;
	}

	void CloseDoor(void)
	{
		cout << "�����Ź���" << endl;
	}
};

#endif 