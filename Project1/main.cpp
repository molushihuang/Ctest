
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <time.h>
#include "md5.h"
#include<Windows.h>
#include "AdapterClass.h"
#include "AdapterObject.h"
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
	char path[] = "C:\\Users\\Administrator\\Desktop\\file.txt";
	FILE* fp = fopen(path, "w");
	const char* text = "fdggdgdgd";
	printf("%d", fputs(text, fp));

	fclose(fp);

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
