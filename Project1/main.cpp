
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
static int number = 10; /* 全局变量 */

// 函数声明 
void function(void);
void getSeconds(long *par);
int Max(int, int);  //函数声明

int getNumber(int a, int b) {
	return a + b;
}

int func() {
	return g;
}

void msg(char* msg, char* title) {
	//C语言里面字符串用char指针代替
	MessageBox(0, msg, title, 0);

}


//转换为小写
void mystrlwr(char str[], int len) {
	int i = 0;
	for (; i < len; i++) {
		//A-Z 字母 a-Z
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = str[i] - 'A' + 'a';
		}
	}

}

//练习：删除字符串中指定的字符
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
	////printf("你妹！！！！！！！");

	//// 变量定义
	//int a, b;
	//int c;
	//float f;

	//// 实际初始化
	//a = 10;
	//b = 20;
	//c = a + b;

	//cin >> c;

	//cout << c << endl;

	//f = 70.0 / 3.0;
	//cout << f << endl;

	//int g = 20;
	//int k = func();//这里面获取到的值是全局变量的值
	//cout << k << endl;
	//cout << ::g << endl;//这里输出全局变量
	//cout << g << endl;//这里输出的是局部变量

	//while (number--)
	//{
	//	function();
	//}

	//int var = 20;
	//int* ip;//声明指针变量
	//ip = &var;//指针变量中存储var的地址

	//cout << var << endl;//输出数值
	//cout << ip << endl;//输出指针变量中存储地址
	//cout << *ip << endl;//输出数值
	//cout << &var << endl;//输出存储地址

	//long sec;
	//getSeconds(&sec);
	//cout << sec << endl;

	//md5测试
	//const char* text = "hello world";
	//CMD5 iMD5;
	//iMD5.GenerateMD5((unsigned char*)text, strlen(text));
	//std::string result = iMD5.ToString();
	//cout << result << endl;

	//字符串处理部分
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
	////函数指针
	//void(*fun_p)(char* msg, char* title) = msg;
	//fun_p("消息内容", "标题");

	//动态给数组分配内存，并释放
	//int len;
	//printf("输入数组的长度：");
	//scanf("%d", &len);
	////开辟内存，大小内存len * 4 字节
	//int* p = (int*)malloc(len * sizeof(int));//p:数组的首地址
	//for (int i = 0; i < len; i++) {
	//	p[i] = rand() % 100;
	//	printf("%d,%#x\n", p[i], &p[i]);
	//}
	////手动释放内存
	////free(p);

	////重新分配内存部分
	//int addLen;
	//printf("输入需要增加的数组长度：");
	//scanf("%d",&addLen);
	//int* p2 = (int*)realloc(p,sizeof(int)*(len+addLen));
	//if (p2 == NULL) {
	//	printf("重新分配内存失败");
	//}
	//for (int i = 0; i < (len + addLen); i++) {
	//	p2[i] = rand() % 100;
	//	printf("%d,%#x\n", p2[i], &p2[i]);
	//}

	////手动释放内存 p2释放内存 p也会释放，因为给p2分配内存的时候要么p已经释放，要么p2、p指向统一地址区域
	//if (p2 != NULL) {
	//	free(p2);
	//	p2 = NULL;
	//}

    //strset 把字符串s中的所有字符都设置成字符c
	//char str[] = "internet change the world!";
	//_strset(str, 'w');
	//printf("%s\n", str);

	//strrev 把字符串s的所有字符的顺序颠倒过来
	/*char str[] = "internet change the world!";
	_strrev(str);
	printf("%s\n", str);*/

	//atoi 字符串转为int类型
	//atol()：将字符串转换为长整型值
	/*char str[] = "a78";
	int r = atoi(str);    
	printf("%d\n", r);*/

	//strupr转换为大写
	//char str[] = "CHINA motherland!";
	//_strupr(str);
	//printf("%s\n", str);

	//转换为小写
	//char str[] = "CHINA motherland!";
	//mystrlwr(str, strlen(str));
	//printf("%s\n", str);

	//删除字符
	//char str[] = "vencent ppqq";
	//delchar(str, 't');
	//printf("%s\n", str);

	//类模式适配器
	//Target* targetclass = new AdapterClass();
	//targetclass->request();

	//对象模式适配器
	//Target* targetobject = new AdapterObject();
	//targetobject->request();
	
	//函数指针测试代码
	//int(*p)(int, int);  //定义一个函数指针
	//int a, b, c;
	//p = Max;  //把函数Max赋给指针变量p, 使p指向Max函数
	//printf("please enter a and b:");
	//scanf("%d%d", &a, &b);
	//c = (*p)(a, b);  //通过函数指针调用Max函数
	//printf("a = %d\nb = %d\nmax = %d\n", a, b, c);

	//文件打开
	//char path[] = "C:\\Users\\Administrator\\Desktop\\新建文本文档.txt";
	//FILE* fp = fopen(path, "r");
	//if (fp == NULL) {
	//	printf("文件打开失败");
	//}
	////文件读取(缓冲区)
	//char buff[50];
	//while (fgets(buff,50,fp))
	//{
	//	printf(buff);
	//}

	//文件写入
	//char path[] = "C:\\Users\\Administrator\\Desktop\\file.txt";
	//FILE* fp = fopen(path, "w");
	//const char* text = "fdggdgdgd";
	//printf("%d", fputs(text, fp));

	//fclose(fp);

	//类型转换测试代码
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

	//vector测试
	//vector<char>vt;
	//vt.push_back('a');//放置数据
	//vt.push_back('b');
	//vt.push_back('c');
	//vt.push_back('d');

	//vt.insert(vt.begin()+1,'g');//插入数据
	//vt.front() = 'A';//修改第一个数据
	//vt.back() = 'D';//修改最后一个数据

	////vt.pop_back();//删除基础最后一个数据
	////vt.erase(vt.begin()+1);//删除指定位置的数据
	////vt.erase(vt.begin(),vt.begin()+1);//删除指定区间的值

	//for (int i = 0; i < vt.size(); ++i) {
	//	cout << vt[i] << endl;
	//}
	//cout << "迭代器遍历,正向" << endl;
	//for (vector<char>::iterator it = vt.begin(); it < vt.end();it++) {
	//	cout << *it << endl;
	//}

	//cout << "迭代器遍历,反向" << endl;
	//for (vector<char>::reverse_iterator it = vt.rbegin(); it < vt.rend(); it++) {
	//	cout << *it << endl;
	//}

	//vector<char>vt2(vt.begin(),vt.begin()+2);//截取vt的数据复制到vt2里面
	//cout << "vt2的值" <<endl;
	//for (int i = 0; i< vt2.size(); i++) {
	//	cout << vt2[i] << endl;
	//}

	//list测试
	//list<int>lt;
	//lt.push_front(10);
	//lt.push_front(20);
	//lt.push_front(30);
	//lt.push_back(40);
	//lt.push_back(50);
	//lt.push_back(60);

	//lt.insert(lt.begin(), 80);//插入

	////这里只能用!=不能用<
	//for (list<int>::iterator it=lt.begin(); it != lt.end(); it++) {
	//	cout << *it << endl;
	//}

	//cout << "迭代器位置" << endl;
	//list<int>::iterator it = lt.begin();
	////连续相加允许(++),支持'++'、'--'运算符,不支持'+'、'-'运算度,it = it - 1;  错误调用
	//it++;
	//it--;
	//cout << *it << endl;

	//cout << "删除方式1：根据迭代器位置删除" << endl;
	//list<int>::iterator it = lt.begin();
	//it++;
	//lt.erase(it);
	//for (list<int>::iterator it = lt.begin(); it != lt.end(); it++) {
	//	cout << *it << endl;
	//}

	//cout << "删除方式2：直接删除内容" << endl;
	//lt.remove(50);
	//for (list<int>::iterator it = lt.begin(); it != lt.end(); it++) {
	//	cout << *it << endl;
	//}

	//cout << "删除方式3：区间删除" << endl;
	//list<int>::iterator it_begin = lt.begin();
	//list<int>::iterator it_end = lt.begin();
	//it_end++;
	//it_end++;
	//lt.erase(it_begin, it_end);
	//for (list<int>::iterator it = lt.begin(); it != lt.end(); it++) {
	//	cout << *it << endl;
	//}

	//set测试
	//set<Student, soft>st;
	//st.insert(Student("sadad",50));
	//st.insert(Student("大佛寺附近",70));
	//st.insert(Student("撒大帝",60));
	//st.insert(Student("事发当时对方",80));
	//st.insert(Student("斯蒂芬森分",20));

	//for (set<Student>::iterator it = st.begin(); it != st.end(); it++) {
	//	Student sd = const_cast<Student&>(*it);
	//	sd.printStudent();
	//}


	int borad[] = {1,2,3,4,5};
	sort(borad, borad + 5);
	int t = lower_bound(borad, borad + 5,3)-borad;//大于等于3的位置，减去开始的位置，就是下标
	int t1 = upper_bound(borad, borad + 5,3)-borad;//大于3的位置
	auto* t2 = lower_bound(borad, borad + 5, 3);
	cout << t<< endl;
	cout << t1<< endl;
	cout << *t2<< endl;
	
	return getNumber(10, 36);
}

// 函数定义
void function(void)
{
	static int i = 5; // 局部静态变量
	i++;
	cout << "变量 i 为 " << i;
	cout << " , 变量 count 为 " << number << endl;
}

void getSeconds(long *par) {

	*par = time(NULL);
	//*par = 15328;


}

int Max(int x, int y)  //定义Max函数
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
