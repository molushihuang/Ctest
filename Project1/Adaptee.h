#pragma once
#ifndef ADAPTEE_H
#define ADAPTEE_H
#include <iostream>
using namespace std;

//需要适配的接口
class Adaptee
{
public:
	Adaptee() {}
	~Adaptee() {}//析构函数
	void specificRequest()//需要适配接口
	{
		cout << "Adaptee::specificRequest()" << endl;
	}
};

#endif // ADAPTEE_H