#include <iostream>

using namespace std;

int fatorial(int n)
{
    int i, s=1;
    for(i=0; i<n; i++)
    {
        s = s *(i+1);
    }
    return s;
}

int main()
{
    int n, r;
    cout << "Digite um inteiro n: " << endl;
    cin >> n;
    r = fatorial(n);
    cout << "O fatorial de " << n << " e: " << r  << endl;
    return 0;
}
