#include <iostream>
#include "mylib.hpp"
#include "newlib.hpp"

using namespace std;

int sum(int a, int b);

int  main(){
	cout << "Hello world!" << endl;
	cout << "5 + 10 = " << sum(5,10) << endl;
	cout << "5 - 10 = " << substraction(5,10) << endl;
	cout << "5 * 10 = " << multiplication(5,10) << endl;
	cout << "5 / 10 = " <<  division(5,10) << endl; 
	cout << "Good bye!" << endl;
	return 0;
}

int sum (int a, int b){
	return a+b;
}
