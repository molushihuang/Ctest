#pragma once
#ifndef ADAPTERCLASS_H
#define ADAPTERCLASS_H
#include "Target.h"
#include "Adaptee.h"

//��ģʽ�����࣬ͨ��public�̳л�ýӿڼ̳е�Ч����ͨ��private�̳л��ʵ�ּ̳е�Ч��
class AdapterClass : public Target, private Adaptee
{
public:
	AdapterClass() {}
	~AdapterClass() {}
	virtual void request()//ʵ��Target�����request�ӿ�
	{
		cout << "AdapterClass::request()" << endl;
		//�ڱ�׼�ӿ��е���Ҫ������Ľӿ�
		specificRequest();
	}
};

#endif // ADAPTERCLASS_H