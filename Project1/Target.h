#pragma once
#ifndef TARGET_H
#define TARGET_H
#include <iostream>
using namespace std;

//Ŀ��ӿ��࣬�ͻ����εĽӿ�
class Target
{
public:
	Target() {}
	virtual ~Target() {}
	virtual void request()//�����׼�ӿ�
	{
		cout << "Target::request()" << endl;
	}
};

#endif // TARGET_H