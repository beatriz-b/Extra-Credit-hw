/**
 * TODO: Standard Header
 * Name: Beatriz Banuelos
 * Date: 12/5/19
 * Program summary: 
 * The Purpose of this program is to simulate a paycheck. It asks the user to enter
 * DATE, PAYEE'S NAME, and the CHECK AMOUNT (up to $10,000). Then it should display 
 * the simulated name with the dollar amout spelled out.
 **/ 

#include "pch.h"
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

/**
 * Data Definitions
 * TODO: Write definitions for any data here
 * EG:
 * enum class Space {Empty, X, O};
 * struct Row {
 *   Space Left, Center, Right;
 * }
 **/

 /**
  * Function Declarations
  * TODO: Inert your function declarations, purpose statements, I/O comments here.
  * Input: User inputs: Payee name - String; Money - String; Date- mm/dd/yyyy format
  * Output: In check format. Money string becomes spelled out. Payee & date are 
  *			assigned and shown in the correct 
  **/

  /**
   * Declarations for given functions. Don't touch.
   **/
void test();
void run();


/**
 * Main Function
 * Don't touch this! use `run()` instead
 **/
int main() {
	char t;
	cout << "Enter [t] to test, or any other character to run." << endl;
	cin >> t;
	if (t == 't') {
		test();
	}
	else {
		run();
	}
}

/**
 * Function Definitions
 *  Call a test function for each of your functions
 **/
void test() {
	// TODO: call your test functions here.
}

// Use this in place of a main function
void run() {
	// TODO: write your point of entry code here.
}

/**
 * TODO: Insert your function definitions and unit test function definitions here.
 **/
