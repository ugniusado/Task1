#include <iostream>
using namespace std;
struct eilutes
{
    string vardas;
    string FirstLine ="*********";
    string SecondLine = "*       ";
    string MiddleLine = "*Sveikas,";
};
void print(eilutes A)
{    int id =A.vardas.length();
    for(int i =0; i < id+1;i++)
        A.FirstLine+= "*";
    for(int i =0; i < id+1;i++)
        A.SecondLine+=" ";
        A.SecondLine+="*";
        cout <<A.FirstLine<< endl;
        cout << A.SecondLine<<endl;
        A.MiddleLine+=A.vardas+"*";
        cout << A.MiddleLine<<endl;
        cout <<A.SecondLine<<endl;
        cout << A.FirstLine<<endl;
}
int main() {
    eilutes A;
    cout << " Iveskite savo varda" << endl;
    cin >> A.vardas;
    print(A);

}