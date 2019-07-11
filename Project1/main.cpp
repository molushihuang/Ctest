
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <time.h>
#include "md5.h"
#include<Windows.h>
#include "AdapterClass.h"
#include "AdapterObject.h"
#include <vector>
#include <list>
#include <set>
#include <algorithm>
using namespace std;

int g = 10;
static int number = 10; /* ȫ�ֱ��� */

// �������� 
void function(void);
void getSeconds(long *par);
int Max(int, int);  //��������

int getNumber(int a, int b) {
	return a + b;
}

int func() {
	return g;
}

void msg(char* msg, char* title) {
	//C���������ַ�����charָ�����
	MessageBox(0, msg, title, 0);

}


//ת��ΪСд
void mystrlwr(char str[], int len) {
	int i = 0;
	for (; i < len; i++) {
		//A-Z ��ĸ a-Z
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] - 'A' + 'a';
		}
	}

}

//��ϰ��ɾ���ַ�����ָ�����ַ�
void delchar(char* str, char del) {
	char* p = str;
	while (*str != '\0') {
		if (*str != del) {
			*p++ = *str;
		}
		str++;
	}
	*p = '\0';
}

class A {
private:
	int i, j;

public :
	A() :i(1),j(1){}
	~A() {};

	 void printA() {
		 cout << "call printA() in class A" << endl;
	}

	 void printSum() {
		 cout << i + j << endl;
	 }
};

class B :public A {

private :
	int a, b;

public:
	B() :a(2), b(3) {}
	~B() {};

	void printB() {
		cout << "call printB() in class B" << endl;
	}

	void printSum() {
		cout << a + b << endl;
	}
};

class Student {
private:
	string name;
	int score;

public:
	Student(string name,int score) {
		this->name = name;
		this->score = score;
	}
	int getScore() {
		return this->score;
	}

	void printStudent() {
		cout << "name: " << this->name << " score: " << this->score << endl;
	}
};

