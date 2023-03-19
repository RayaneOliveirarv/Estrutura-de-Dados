#include <iostream>
#include <string>

using namespace std;

int procuraCharNaString(string str, char ch)
{
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]==ch)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    string str;
    char ch;
    int r;
    cout << "Digite a string" << endl;
    cin >> str;
    cout << "Digite um caracter" << endl;
    cin >> ch;
    r = procuraCharNaString(str, ch);
    cout << r << endl;
    return 0;
}
