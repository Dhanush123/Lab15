// Lab 15
// Programmer: Dhanush Patel
// Editor(s) used: Eclipse
// Compiler(s) used: Eclipse

#include <deque>
#include <iostream>
using namespace std;

#include <ctime>
#include <cstdlib>

struct Number{
	int num;
};

int main()
{
	srand(time(0));

	cout << "Programmer: Dhanush Patel" << endl;
	cout << "Description: This programs makes a user guess the right number between 1-100." << endl;
	cout << endl;

	int numberToGuess = 1 + (rand() % 100);

	deque<Number> numList;
	Number number;
	
	int numberGuessed;
	cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
	do{
    	cin >> numberGuessed;
    
    	bool match = false;
    	for(int i = 0; i < numList.size(); i++){
    		if(numberGuessed==numList[i].num){
    			cout << "You already guessed " << numList[i].num << " -- guess again: ";
    			match = true;
    		}
    	}
    	if(!match){
    		if (numberGuessed == numberToGuess){
    			cout << "That's right -- it's " << numberToGuess << endl;
    			break;
    		}
    		if (numberGuessed < numberToGuess){
    		    number.num = numberGuessed;
    	        numList.push_back(number);
    			cout << "That's too low -- guess again: ";
    		}
    		else{
    			number.num = numberGuessed;
    	        numList.push_back(number);
    			cout << "That's too high -- guess again: ";
    		}
    	}
	}while(numberGuessed != numberToGuess);
}