
#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n" ;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";

    int num ;
    cout << name << ": ";
    cin >> num;
    int gear = (num/10000000)-12;

    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\n"
         << "Fahsai: Let's go to the cinema together!!!\n"
         <<"Fahsai: What movie do you want to watch?\n"
         << name << ": ";
    cin.ignore();
         string mvname;
    getline(cin,mvname);
    cout << "Fahsai: So....which day are you free to go with me?\n"
         << name << ": ";

    string day;
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << mvname << " with you.\n"
         << name << ": ";
    
    string ans;
    getline(cin,ans);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";

}