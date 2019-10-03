
#include "pch.h"
#include <iostream>
using namespace std;
int change = 0;
/*Mercedes James
10/2/19
This code will take an input amount of change between 1 and 99 and caculate and output the amout 
of half dollars, quaters, dimes, nickles, and pennies it takes to make that amount
*/
void CalcChange(int change);

int main()
{
	while (change>= 0 && change <= 99) {
		cout << "Enter Change[0-99]:" << endl;
		cin >> change;
		CalcChange(change);
	}


}

//function
void CalcChange(int change) {
	//initlizating variables based on coin value
	int q = 25;
	int d = 10;
	int n = 5;
	int p = 1;
	int h = 50;
	//initalizating variables for number of coins to be saved under
	int nQ = 0;
	int nD = 0;
	int nN = 0;
	int nP = 0;
	int nH = 0;
	
	//amount=(input)/50
	nH = change / h;
	//finding amount left over and reseting change value
	change = change % h;
	
	//amount=(input)/25
	nQ = change/ q;
	//finding amount left over and reseting change value
	change = change % q;
	
	//amount=(input)/10
	nD = change/ d;
	//finding amount left over and reseting change value
	change = change % d;
	
	//amount=(input)/5
	nN = change / n;
	//finding amount left over and reseting change value
	change = change % n;
	
	//amount=(input)/1
	nP = change/ p;
	
	//output
	cout << "half(ves): " << nH << endl;
	cout << "Quarters(s): " << nQ << endl;
	cout << "Dime(s): " << nD << endl;
	cout << "Nickels(s): " << nN << endl;
	cout << "penny(ies): " << nP << endl;
	
}