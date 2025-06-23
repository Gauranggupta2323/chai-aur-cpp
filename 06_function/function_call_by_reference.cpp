// Call by Reference

#include <iostream>

using namespace std;

int globalChaiStock = 100;            // isko koi bhi access kr skta hai kyuki globally define kiya hai void ke bahar
void pourChai(int &cups){             //  & ye laga dene se call by reference ho jata hai parameter 
    int test = 9;                     // isko bahar access nhi kr skte  scope ke bahar access nhi kr skte 
    cups = cups + 5;
    
    cout << "Poured cups: " << cups << endl;          // poured cup 7 
}



int main(){
    
    int cups = 2;
    pourChai(cups);                                     //  total cup 7
    cout << "Total cups are " << cups << endl;
    return 0;
}



// mtlb ye hota hai ki jiske pass access hai tum uska bhi data change krna chah rhe ho yhi call by reference hota hai
// call by value-  tum keval tumhara data change krna chah rhe ho owner ka nhi    jaise yha owner void wala function hai dono cases mai 
