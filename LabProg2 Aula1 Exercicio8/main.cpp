#include <iostream>
#include <math.h>;
using namespace std;

float somatorio(int n, float x)
{
    float S=0;
     for(int i=0; i<=n; i++)
    {
        S = S + pow(x,i);
    }
    return S;
}

int main()
{
    int n;
    float x, r;
    cout << "Digite um numero inteiro n: " << endl;
    cin >> n;
    cout << "Digite um numero real x: " << endl;
    cin >> x;
    r = somatorio(n, x);
    cout << "Resultado so somatório de potencias: " << r << endl;

    return 0;
}
