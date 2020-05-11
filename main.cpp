#include <iostream>
#include <fstream>
using namespace std;
int palindromy=0;
string s;
fstream znaki, odpowiedz;
bool sprawdz (string s)
{
    int dl=s.size();
    for (int i=0; i<dl/2;i++)
        if (s[i]!=s[dl-i-1]) return false;
    return true;
}

int main()
{
    odpowiedz.open("odpowiedz.txt", ios::out);
    {cout<<"Wypisane palindromy: "<<endl; odpowiedz<<"Wypisane palindromy: "<<endl;}
    znaki.open("dane.txt", ios::in);
    while (znaki.good())
    {
        znaki>>s;
        if(sprawdz(s)==true) {{cout<<s<<endl; odpowiedz<<s<<endl;} palindromy=palindromy+1;}
    }
    znaki.close();
    {cout<<"Ilosc palindromow: "; odpowiedz<<"Ilosc palindromow: ";}
    {cout<<palindromy; odpowiedz<<palindromy;}
    odpowiedz.close();
    return 0;
}
