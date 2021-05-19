#include<iostream>

using namespace std;

int main(){
	int angle1, angle2, angle3, sum;
	cout<<"Enter 1st angle for triangle: ";
	cin>> angle1;
	cout<<"Enter 2nd angle for triangle: ";
	cin>> angle2;
	cout<<"Enter 3rd angle for triangle: ";
	cin>> angle3;
	
	sum = angle1 + angle2 + angle3;
	
	
	if(sum == 180){
		if(angle1 > 0 && angle2 > 0 && angle3 > 0){
			cout<<"its a valid triangle";
		}
	}else{
		cout<<"its non triangle shape";
	}
	
	return 0;
}
