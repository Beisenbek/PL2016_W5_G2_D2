/*
������ �342. ����� ���
*/

#include<iostream>

using namespace std;

int main(){

	int sum = 0;

	int a;

	for (int i = 1; i <= 100; ++i){
		cin >> a;
		sum = sum + a;
	}

	cout << sum;

	return 0;
}