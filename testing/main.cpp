#include<iostream>
#include<string>
using namespace std;
#define ONE
void main()
{
	const int SIZE = 10;
	int arr[SIZE] = { 24, 11, 22, 33, 44, 55, 66, 77, 88, 99 };
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr + i << " = " << arr[i] << " = " << *(arr + i) << endl;
 	}
#ifdef ONE
	cout << typeid(arr[3]).name() << endl;
	cout << typeid('A').name() << endl;
	cout << typeid(0.2).name() << endl;
	string(name1) { "Anton hello!" };
	string name2 = { "Irina hello!" };
	cout << name1 << endl;
	cout << name2 << endl;
	cout << typeid(name1).name() << endl;
	cout << typeid(name2).name() << endl;
#endif // DEBUG

	
}