
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <time.h>
#include "md5.h"
using namespace std;

int g = 10;
static int number = 10; /* ȫ�ֱ��� */

// �������� 
void function(void);
void getSeconds(long *par);

int getNumber(int a, int b) {
	return a + b;
}

int func() {
	return g;
}

int main() {

	//string str = "hello world\n";
	//cout << str;
	////printf("���ã�������������");

	//// ��������
	//int a, b;
	//int c;
	//float f;

	//// ʵ�ʳ�ʼ��
	//a = 10;
	//b = 20;
	//c = a + b;

	//cin >> c;

	//cout << c << endl;

	//f = 70.0 / 3.0;
	//cout << f << endl;

	//int g = 20;
	//int k = func();//�������ȡ����ֵ��ȫ�ֱ�����ֵ
	//cout << k << endl;
	//cout << ::g << endl;//�������ȫ�ֱ���
	//cout << g << endl;//����������Ǿֲ�����

	//while (number--)
	//{
	//	function();
	//}

	//int var = 20;
	//int* ip;//����ָ�����
	//ip = &var;//ָ������д洢var�ĵ�ַ

	//cout << var << endl;//�����ֵ
	//cout << ip << endl;//���ָ������д洢��ַ
	//cout << *ip << endl;//�����ֵ
	//cout << &var << endl;//����洢��ַ

	//long sec;
	//getSeconds(&sec);
	//cout << sec << endl;

	//md5����
	//const char* text = "hello world";
	//CMD5 iMD5;
	//iMD5.GenerateMD5((unsigned char*)text, strlen(text));
	//std::string result = iMD5.ToString();
	//cout << result << endl;

	//�ַ���������
	string str = "123456789";
	//cout << str.replace(2, 3, "ffdd")<<endl;
	cout << str.size() << "+"<<str.length()<<endl;
	//cout << str + "sdada" <<endl;
	//cout << str.append("dsfsf") <<endl;
	//cout << str.find_first_of("2") << endl;
	//cout << str.find_first_of("9") << endl;
	//cout << str.substr(str.size() - 2, str.size()) << endl;
	cout << str.substr(2, 7) << endl;

	return getNumber(10, 36);
}

// ��������
void function(void)
{
	static int i = 5; // �ֲ���̬����
	i++;
	cout << "���� i Ϊ " << i;
	cout << " , ���� count Ϊ " << number << endl;
}

void getSeconds(long *par) {

	*par = time(NULL);
	//*par = 15328;


}
