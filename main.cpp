#include <iostream>

using namespace std;

bool ehPrimo(int n)
{
    int i, div=0;
    for(i=1; i<=n; i++)
    {
        if (n%i==0)
        {
            div++;
        }
    }
    if (div==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    bool r;
    cout << "Digite n" << endl;
    cin >> n;
    r = ehPrimo(n);
    cout << r;
    return 0;
}
