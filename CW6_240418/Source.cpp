#include<iostream>
#include"vector.h"

using namespace std;
int main() 
{
	//оператор присваивания и конструктор копирование нужны при работе с дин памятью
	vector v, v1;
	v.push_back(10);
	v.push_back(2.5);
	v.push_back(4.3);

	for (int i = 0;i < v.size();i++)
	{
		cout << v.at(i) << endl;
	}

	cout << endl << endl;
	v[0] = 1.8;
	v.at(1) = 5.4;
	for (int i = 0;i < v.size();i++)
	{
		cout << v[i] << endl;
	}

	/*cout << "vector v2" << endl;
	vector v2(v);
	for (int i = 0;i < v2.size();i++)
	{
		cout << v2[i] << endl;
	}*/
	//v1.operator=(v2);
	//v1.operator=(v2);
	cout << "vector v1" << endl;
	v1 = v;
	for (int i = 0;i < v1.size();i++)
	{
		cout << v1[i] << endl;
	}
	v1.push_back(15);
	v.push_back(15);
	cout << (v1 == v) << endl;
	system("pause");
	return 0;
}
