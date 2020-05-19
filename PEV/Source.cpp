/**
@author Mohammed Azad, Younis Shakir, Masoud Qubad, Naz Zana.
@version 1.0
@mainpage Interpreter Project
@section Introduction about using Count Occurrence program
@brief program to count occurrences of a number in a sorted vector with, print the min number to max number on it, and print how many times duplicated.
@details Usage: run the program and input some value until you put a value less than 1.
@bug If you are using Linux OS you will get an error because we have used windows.h library
@warning If you are using Linux OS, install Wine on your Linux System
@param For The Final Project

*/

#include <iostream>		// to use IOSTREAM library
#include <vector>		// to use VECTOR library which's being used like arrays
#include <iomanip>		// to use IOSMANIP library to use some external C++ features like making space
#include "Header.h"

using namespace std;	// to avoid writting ( std:: ) every time  

int main() {			// main function that run's when the program start

	message();			// it is a function that linked by Header.h from message.cpp to show my message

	int x;				// intialize (x) variable. we do not need to give a value to x at this moment!
	vector<int> v;		// making a vector named (v) that we store intiger values on it.
	vector<int> vv;		// making a vector named (vv) that we store intiger values on it.
	vector<int> vcount; // making a vector named (vcount) that we store intiger values on it.

	cout << "input: ";		// print "inout: " on screen to ask the user to input a value
	while (true) {			// run every time
		cin >> x;			// ask the user to input a value and store the value in (x) variable
		if (x <= 0) {		// if x smaller or equal than zero then do what's exist in side in this block e.g. (0, -1, -2, -3.2 ....)
			break;			//get out of this while loop start the line 23
		}					//close the if condition block
		v.push_back(x);     // store x value in the v vector
	}

	for (vector<int>::size_type i = 0; i < v.size(); i++) {		// this for loop using to re-write the string in smallest num to biggest num.	
		for (vector<int>::size_type j = i; j < v.size(); j++) { // getting the vector size, j = i and compare with v vector size if j is smaller then j gonna increas and the following codes gonna execute
			if (v.at(i) > v.at(j)) {							// if the v vector at i index was bigger than v vector at j then so the following commands
				int a = v.at(i);								// intialize variable (a) and store v index (i #{i is number}) at variable (a)
				int b = v.at(j);								// intialize variable (b) and store v index (j #{j is number}) at variable (b)
				v[i] = b;										// change the value of the (i) index to the v vector to the b value
				v[j] = a;										// change the value of the (j) index to the v vector to the a value
			}													// end of the if condition
		}														// end of the second loop
	}															// end of the first loop

	int min = v.at(0);				// to get the minimum value at v vector and assign it to min variable
	int max = v.at(v.size() - 1);   // to get the maximum value at v vector and assign it to max variable
	// to create a new vector in min value to max value
	while (max >= min) {			// while max is bigger or equal than min variable do the following command
		vv.push_back(min);			// put min value in to the vv vector
		min++;						// add the min value with 1
	}

	// to count the repeated value by comparing the vv vector to v vector
	int t;															// intialize (t) variable
	for (vector<int>::size_type i = 0; i < vv.size(); i++) {		// get the vv vector indexs(size)  and compare it with (i) variable if (i) is smaller i = i + 1 
		t = 0;														// provide zero value to (t) variable
		for (vector<int>::size_type j = 0; j < v.size(); j++) {		// get the v vector indexs(size)  and compare it with (j) variable if (j) is smaller j = j + 1 
			if (vv.at(i) == v.at(j)) {								// if vv vector has the same value with the v vector at the same index do the following command
				t++;												// to Count the repeated values. increase the (t) value
			}														// end of the if condition block
		}
		vcount.push_back(t);										// Create new vector and input t value to the vcount indexs 
	}

	cout << "output: " << endl;											// print "output: " and end the line
	cout << "value | occurrences" << endl;								// print "value | occurrences" and end the line
	cout << "---------------------------" << endl;						// print "---------------------------" and end the line
	// to print the vv vector and the vcount vector to see how many times a value repeated
	for (vector<int>::size_type i = 0; i < vv.size(); i++) {			// get the size of the vv vector aand compare it with i if i is smaller than vv vector size i gonna added by one i = i + 1 :: i has 0
		cout << setw(5) << vv.at(i) << " | " << vcount.at(i) << endl;	// make a space and print the value of the (i)index at the vv vector, print " | " and print the value of the (i)index at the vcount vector then end the line
	}																	// close this block

	cin.ignore(2);														// in windowsOS if you do not ask the user to input a value at the end the terminal pop up and close at a short time  
	return 0;															// In C and C++ programs the main function is of type int and therefore it should return an integer value
}																		//  thank for your attention ^_^