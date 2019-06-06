
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <time.h>
#include "md5.h"
using namespace std;

int g = 10;
static int number = 10; /* 全局变量 */

// 函数声明 
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
