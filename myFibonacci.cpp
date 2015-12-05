// Lab 15
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <iostream>
using namespace std;

int fibonacciIndexNum(int n){
    int x;
    if(n < 2){
    x = n;    
    }
    else{
        x = fibonacciIndexNum(n-1) + fibonacciIndexNum(n-2);
    }
    return x;
}

int main()
{
	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This programs prints the Fibonnaci number at a user provided index." << endl;
	cout << endl;
	
	int n;
	cout << "Enter an index [0 or greater]: ";
	cin >> n;
	cin.ignore(1000,10);
	cout << "The Fibonnaci number at index " << n << " is " << fibonacciIndexNum(n) << "." << endl;
}
