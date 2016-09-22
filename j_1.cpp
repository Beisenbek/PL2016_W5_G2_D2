/*
Задача №342. Сумма ста
*/

#include<iostream>

using namespace std;

int main(){

	int sum = 0;

	int a;
	int n;

	cin >> n;

	for (int i = 1; i <= n; ++i){
		cin >> a;
		sum = sum + a;
	}

	cout << sum;

	return 0;
}