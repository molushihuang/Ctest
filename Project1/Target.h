#pragma once
#ifndef TARGET_H
#define TARGET_H
#include <iostream>
using namespace std;

//目标接口类，客户期盼的接口
class Target
{
public:
	Target() {}
	virtual ~Target() {}
	virtual void request()//定义标准接口
	{
		cout << "Target::request()" << endl;
	}
};

#endif // TARGET_H