#include <iostream>
using namespace std;
void check(string vardas)
{

    int id =vardas.length();
    for(int i =0; i < id+1;i++)
    cout <<"*";
    cout <<endl;

}
void checkspace(string vardas)
{

    int id =vardas.length();
    for(int i =0; i < id+1;i++)
    cout <<" ";
    cout <<"*" << endl;

}
void print(string vardas)
{

  cout << "*********";
  check(vardas);
  cout << "*       ";
  checkspace(vardas);
  cout << "*Sveikas,"+vardas+"*"<<endl;


  cout << "*       ";
  checkspace(vardas);
   cout << "*********";
  check(vardas);


}
int main() {
 string vardas;

 cout << " Iveskite savo varda" << endl;
 cin >> vardas;
 print (vardas);

  }