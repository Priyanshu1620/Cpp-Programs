#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec;
    int a,sum,small,large;
    float mean;
    bool bl = true;
    char choice;

    while(bl == true){
        cout << endl;
        cout<< "P - Print Numbers"<< endl;
        cout<< "A - Add a Number"<< endl;
        cout<< "M - Display mean of the numbers"<< endl;
        cout<< "S - Display the smallest number"<< endl;
        cout<< "L - Display the largest number"<< endl;
        cout<< "Q - Quit"<< endl;
        cout << endl << "Enter your choice: ";
        cin >> choice;
        cout << endl << "---------------------------------------" << endl << endl;

        if(choice == 'P' || choice == 'p'){
            if(vec.empty() == true){
                cout << "[]" << endl;
            }
            else{
                cout << "[";
                for(int i = 0;i < vec.size();i++){
                    cout << vec[i] << " ";
                }
                cout << "]";
            }   
        }
        else if(choice == 'A' || choice == 'a'){
            cout << "Enter a Number to add: ";
            cin >> a;
            vec.push_back(a);
            cout << a <<" added." << endl;
        }
        else if(choice == 'M' || choice == 'm'){

            if(vec.empty() == true){
                cout << "Unable to calculate the mean-no data" << endl;
            }
            else{
                for(int i = 0;i < vec.size();i++){
                    sum += vec[i];
                }
                mean = float(sum/vec.size());
                cout <<"Mean of the list is: "<< mean << endl;
            }
        }
        else if(choice == 'S' || choice == 's'){

            if(vec.empty() == true){
                cout << "Unable to determine the smallest number - list is empty" << endl;
            }
            else{
                small = vec[0];
                for(int i = 0;i < vec.size();i++){
                    if(vec[i]<small){
                        small = vec[i];
                    }
                }
                cout <<"The smallest number is: "<< small << endl;
            }
        }
        else if(choice == 'L' || choice == 'l'){

            if(vec.empty() == true){
                cout << "Unable to determine the largest number - list is empty" << endl;
            }
            else{
                large = vec[0];
                for(int i = 0;i < vec.size();i++){
                    if(vec[i]>large){
                        large = vec[i];
                    }
                }
                cout <<"The largest number is: "<< large << endl;
            }
        }
        else if(choice == 'Q'|| choice == 'q'){
            cout << "Goodbye" << endl;
            bl = false;
        }
        else{
            cout << "Invalid Input! Please try again.";
        }
        cout << endl << "---------------------------------------" << endl;
    }
    
return 0;
}
