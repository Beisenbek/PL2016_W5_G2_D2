#include<iostream>

using namespace std;

int main(){


	double p = 1;

	double a;
	cin >> a;

	double sum = 0;

	int n;
	cin >> n;

	for(int i = 0; i <=n; ++i){
	        p = 1;
	        
	        for(int j = 1; j <= i; ++j){
	           p = p * a;
	        }

		sum = sum + p;
	}

	cout << sum;

	return 0;
}