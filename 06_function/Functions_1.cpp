// Functions


// returnType functionName(parameters){         // SYntax of Function
//     //function body 
// }






#include <iostream>
using namespace std;


int checkTemperature(int temperature){
    return temperature;                    // declare + definitionn
}


//declaration of function
void serveChai(int cups);       // kitne cup chai deliver krni hai (int cups)


void makeChai(){
    cout << "Boiling water, adding tea leaves, straining...";
}



void ServeChai(string teaType = "Masala Tea"){         // function ke naaam same bhi ho skte hai  bs parameter different hone chahiye isi ko function overloading bhi kehte hai
    int cups = 4;
    cout << "Serving " << teaType << endl;
}

void serveChai(int cup, int tealeaves){

}




int main(){
    int temp = checkTemperature(50);  // upar apan ne return temperature likha hai toh use kahi store bhi toh krna padega 
                                     // ye kam keval int wale mai krna hota hai jismai kuch return chahiye void mai nhi
    cout << temp;
   
    
     makeChai();  // calling a void function

    serveChai(3);
    
    serveChai();  // ahar yha kuch likh diya jaise Lemon Tea  toh output mai Lemon Tea aaega bhaale hi upar kuch bhi define kiya ho jaise Masala Tea
    
    return 0;
}

// defination of function
void serveChai(int cups){             // ye apan ne isliye likha kyuki keval declare krne se output nhi aaega apan  usse  definition define kr skte hai baad mai bhi int main phir bhi use padh lega 
                                      // func_name same hona chahiye jo declaration mai dala tha jaise serveChai 
    
    cout << "Serving " << cups << " of chai";
}
