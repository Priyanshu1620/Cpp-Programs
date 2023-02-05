#include <iostream>

using namespace std;

int main(){
    cout << endl << "Basic Calculator" << endl;
    cout << endl << "NOTE: This Calculator can perform basic arithmetic operation like Addition, Subtraction, Multiplication and Divison.";
    cout << endl << "For: " << endl << " 1) Addition , Type 1" << endl;
    cout <<  " 2) Subtraction , Type 2" << endl << " 3) Multiplication , Type 3" << endl << " 4) Divison , Type 4" << endl;
    int a = 0;
    int b = 0;
    int result;
    cout << endl << " Type your 1st Number: " ;
    cin >> a;
    cout << endl << "Which Arithmetic Operation do you wanna perform?(1/2/3/4) " << endl;
    int user_input;
    cin >> user_input;
    cout << endl << " Type your 2nd Number: ";
    cin >> b;
    if (user_input == 1){
        result = a+b;
    }
    else if (user_input == 2){
            result = a-b;
    }
    else if (user_input == 3){
            result = a*b;
    }
    else if (user_input == 4){
            result = a/b;
    }
    cout << endl << " Result: " << result;
    
    return 0;
}
