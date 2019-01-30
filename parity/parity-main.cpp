/** L03: Parity
FIXME: Add names here // CHANGE THIS!!
FIXME: username(s):  // CHANGE THIS!!
Purpose: To use arrays, functions,
and learn some things about binary.

Acknowledgements:
Modified from original code written by Dr. Jan Pearce
FIXME: Add all other resources used // CHANGE THIS!!
*/

#include <iostream>
using namespace std;

void get_byte(char byte[]) {
	char readbit;

	for (int i = 0; i < 7; i++) {
		cout << "Please enter bit " << i << ": ";
		cin >> readbit;
		//FIXME: Put code here to put bit into correct place in byte array
	}

	cout << endl;
	return;
}

void print_bitstring(const char byte[]) { //This is pass by const array, making the array immutable by the function.
	for (int i = 0; i < 8; i++) {
		cout << byte[i];
	}
	cout << endl;
	return;
}


//FIXME: Create a new function that when called will print out ASCII art as a good-bye.


bool if_binary_evenparity(char byte[8]) { 
	/**
	This function takes an 8-bit byte as input,
	if the first 7 bits consist solely of 0s and 1s
	then it adds an even parity bit in the last place in the array
	and returns true.
	It returns false otherwise */

	//FIXME: Add code here

	return(true); // obviously this should not always return true
}



int main( ){

	char readchar ='Y';
	char byte[8];

	cout << "Welcome to the even parity byte maker!\n" << endl; //FIXME: Feel free to fix this!

	while (readchar == 'Y' || readchar == 'y') {
		get_byte(byte); //This sends the array via "pass by array" which allows it to be changed like pass by reference.
		if (if_binary_evenparity(byte)==true){
			cout << "Currently, the byte has junk in it:" << endl; // FIXME
			print_bitstring(byte); 
		}
		cout << "\nDo you want to get another string? (If yes, enter y): ";
		cin >> readchar;
	}

	//FIXME: Call your ascii printer function here.

	cin >> readchar; //This is to keep screen open in some situations.

	return 0;
}

