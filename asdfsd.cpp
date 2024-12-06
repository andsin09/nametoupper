/*
Andrew Sinha
12.6.24
Character Function Practice.
*/
#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string names;
    cout << "Enter you name, friend." << endl;
    cin >> names;
    for(int i = 0; i < names.length(); i++){
        if(isdigit(names[i]) || !isalnum(names[i])){
            cout << "No digits please.";
            return 0;
        }
        else{
            putchar(toupper(names[i]));
        }
    }
}
