/*
Задача №120. 1/0!+1/1!+1/2!+...
*/
#include<iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	double s = 1;
	double f = 1;

	for (int i = 1; i <= n; ++i){
		f = f / i;
		s = s + f;
	}

	cout << s << endl;

	return 0;
}
