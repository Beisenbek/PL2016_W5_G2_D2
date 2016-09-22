#include<iostream>

using namespace std;

int main(){

	double x,y;
	cin >> x >> y;
        
        bool f1 = 0, f2 = 0, f3 = 0, f4 = 0;


        //f1
        if(y <= 1){
        	f1 = 1;
        }

        //f2
        if(y <= -x){
        	f2 = 1;
        }

        //f3
        if(x*x + y*y <= 1){
        	f3 = 1;
        }

        //f4
        if((x-1)*(x-1) + y*y <= 1){
        	f4 = 1;
        }

        cout << f1 << f2 << f3 << f4;


	return 0;
}