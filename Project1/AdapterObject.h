#pragma once
#ifndef ADAPTEROBJECT_H
#define ADAPTEROBJECT_H
#include "Target.h"
#include "Adaptee.h"

//对象适配器模式类，继承Target类，采用组合的方式实现Adaptee的复用
class AdapterObject : public Target
{
public:
	AdapterObject() {}
	AdapterObject(Adaptee* adaptee)
	{
		m_adaptee = new Adaptee();
	}
	~AdapterObject() {}
	virtual void request()//实现Target定义的Request接口
	{
		cout << "AdapterObject::request()" << endl;
		//在标准接口中调用要适配类的接口
		m_adaptee->specificRequest();
	}
private:
	Adaptee* m_adaptee;
};

#endif // ADAPTEROBJECT_H