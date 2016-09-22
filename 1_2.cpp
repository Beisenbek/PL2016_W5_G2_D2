#include<iostream>

using namespace std;

int main(){


	double p = 1;

	double a;
	cin >> a;

	double sum = 1;

	int n;
	cin >> n;

	for(int i = 1; i <=n; ++i){
	        
	        p = p * a;

		sum = sum + p;
	}

	cout << sum;

	return 0;
}