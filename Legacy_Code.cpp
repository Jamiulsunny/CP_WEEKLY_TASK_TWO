#include<iostream>
using namespace std ;

void update_score(int &val){
    if (val < 50 ){
        val =val + 10;

    }
}
int main (){

    int score = 45 ;

cout << "Old Score : "<< score << endl;
update_score(score);

cout << "New Score : " << score << endl ;

return 0;

}