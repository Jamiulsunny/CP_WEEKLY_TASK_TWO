#include<iostream>
#include <memory>
using namespace std;

void createMemberFixed (){

    int* id =new int(55);
    if(*id>50){

        cout <<"Valid Member"<<endl;
        delete id;
        return ;
    }
    delete id ;
}

 void createMemberModern (){

    unique_ptr<int> id =make_unique<int>(55);
    if(*id > 50) {

        cout <<"Valid Member" << endl ;
        return ;
    }

 }
