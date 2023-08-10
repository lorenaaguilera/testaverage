//g++ -Wall -std=c++11 testaverage.cpp -o testavg

#include <iostream>
#include "header.h"
#define NUMOFSCORES (5)

using namespace std;

int main() {
	int scores[NUMOFSCORES];
	double avg, sum;
	
	cout << "This program calculates the average of five test scores "
	" and puts these test scores in order from least to greatest \n " << endl;
	cout << "Enter yout five test scores"<< endl; 
	
	for (int i = 0; i < NUMOFSCORES; i++){
		cout << "Score #" << i+1 << ":" << endl;
		cin >> scores[i];
		
		//gives error msg if cin isnt int or enterd cin isnt between 0-100 
		while (!cin || scores[i] < 0 || scores[i] > 100){
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Invalid entry. Re-enter test score between 1-100 \n" << endl;
			cout << "Score #" << i+1 << ":" << endl;
			cin >> scores[i];
		}
	sum += scores[i];
	}
	
	avg = average(sum);
	cout << "Your average is: " << avg << endl;

	selectionSort(scores, NUMOFSCORES);
	
	cout << "Your test scores in order are: " << endl;
	
	for (int i =0; i< NUMOFSCORES; i++){
		cout << scores[i] << endl;
	}
	

	return 0;
	
}
