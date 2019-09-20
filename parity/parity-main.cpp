/** L05: Parity
FIXME: Add names here // CHANGE THIS
FIXME: username(s):  // CHANGE THIS
Purpose: To use arrays, classes, and to learn some things about binary.

Acknowledgements:
Modified from original code written by Dr. Jan Pearce
FIXME: Add all other resources used // CHANGE THIS!!
*/

#include <iostream>
using namespace std;

class Parity {
public:
	Parity() {} //default constructor sets all member variables.

	Parity(bool tempbyte[8]) {
		for (int i = 0; i < bytelen; i++) {
			byte[i] = tempbyte[i];
		}
	}

	void set_byte() { //mutator method sets byte from beyboard

		bool readbit;

		for (int i = 0; i < bytelen; i++) {
			cout << "Please enter bit " << i << ": ";
			cin >> readbit;
			byte[i] = readbit;
		}

		cout << endl;
		return;
	}

	void show_byte() {

		for (int i = 0; i < bytelen; i++) {
			cout << byte[i];
		}
		return;
	}

	bool if_binary_evenparity() {
		/**
		This function takes an 8-bit byte as input,
		if the first 7 bits consist solely of 0s and 1s
		then it adds an even parity bit in the last place in the array
		and returns true.
		It returns false otherwise */

		//FIXME: Add code here

		return(true); // obviously this should not always return true
	}



private:
	bool byte[8] = { false }; //This initializes all of the bits
	const int bytelen = 8;
};







int main() {

	bool truebyte[8] = { true, true, true, true, true, true, true, true }; // this style of initalization only works at compile time
	int readchar = 'Y';

	cout << "Welcome to the parity class!\n" << endl; //FIXME: Feel free to change this!

	Parity testbyte;
	Parity mybyte(truebyte);  // uses contructor that sets byte using parameter

	testbyte.set_byte();
	cout << "Here is the byte you entered: ";
	testbyte.show_byte();
	cout << endl;

	cout << "Here is anthor byte: ";
	mybyte.show_byte();
	cout << endl;
	//FIXME: place code to fully test your Parity class

	cin >> readchar; //This is to keep screen open in some situations.

	return 0;
}

