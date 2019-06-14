#pragma once
#ifndef ADAPTERCLASS_H
#define ADAPTERCLASS_H
#include "Target.h"
#include "Adaptee.h"

//类模式适配类，通过public继承获得接口继承的效果，通过private继承获得实现继承的效果
class AdapterClass : public Target, private Adaptee
{
public:
	AdapterClass() {}
	~AdapterClass() {}
	virtual void request()//实现Target定义的request接口
	{
		cout << "AdapterClass::request()" << endl;
		//在标准接口中调用要适配类的接口
		specificRequest();
	}
};

#endif // ADAPTERCLASS_H