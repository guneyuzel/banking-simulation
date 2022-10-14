#include <iostream>
#include <math.h>
using namespace std;
int main(){
    string n; int p,t,s,m,d,w,f;

cout << "Hello, welcome to X Bank, type your first name to continue: \n" << "Your First Name: ";
cin >> n;

cout << "Welcome Dear, " << n << endl;
z: cout << "Define yourself a 4 digit PIN to continue: "; cin >> p;

while (p < 999 || p > 9999){
    cout << "Your PIN is not 4 digit. Please enter a 4 digit pin: ";
    cin >> p;
}
cout << "Type your PIN again for confirmation: ";
cin >> t;
if (t != p){
    cout << "PIN's do not match, please redefine your pin.\n"; goto z;
}
cout << "PIN Confirmed.\n";
cout << "Welcome again dear " << n << " please enter your PIN to access your account: \n";
cout << "PIN: "; cin >> s;
while (s != p){
    cout << "Wrong PIN. Please enter again.\nPIN: ";
    cin >> s;
}
cout << "PIN Confirmed, Welcome again dear " << n << ".\n";
g: cout << "1 - Deposit Money\n2 - Withdraw Money\n3 - End Session\nPlease type the number of the action you want to do: "; cin >> m;

switch (m){
case 1:
    cout << "Please type the ammount of dollars you want to deposit to your account: ";
    cin >> d;
    cout << d << " ammount of dollars successfully deposited to your account.\n";
    break;

case 2:
    cout << "Please type the ammount of the dollars you want to withdraw from your account: ";
    cin >> w;
    cout << w << " ammount of dollars successfully withdrew from your account.\nDon't forget to take your money.\n";
    break;
    
case 3:
    goto t;
    break;

default:
cout << "There is no task associated with character " << m << " please enter again.\n";
goto g;
    break;
}

cout << "Is there anything you want to do? Type 1 for yes, 2 for no: ";
cin >> f;

while (f!=1 && f!=2 ){
cout << "Please only type 1 for yes or 2 for no: ";
cin >> f;
}

if (f==1) goto g;

t: cout << "Dear "  << n << " thank you for chosing The X Bank, have a lovely day." << endl;


    system("pause");
    return 0;
}
