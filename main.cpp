#include "stadium.h"

int first_info;
string second_info;
double third_info;

void Input() {
    cout << "Write the number of viewers on stadium: ";
    cin >> first_info;
    cout << "\n";
    
    cout << "Write the name of stadium: ";
    cin >> second_info;
    cout << "\n";
    
    cout << "Write the power of lighting on stadium: ";
    cin >> third_info;
    cout << "\n";
}
void create(Stadium Var) {
    Var.GetQuantity(first_info);
    Var.GetName(second_info);
    Var.GetPower(third_info);
    
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
    create(Stad1);
    Input();
    create(Stad2);
    Input();
    create(Stad3);
    
    return 0;
}
