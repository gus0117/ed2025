#include<iostream>
using namespace std;

int main(){
	int num = 17;
	int* punteroNum = nullptr;
	
	punteroNum = &num;
	
	cout << "Num: " << num << endl;
	cout << "Puntero: " << punteroNum << endl;
	cout << "Direcci�n de num: " << &num << endl;
	return 0;
}
