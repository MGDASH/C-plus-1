#include<iostream>

using namespace std;

int main(){
	string month;
	cout<< "Enter your month name : ";
	cin>> month;
	
if (month == "January"){
		cout<< month << " it contains 31 days";	
	}else if (month == "February"){
		cout<< month << " it contains 28 days";
	}else if (month == "March"){
		cout<< month << " it contains 31 days";
	}else if (month == "April"){
		cout<< month << " it contains 30 days";
	}else if (month == "May"){
		cout<< month << " it contains 31 days";
	}else if (month == "June"){
		cout<< month << " it contains 30 days";
	}else if (month == "July"){
		cout<< month << " it contains 31 days";
	}else if (month == "August"){
		cout<< month << " it contains 31 days";
	}else if (month == "September"){
		cout<< month << " it contains 30 days";
	}else if (month == "October"){
		cout<< month << " it contains 31 days";
	}else if (month == "November"){
		cout<< month << " it contains 30 days";
	}else if (month == "December"){
		cout<< month << " it contains 31 days";
	}else {
		cout<< "You entered wrong month number";
	}
	return 0;
}
