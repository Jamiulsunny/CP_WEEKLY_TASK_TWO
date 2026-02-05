#include<iostream>
using namespace std;

int main(){

int admin_id =505;
int user_id =101;
int guest_id =0;

const int* part1 =&admin_id;
int* const part2 =&admin_id;

int& ref =admin_id;

part1 =&user_id;
*part2 =999;
return 0;

}