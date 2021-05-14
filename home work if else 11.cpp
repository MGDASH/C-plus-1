#include<iostream>

using namespace std;

int main(){
	int week;
	cout<< "Enter your week day number : ";
	cin>> week;
	
	if (week == 1){
		cout<< week << " is Monday";	
	}else if (week == 2){
		cout<< week << " is Tuesday";
	}else if (week == 3){
		cout<< week << " is Wednesday";
	}else if (week == 4){
		cout<< week << " is Thursday";
	}else if (week == 5){
		cout<< week << " is Friday";
	}else if (week == 6){
		cout<< week  << " is Saturday";
	}else if (week == 7){
		cout<< week << " is Sunday";
	}else {
		cout<< "You entered wrong week day number";
	}
	return 0;
}
