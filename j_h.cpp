#include<iostream>

using namespace std;

int main(){

         
	 int sum = 0;

         for(int i = 1; i <= 100; ++i){
         	cout << i << " ";
         	sum = sum + i;	
         }

         cout <<endl;

         cout << sum;

	
	return 0;
}
