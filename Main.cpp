#include "Header.h"

int main(){
	int iStartTime, iEndTime;
	int iNumber_1 = 10, iNumber_2 = 100;

	cout << "ㄏノCall-by-value\n";

	cout << "肚function把计\n";
	cout << "把计1\n";
	cout << "\tvalue = " << iNumber_1 << endl;
	cout << "\treference = iNumber_1" << endl;
	cout << "\tpointer = " << &iNumber_1 << endl;
	cout << "把计2\n";
	cout << "\tvalue = " << iNumber_2 << endl;
	cout << "\treference = iNumber_2" << endl;
	cout << "\tpointer = " << &iNumber_2 << endl;

	//call-by-value
	cout << "-----璸秨﹍-----\n";
	iStartTime = clock();

	add(iNumber_1, iNumber_2);
	iEndTime = clock();

	cout << "----璸挡-----\n";

	cout << "磅︽function把计\n";
	cout << "把计1\n";
	cout << "\tvalue = " << iNumber_1 << endl;
	cout << "\treference = iNumber_1" << endl;
	cout << "\tpointer = " << &iNumber_1 << endl;
	cout << "把计2\n";
	cout << "\tvalue = " << iNumber_2 << endl;
	cout << "\treference = iNumber_2" << endl;
	cout << "\tpointer = " << &iNumber_2 << endl;
	cout << endl;

	cout << "磅︽丁(ms) = " << iEndTime - iStartTime << endl;
	cout << endl;

	system("pause");
	return 0;
}