#include<iostream>

using namespace std;

int main(){
	int side1, side2, side3;
	cout<<"Enter 1st side number for triangle: ";
	cin>> side1;
	cout<<"Enter 2nd side number for triangle: ";
	cin>> side2;
	cout<<"Enter 3rd side number for triangle: ";
	cin>> side3;
	
	
	
	
		if(side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1 ){
			cout<<"triangle is valid";
		}
else{
		cout<<"triangle is not valid";
	}
	
	return 0;
}
