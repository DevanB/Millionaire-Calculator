// Name: Devan Beitel
// Date: 18.03.2010
// Built with: Xcode and VC++ 2008
// program4

#include <iostream>
#include <iomanip>

using namespace std;

int main () 
{
	double days, loopCount=1, pay=.01, total=0.00, million=0, millionPay=.01, millionTotal=0, millionLoopCount=0;
    cout << "How many days did you work? ";
	cin >> days;
	if (days<1)
	{
		cout << "Please do not enter a value\n";
		cout << "less than 1 as days worked.\n";
		cout << "Please run the program again\n";
		cout << "and enter an acceptable value.\n";
	}
	else
	{
		cout << "DAY\t\tEARNINGS\n";
		cout << "-----------------------\n";
		while (loopCount <= days)
		{
			cout << "" << setprecision(0) << fixed << loopCount << "\t\t$" << setprecision(2) << fixed << pay << "\n";
			total += pay;
			pay *= 2;
			loopCount++;
			
			if (total >= 1000000)
			{
				million++;
			}
		}
		cout << "Your total after " << setprecision(0) << fixed << days << " day(s) is: $ " << setprecision(2) << fixed << total << "\n";
		for (;millionTotal<=1000000;millionLoopCount++)
			{
				millionTotal += millionPay;
				millionPay *= 2;
			}
			millionLoopCount -= days;
			cout << "You have to work " << setprecision(0) << fixed << millionLoopCount << " more day(s) to become a millionaire.\n";
		}
	
	
    return 0;
}
