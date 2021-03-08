#include<iostream>
using namespace std;

int main(){
	
	int daysWorked, arrayNo = 0, day=1;
	char x;
	double hoursWorked, perHour, totalPay;
	double array[31] = {};
	double totalHours = 0;
	
	cout << "How many days did you worked in this month: " <<endl;
	cin >> daysWorked;
	
	cout << "How much are you being paid per hour: " <<endl;
	cin >> perHour;
	cout << "\n";
	
	for(int loops=0; loops<daysWorked; loops++){
		cout << "Enter the number of hours you have worked day "<<day<<endl;
		cin >> hoursWorked;
		array[arrayNo] = hoursWorked;
		arrayNo++;
		day++;
		totalHours = totalHours +  array[loops];
	}
	
	totalPay = totalHours*perHour;
	
	if(totalPay >= 500){
		cout << "\nAre you contributing to CPF? (y/n)" <<endl;
		cin >> x;
		if(x=='y'||x=='Y'){
			cout <<"\nTotal hours worked: " <<totalHours<<endl;
			cout <<"Total amount of pay for this month: $"<<totalPay <<endl;
			cout <<"Total amount of pay AFTER CPF: $"<<totalPay*0.8 <<endl;
		} else if (x=='n'||x=='N'){
			cout <<"\nTotal hours worked: " <<totalHours<<endl;
			cout <<"Total amount of pay for this month: $"<<totalPay <<endl;
		} else {
			cout <<"Please enter a valid value"<<endl;
		}
	} else {
		cout <<"\nTotal hours worked: " <<totalHours<<endl;
		cout <<"Total amount of pay for this month: $"<<totalPay <<endl;
	}
}
