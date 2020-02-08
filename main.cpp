#include <iostream>
using namespace std;
struct eilutes
{
    string vardas;
    string FirstLine ="*********";
    string SecondLine = "*       ";
    string ViddleLine = "*Sveikas,";
    string MiddleLine = "*Sveika,";
    bool lytis;
};
void print(eilutes A)
{ if(A.lytis)
    {
    int id =A.vardas.length();
    for(int i =0; i < id+1;i++)
        A.FirstLine+= "*";
    for(int i =0; i < id+1;i++)
        A.SecondLine+=" ";
        A.SecondLine+="*";
        cout <<A.FirstLine<< endl;
        cout << A.SecondLine<<endl;
        A.ViddleLine+=A.vardas+"*";
        cout << A.ViddleLine<<endl;
        cout <<A.SecondLine<<endl;
        cout << A.FirstLine<<endl;
    }
   else
    {
        int id =A.vardas.length();
        for(int i =0; i < id;i++)
            A.FirstLine+= "*";
        for(int i =0; i < id;i++)
            A.SecondLine+=" ";
        A.SecondLine+="*";
        cout <<A.FirstLine<< endl;
        cout << A.SecondLine<<endl;
        A.MiddleLine+=A.vardas+"*";
        cout << A.MiddleLine<<endl;
        cout <<A.SecondLine<<endl;
        cout << A.FirstLine<<endl;
    }
}
int main() {
    eilutes A;
    cout <<"Jusu lytis vyras(1), moteris(0)" << endl;
    cin >> A.lytis;
    cout << " Iveskite savo varda" << endl;
    cin >> A.vardas;
    print(A);

}