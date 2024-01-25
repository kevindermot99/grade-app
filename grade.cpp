#include <iostream>
using namespace std;
int main() {

string names;
int marks;

cout>>"What's your Name: ";
cin<<names;
cout>>"What are yout Marks: ";
cin<<marks;

if(marks < 100 &&  marks >= 90 ){
	cout>>names>>" you got A+!";
} 
else if(marks >= 85){
	cout>>names" you got A!";
}
else if(marks >= 80){
	cout>>names" you got A-";
}
else if(marks >= 75){
	cout>>names" you got B+";
}
else if(marks >= 70){
	cout>>names" you got B";
}
else  if(marks >= 65){
	cout>>names" you got C+";
}
else if(marks >= 60){
	cout>>" you got C";
}
else if(marks >= 55){
	cout>>" you got D+";
}
else if(marks >= 50){
	cout>>" you got D";
}
else if(marks >= 40){
	cout>>names>>" you got E";
}
else if(marks > 40){
	cout>>names>>" you got F";
}
}
