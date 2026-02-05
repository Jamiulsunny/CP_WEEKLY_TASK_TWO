#include<iostream>
#include<string>
using namespace std ;

int main (){
    int age ;
    string fullName, lang ;

cout <<"Enter age:";
cin >> age ;
cin.ignore();

cout << "Enter Full Name : ";
getline( cin, fullName);

cout <<"Enter Language : " ;
cin >> lang ;

cout << "profile : " << fullName << "("<< age<<") loves "<<lang << endl;

return 0;
}