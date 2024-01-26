#include <iostream>
using namespace std;
int main() {

string names;
int marks;

cout<< "What's your Name: ";
cin>>names;
cout<<names<<" What are your Marks: ";
cin>>marks;

if(marks > 100){
	cout<<names<<" you entered Marks above 100";
}
else if(marks < 100 &&  marks >= 90 ){
	cout<<names<<" you got an A+"<<endl;
} 
else if(marks >= 85){
	cout<<names<<" you got an A"<<endl;
}
else if(marks >= 80){
	cout<<names<<" you got an A"<<endl;
}
else if(marks >= 75){
	cout<<names<<" you got a B+"<<endl;
}
else if(marks >= 70){
	cout<<names<<" you got a B"<<endl;
}
else  if(marks >= 65){
	cout<<names<<" you got a C+"<<endl;
}
else if(marks >= 60){
	cout<<names<<" you got a C"<<endl;
}
else if(marks >= 55){
	cout<<names<<" you got a D+"<<endl;
}
else if(marks >= 50){
	cout<<names<<" you got a D"<<endl;
}
else if(marks >= 40){
	cout<<names<<" you got an E"<<endl;
}
else if(marks > 40){
	cout<<names<<" you got an F"<<endl;
}
else{
	cout<<names<<" Request Failed ! try again";
}

return 0;
}
