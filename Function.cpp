#include "Header.h"

//call-by-value
void add(int iA, int iB){
	cout << "钡Μfunction把计\n";
	cout << "把计1\n";
	cout << "\tvalue = " << iA << endl;
	cout << "\tReference = iA" << endl;
	cout << "\tpointer = " << &iA << endl;
	cout << "把计2\n";
	cout << "\tvalue = " << iB << endl;
	cout << "\tReference = iB" << endl;
	cout << "\tpointer = " << &iB << endl;

	iA = iA + 10;
	iB = iB + 10;

	cout << "笲衡挡狦\n";
	cout << "\t把计1 = " << iA << endl;
	cout << "\t把计2 = " << iB << endl;
}