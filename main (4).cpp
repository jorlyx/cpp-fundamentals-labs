/*
* main.cpp
* Uses factorial() from fact.cpp  fact.h 
*/

#include <iostream>
#include "fact.h"

using namespace std;

int main() {
    int num;

    cout << "Enter an integer between 2 and 7: ";
    cin >> num; 

    if (num < 2 or num > 7) {
        cout << "Number entered is out of range." << endl;
    }
    int ans = factorial(num);

    
    cout << "The factorial of " << num << "is" << ans << endl;
    return 0;
}