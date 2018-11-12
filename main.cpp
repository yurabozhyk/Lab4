#include "stadium.h"

int first;
string second;
double third;

void Input() {
    cout << "Write the number of viewers on stadium: ";
    cin >> first;
    cout << "\n";
    
    cout << "Write the name of stadium: ";
    cin >> second;
    cout << "\n";
    
    cout << "Write the power of lighting on stadium: ";
    cin >> third;
    cout << "\n";
}
void go(Stadium Var) {
    Var.GetQuantity(first);
    Var.GetName(second);
    Var.GetPower(third);
    
    cout << "Name: ";
    Var.PrintName();
    cout << "Number of viewers: ";
    Var.PrintQuantity();
    cout << "Power of lighting: ";
    Var.PrintPower();
    cout << "Year of creation: ";
    Var.PrintYear();
    cout << "Condition: ";
    Var.PrintCondition();
    cout << "Length: ";
    Var.PrintLength();
    cout << "Purpose: ";
    Var.PrintPurpose();
}
int main() {
    Stadium Stad1(1 , "no1" , 213)  , Stad2(2, "no2", 5266) , Stad3(3, "no3", 3662);
    Input();
    go(Stad1);
    Input();
    go(Stad2);
    Input();
    go(Stad3);
    
    return 0;
}
