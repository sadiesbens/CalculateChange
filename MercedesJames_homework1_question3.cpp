
#include "pch.h"
#include <iostream>
using namespace std;
int change = 0;
//preview
void CalcChange(int change);

int main()
{
	while (change>= 0 && change <= 99) {
		cout << "Enter Change[0-99]:" << endl;
		cin >> change;
		CalcChange(change);
	}


}


void CalcChange(int change) {
	int q = 25;
	int d = 10;
	int n = 5;
	int p = 1;
	int h = 50;
	int nQ = 0;
	int nD = 0;
	int nN = 0;
	int nP = 0;
	int nH = 0;
	
	nH = change / h;
	change = change % h;
	
	
	nQ = change/ q;
	change = change % q;
	
	
	nD = change/ d;
	change = change % d;
	
	
	nN = change / n;
	change = change % n;
	
	
	nP = change/ p;
	
	
	cout << "half(ves): " << nH << endl;
	cout << "Quarters(s): " << nQ << endl;
	cout << "Dime(s): " << nD << endl;
	cout << "Nickels(s): " << nN << endl;
	cout << "penny(ies): " << nP << endl;
	
}