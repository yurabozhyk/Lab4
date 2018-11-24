#ifndef stadium_h
#define stadium_h

#include <iostream>
#include <string>
using namespace std;

class Stadium {
private:
    int quantity;
    string name;
    double power;
    ;
protected:
    int year;
    string condition;
    ;
public:
    int length;
    string purpose;
   
    Stadium(int first_argument , string second_argument , double third_argument){
        quantity = first_argument;
        name = second_argument;
        power = third_argument;
        year = 1999;
        condition = "Good";
        length = 1000;
        purpose = "Football";
    }
    ~Stadium() {
//        delete &quantity;
//        delete &name;
//        delete &power;
//        delete &year;
//        delete &condition;
    }
void GetQuantity(int num) {
    quantity = num;
}
void GetName(string word) {
    name = word;
}
void GetPower(double lux) {
    power = lux;
}
void GetYear(int Year) {
    year = Year;
}
void GetCondition(string cond) {
    condition = cond;
}
void GetLength(int meters) {
    length = meters;
}
void GetPurpose(string purp) {
    purpose = purp;
}
void PrintQuantity() {
        cout << quantity << "\n";
}
void PrintName() {
        cout << name << "\n";
}
void PrintPower() {
        cout << power << "\n";
}
void PrintYear() {
        cout << year << "\n";
}
void PrintCondition() {
        cout << condition << "\n";
}
void PrintLength() {
        cout << length << "\n";
}
void PrintPurpose() {
        cout << purpose << "\n";
}
};
#endif /* stadium_h */
