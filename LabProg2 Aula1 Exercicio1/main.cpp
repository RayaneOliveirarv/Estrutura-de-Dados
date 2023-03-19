#include <iostream>

using namespace std;

int main()
{
    int n, i;
    float r, s=0;
    cout << "Digite um numero inteiro n" << endl;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cout << "Digite um numero real" << endl;
        cin >> r;
        s = s + r;
    }
    cout << "Media = " << s/n;
    return 0;
}
