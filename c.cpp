/*
Задача №352. Степень
*/

/*
Задача №120. 1/0!+1/1!+1/2!+...
*/
#include<iostream>

using namespace std;

int main(){

         int n;
         cin >> n;

         long long p = 1;
         
         for(int i = 1; i <= n; ++i){
         	p = p * 2;	
         }

         cout << p;
	
	return 0;
}
