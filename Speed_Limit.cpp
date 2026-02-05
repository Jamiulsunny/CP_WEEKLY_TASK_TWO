#include<iostream>
#include<cstdio>

using namespace std ;
int main (){

    ios::sync_with_stdio(false);

    cin.tie(nullptr);

    for (int i =1; i<= 100 ; ++i){

        cout <<i<<"(from cout)" << endl ;
        printf("%d (from printf)\n ", i);

    }
    return 0;
}