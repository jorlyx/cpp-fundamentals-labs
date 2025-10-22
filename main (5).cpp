#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double side1, side2;

    cout << "ENter the first short side: ";
    cin >> side1;

    cout << "Enter the second short side: ";
    cin >> side2;

    double hypo;
    hypo = sqrt(pow(side1, 2) + pow(side2, 2));
    double roundedHypo = round(hypo);
    
    cout << "hypotenuse is " << hypo << endl;
    cout << "Rounded hypotenuse is " << roundedHypo << endl;
    return 0;
}