/*
Задача №120. 1/0!+1/1!+1/2!+...
*/
#include<iostream>

using namespace std;

int main(){

         int n;
         cin >> n;

         double s = 0;

         for(int i = 0; i <= n; ++i){
         	int f = 1;

         	for(int j = 1; j <= i; ++j){
         		f = f * j;
         	}

         	s = s + 1.0/f;	
         }

         cout << s;
	
	return 0;
}