
// CALL by Value

#include <iostream>

using namespace std;


void pourChai(int cups){
    cups = cups + 5;
    cout << "Poured cups: " << cups << endl;        // poured cups toh 7 aaega 
}

int main(){
    
    int chaiCups = 2;
    pourChai(chaiCups);
    cout << "Total cups are " << chaiCups << endl;          // total cups 2 hi aaega 
    return 0;
}
