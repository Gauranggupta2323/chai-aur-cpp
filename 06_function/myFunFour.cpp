// Lambda Functions 



#include <iostream>

using namespace std;

int hellooChai(){
 return 10;
}

int main(){
    
    //lamda
    auto preparedChai = [](int cups){                    // syntax start  [](){} hota hai
                                                         // 
        cout << "Preparing " << cups << " cups of tea" << endl;
    };    // variable hi conside hota hai isliye end mai ; aata hai

    preparedChai(4);     // isne pura function hold krke rkha hua hai
    
    return 0;
}
