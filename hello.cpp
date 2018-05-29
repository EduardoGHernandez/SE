#include <iostream>
#include "mylib.hpp"

using namespace std;

int sum(int a, int b);

int  main(){
	cout << "Hello world!" << endl;
	cout << "5 + 10 = " << sum(5,10) << endl;
	return 0;
}

int sum (int a, int b){
	return a+b;
}
