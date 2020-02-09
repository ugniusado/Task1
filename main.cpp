#include <iostream>
using namespace std;
struct eilutes
{
    string vardas;
    string FirstLine ="*********";
    string SecondLine = "*       ";
    string ViddleLine = "*Sveikas,";
    string MiddleLine = "*Sveika, ";
    bool lytis;
    int eiluciuSk;
};
void print(eilutes A)
{
        int id = A.vardas.length();
        for (int i = 0; i < id + 1; i++)
            A.FirstLine += "*";
        for (int i = 0; i < id + 1; i++)
            A.SecondLine += " ";
        A.SecondLine += "*";
    if(A.eiluciuSk%2!=0) {
            cout << A.FirstLine << endl;
             for(int  i =0; i < A.eiluciuSk/2-1; i++) cout <<A.SecondLine << endl;
           if(A.lytis == 1){ A.ViddleLine += A.vardas + "*";
            cout << A.ViddleLine << endl;}
           else{A.MiddleLine += A.vardas + "*";
               cout << A.MiddleLine << endl;}
             for(int  i =0; i < A.eiluciuSk/2-1; i++)cout <<A.SecondLine << endl;
            cout << A.FirstLine << endl;
        }
        else if (A.eiluciuSk%2==0)
        { cout << A.FirstLine << endl;
        for(int i =0; i <A.eiluciuSk/2-1;i++) cout << A.SecondLine << endl;
            if(A.lytis == 1){ A.ViddleLine += A.vardas + "*";
                cout << A.ViddleLine << endl;}
            else{A.MiddleLine += A.vardas + "*";
                cout << A.MiddleLine << endl;}
        for(int  i =0; i < A.eiluciuSk/2-2; i++) cout <<A.SecondLine << endl;
        cout << A.FirstLine << endl;
        }
}
int main() {
    eilutes A;
    cout <<"Jusu lytis vyras(1), moteris(0)" << endl; cin >> A.lytis;

        cout << " Iveskite savo vardo kreipiny" << endl;
        cin >> A.vardas;
        cout << "Nurodykite norima lenteles eiluciu skaiciu (nuo 3 iki n)" << endl;
        cin >> A.eiluciuSk;
      if (A.eiluciuSk >= 3)print(A);
        else cout << "Iveskite Skaiciu nuo 3 iki n, bei paleiskite programa is naujo!" << endl;
    return 0;

}