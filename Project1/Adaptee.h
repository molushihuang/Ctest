#pragma once
#ifndef ADAPTEE_H
#define ADAPTEE_H
#include <iostream>
using namespace std;

//��Ҫ����Ľӿ�
class Adaptee
{
public:
	Adaptee() {}
	~Adaptee() {}//��������
	void specificRequest()//��Ҫ����ӿ�
	{
		cout << "Adaptee::specificRequest()" << endl;
	}
};

#endif // ADAPTEE_H