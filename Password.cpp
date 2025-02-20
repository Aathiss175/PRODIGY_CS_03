#include <bits/stdc++.h>
using namespace std;

void AssessPasswordStrength(const string &password){
    bool hasCapitalLetter = false; bool haslowercase = false;
    bool hasNumber = false; bool hasSpecialCharacter = false;
    bool isLongEnough = password.length() >= 8;

    for(char ch : password){
        if (isupper(ch)) hasCapitalLetter = true;
        if (islower(ch)) haslowercase = true;
        if (isdigit(ch)) hasNumber = true;
        if (ispunct(ch)) hasSpecialCharacter = true;
    }

    int CriteriaMet = 0;
    if(hasCapitalLetter) CriteriaMet++;
    if(haslowercase) CriteriaMet++;
    if(hasNumber) CriteriaMet++;
    if(hasSpecialCharacter) CriteriaMet++;
    if(isLongEnough) CriteriaMet++;

    switch(CriteriaMet){
    case 1:
        cout << "Password Strength : Very weak\nThe password is very weak! try to make it strong\n"; break;
    case 2:
        cout << "Password Strength : Weak\nThe password is weak! try to use a mixture of characters\n"; break;
    case 3:
        cout << "Password Strength : Fair\nThe password is fair, try to use variety of characters\n"; break;
    case 4:
        cout << "Password Strength : Good\nThe password is good, try to make it more unique\n"; break;
    case 5:
        cout << "Password Strength : Strong\nYour password satisfies all the necessary criteria\n"; break;
    default:
        cout << "Error! Invalid Input";
    }
}

int main() {
    string password;
    cout << "Enter a Password : ";
    cin >> password;
    AssessPasswordStrength(password);
    return 0;
}
