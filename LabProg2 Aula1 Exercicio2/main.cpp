#include <iostream>

using namespace std;

float leCalculaMedia(int n)
{
    int i;
    float s=0, r;
    for(i=0; i<n; i++)
    {
        cout << "Digite um numero real" << endl;
        cin >> r;
        s = s + r;
    }
    return s;
}

int main()
{
    int n;
    float s;
    cout << "Digite um numero inteiro n" << endl;
    cin >> n;
    s = leCalculaMedia(n);
    cout << "Media = " << s/n;
    return 0;
}