struct soft {
	bool operator()(const Student &left,const Student &right) {
		Student sdLeft = const_cast<Student&>(left);
		Student sdRight = const_cast<Student&>(right);
		return sdLeft.getScore() < sdRight.getScore();
	}
};

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
	//string str = "123456789";
	//cout << str.replace(2, 3, "ffdd")<<endl;
	//cout << str.size() << "+"<<str.length()<<endl;
	//cout << str + "sdada" <<endl;
	//cout << str.append("dsfsf") <<endl;
	//cout << str.find_first_of("2") << endl;
	//cout << str.find_first_of("9") << endl;
	//cout << str.substr(str.size() - 2, str.size()) << endl;
	//cout << str.substr(2, 7) << endl;

	//printf("%#x\n", msg);
	//printf("%#x\n", &msg);
	////����ָ��
	//void(*fun_p)(char* msg, char* title) = msg;
	//fun_p("��Ϣ����", "����");

	//��̬����������ڴ棬���ͷ�
	//int len;
	//printf("��������ĳ��ȣ�");
	//scanf("%d", &len);
	////�����ڴ棬��С�ڴ�len * 4 �ֽ�
	//int* p = (int*)malloc(len * sizeof(int));//p:������׵�ַ
	//for (int i = 0; i < len; i++) {
	//	p[i] = rand() % 100;
	//	printf("%d,%#x\n", p[i], &p[i]);
	//}
	////�ֶ��ͷ��ڴ�
	////free(p);

	////���·����ڴ沿��
	//int addLen;
	//printf("������Ҫ���ӵ����鳤�ȣ�");
	//scanf("%d",&addLen);
	//int* p2 = (int*)realloc(p,sizeof(int)*(len+addLen));
	//if (p2 == NULL) {
	//	printf("���·����ڴ�ʧ��");
	//}
	//for (int i = 0; i < (len + addLen); i++) {
	//	p2[i] = rand() % 100;
	//	printf("%d,%#x\n", p2[i], &p2[i]);
	//}

	////�ֶ��ͷ��ڴ� p2�ͷ��ڴ� pҲ���ͷţ���Ϊ��p2�����ڴ��ʱ��Ҫôp�Ѿ��ͷţ�Ҫôp2��pָ��ͳһ��ַ����
	//if (p2 != NULL) {
	//	free(p2);
	//	p2 = NULL;
	//}

    //strset ���ַ���s�е������ַ������ó��ַ�c
	//char str[] = "internet change the world!";
	//_strset(str, 'w');
	//printf("%s\n", str);

	//strrev ���ַ���s�������ַ���˳��ߵ�����
	/*char str[] = "internet change the world!";
	_strrev(str);
	printf("%s\n", str);*/

	//atoi �ַ���תΪint����
	//atol()�����ַ���ת��Ϊ������ֵ
	/*char str[] = "a78";
	int r = atoi(str);    
	printf("%d\n", r);*/

	//struprת��Ϊ��д
	//char str[] = "CHINA motherland!";
	//_strupr(str);
	//printf("%s\n", str);

	//ת��ΪСд
	//char str[] = "CHINA motherland!";
	//mystrlwr(str, strlen(str));
	//printf("%s\n", str);

	//ɾ���ַ�
	//char str[] = "vencent ppqq";
	//delchar(str, 't');
	//printf("%s\n", str);

	//��ģʽ������
	//Target* targetclass = new AdapterClass();
	//targetclass->request();

	//����ģʽ������
	//Target* targetobject = new AdapterObject();
	//targetobject->request();
	
	//����ָ����Դ���
	//int(*p)(int, int);  //����һ������ָ��
	//int a, b, c;
	//p = Max;  //�Ѻ���Max����ָ�����p, ʹpָ��Max����
	//printf("please enter a and b:");
	//scanf("%d%d", &a, &b);
	//c = (*p)(a, b);  //ͨ������ָ�����Max����
	//printf("a = %d\nb = %d\nmax = %d\n", a, b, c);

	//�ļ���
	//char path[] = "C:\\Users\\Administrator\\Desktop\\�½��ı��ĵ�.txt";
	//FILE* fp = fopen(path, "r");
	//if (fp == NULL) {
	//	printf("�ļ���ʧ��");
	//}
	////�ļ���ȡ(������)
	//char buff[50];
	//while (fgets(buff,50,fp))
	//{
	//	printf(buff);
	//}

	//�ļ�д��
	//char path[] = "C:\\Users\\Administrator\\Desktop\\file.txt";
	//FILE* fp = fopen(path, "w");
	//const char* text = "fdggdgdgd";
	//printf("%d", fputs(text, fp));

	//fclose(fp);

	//����ת�����Դ���
	//B *ptrB = new B();
	//ptrB->printA();
	//ptrB->printB();
	//ptrB->printSum();

	//A* ptrA = new A;
	//ptrB = static_cast<B*>( ptrA);
	//ptrB->printSum();
	//ptrB->printA();
	//ptrB->printB();

	//B b;
	//B& rb = b;
	//rb.printA();
	//rb.printB();
	//rb.printSum();
	//A& ra = static_cast<A&> (b);
	//ra.printA();
	//ra.printSum();

	//A a;
	//A& ra = a;
	//ra.printA();
	//ra.printSum();
	//B& rb = static_cast<B&>(a);
	//rb.printA();
	//rb.printB();
	//rb.printSum();

	//vector����
	//vector<char>vt;
	//vt.push_back('a');//��������
	//vt.push_back('b');
	//vt.push_back('c');
	//vt.push_back('d');

	//vt.insert(vt.begin()+1,'g');//��������
	//vt.front() = 'A';//�޸ĵ�һ������
	//vt.back() = 'D';//�޸����һ������

	////vt.pop_back();//ɾ���������һ������
	////vt.erase(vt.begin()+1);//ɾ��ָ��λ�õ�����
	////vt.erase(vt.begin(),vt.begin()+1);//ɾ��ָ�������ֵ

	//for (int i = 0; i < vt.size(); ++i) {
	//	cout << vt[i] << endl;
	//}
	//cout << "����������,����" << endl;
	//for (vector<char>::iterator it = vt.begin(); it < vt.end();it++) {
	//	cout << *it << endl;
	//}

	//cout << "����������,����" << endl;
	//for (vector<char>::reverse_iterator it = vt.rbegin(); it < vt.rend(); it++) {
	//	cout << *it << endl;
	//}

	//vector<char>vt2(vt.begin(),vt.begin()+2);//��ȡvt�����ݸ��Ƶ�vt2����
	//cout << "vt2��ֵ" <<endl;
	//for (int i = 0; i< vt2.size(); i++) {
	//	cout << vt2[i] << endl;
	//}

	//list����
	//list<int>lt;
	//lt.push_front(10);
	//lt.push_front(20);
	//lt.push_front(30);
	//lt.push_back(40);
	//lt.push_back(50);
	//lt.push_back(60);

	//lt.insert(lt.begin(), 80);//����

	////����ֻ����!=������<
	//for (list<int>::iterator it=lt.begin(); it != lt.end(); it++) {
	//	cout << *it << endl;
	//}

	//cout << "������λ��" << endl;
	//list<int>::iterator it = lt.begin();
	////�����������(++),֧��'++'��'--'�����,��֧��'+'��'-'�����,it = it - 1;  �������
	//it++;
	//it--;
	//cout << *it << endl;

	//cout << "ɾ����ʽ1�����ݵ�����λ��ɾ��" << endl;
	//list<int>::iterator it = lt.begin();
	//it++;
	//lt.erase(it);
	//for (list<int>::iterator it = lt.begin(); it != lt.end(); it++) {
	//	cout << *it << endl;
	//}

	//cout << "ɾ����ʽ2��ֱ��ɾ������" << endl;
	//lt.remove(50);
	//for (list<int>::iterator it = lt.begin(); it != lt.end(); it++) {
	//	cout << *it << endl;
	//}

	//cout << "ɾ����ʽ3������ɾ��" << endl;
	//list<int>::iterator it_begin = lt.begin();
	//list<int>::iterator it_end = lt.begin();
	//it_end++;
	//it_end++;
	//lt.erase(it_begin, it_end);
	//for (list<int>::iterator it = lt.begin(); it != lt.end(); it++) {
	//	cout << *it << endl;
	//}

	//set����
	//set<Student, soft>st;
	//st.insert(Student("sadad",50));
	//st.insert(Student("����¸���",70));
	//st.insert(Student("�����",60));
	//st.insert(Student("�·���ʱ�Է�",80));
	//st.insert(Student("˹�ٷ�ɭ��",20));

	//for (set<Student>::iterator it = st.begin(); it != st.end(); it++) {
	//	Student sd = const_cast<Student&>(*it);
	//	sd.printStudent();
	//}


	int borad[] = {1,2,3,4,5};
	sort(borad, borad + 5);
	int t = lower_bound(borad, borad + 5,3)-borad;//���ڵ���3��λ�ã���ȥ��ʼ��λ�ã������±�
	int t1 = upper_bound(borad, borad + 5,3)-borad;//����3��λ��
	auto* t2 = lower_bound(borad, borad + 5, 3);
	cout << t<< endl;
	cout << t1<< endl;
	cout << *t2<< endl;
	
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

int Max(int x, int y)  //����Max����
{
	int z;
	if (x > y)
	{
		z = x;
	}
	else
	{
		z = y;
	}
	return z;
}
