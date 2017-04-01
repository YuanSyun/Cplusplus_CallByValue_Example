#include "Header.h"

int main(){
	int iStartTime, iEndTime;
	int iNumber_1 = 10, iNumber_2 = 100;

	cout << "�H�U�ϥ�Call-by-value\n";

	cout << "�ǤJfunction���ѼơG\n";
	cout << "�Ѽ�1\n";
	cout << "\tvalue = " << iNumber_1 << endl;
	cout << "\treference = iNumber_1" << endl;
	cout << "\tpointer = " << &iNumber_1 << endl;
	cout << "�Ѽ�2\n";
	cout << "\tvalue = " << iNumber_2 << endl;
	cout << "\treference = iNumber_2" << endl;
	cout << "\tpointer = " << &iNumber_2 << endl;

	//call-by-value
	cout << "-----�p�ɶ}�l-----\n";
	iStartTime = clock();

	add(iNumber_1, iNumber_2);
	iEndTime = clock();

	cout << "----�p�ɵ���-----\n";

	cout << "����function�᪺��ѼơG\n";
	cout << "�Ѽ�1\n";
	cout << "\tvalue = " << iNumber_1 << endl;
	cout << "\treference = iNumber_1" << endl;
	cout << "\tpointer = " << &iNumber_1 << endl;
	cout << "�Ѽ�2\n";
	cout << "\tvalue = " << iNumber_2 << endl;
	cout << "\treference = iNumber_2" << endl;
	cout << "\tpointer = " << &iNumber_2 << endl;
	cout << endl;

	cout << "����ɶ�(ms) = " << iEndTime - iStartTime << endl;
	cout << endl;

	system("pause");
	return 0;
}