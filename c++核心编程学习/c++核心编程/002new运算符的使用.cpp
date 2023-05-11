#include<iostream>
using namespace std;

// 1、new的基本语法
int* func()
{
	//new返回的是该数据类型的指针,所以用指针p接收。
	int* p = new int(10);
	return p;
}

void test01()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl; // 堆区的数据 由程序员管理开辟，程序员管理释放。
	delete p;
	cout << *p << endl; // 无法运行
}
// 2、在堆区利用new开辟数组
void test02()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区数组，要加[]
	delete[] arr;
}

int main()
{
	test02();
}