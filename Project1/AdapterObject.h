#pragma once
#ifndef ADAPTEROBJECT_H
#define ADAPTEROBJECT_H
#include "Target.h"
#include "Adaptee.h"

//����������ģʽ�࣬�̳�Target�࣬������ϵķ�ʽʵ��Adaptee�ĸ���
class AdapterObject : public Target
{
public:
	AdapterObject() {}
	AdapterObject(Adaptee* adaptee)
	{
		m_adaptee = new Adaptee();
	}
	~AdapterObject() {}
	virtual void request()//ʵ��Target�����Request�ӿ�
	{
		cout << "AdapterObject::request()" << endl;
		//�ڱ�׼�ӿ��е���Ҫ������Ľӿ�
		m_adaptee->specificRequest();
	}
private:
	Adaptee* m_adaptee;
};

#endif // ADAPTEROBJECT_H