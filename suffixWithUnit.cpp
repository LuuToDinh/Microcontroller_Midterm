#include <iostream>
#include <string>

using namespace std;


string unit[] = { "Yocto", "Zepto", "Atto", "Femto", "Pico", "Nano", "Micro", "Milli", 
                    "", "Kilo", "Mega", "Giga", "Tera", "Peta", "Exa", "Zetta", "Yotta" };
string suffixWithUnit(double number) {
    string result;
    double newNumber = number;
    int unitIndex = 8;
    if(number < 0) return result; // invalid input
    if(newNumber >= 1) {
        while(newNumber >= 1000 && unitIndex < 16) {
            // move to the next unit
            newNumber /= 1000;
            unitIndex++;
        }
    }
    else {
        while(newNumber < 1 && unitIndex > 0) { 
            // move to previous unit
            newNumber *= 1000;
            unitIndex--;
        }
    }
    result = to_string(newNumber) + " " + unit[unitIndex];
    return result;
}

int main(){
    cout << suffixWithUnit(1234567);
    return 0;
}