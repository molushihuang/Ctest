
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
	char path[] = "C:\\Users\\Administrator\\Desktop\\file.txt";
	FILE* fp = fopen(path, "w");
	const char* text = "fdggdgdgd";
	printf("%d", fputs(text, fp));

	fclose(fp);

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
