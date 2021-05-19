#include<iostream>

using namespace std;

int main(){
	int grade;
	cout<<"Enter your grade percentage : ";
	cin>> grade;
	
	
	if (grade >=90 && grade < 100){
	
		cout<<"You got A";}
		
		else if(grade >=80 && grade < 89){
			
			cout<<"You got B";}
			
		else if(grade >= 70 && grade < 79){
			
			cout<<"You got C";}
			
		else if (grade >= 60 && grade < 69){
			
			cout<<"You got D";
			
	
		}else {
		cout<<" You failed on your class";
	
	}

return 0;
}


