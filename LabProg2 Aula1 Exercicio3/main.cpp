#include <iostream>

using namespace std;

float leVetorCalculaMedia(int n, float vet[])
{
    float s=0;
    for(int i=0; i<n; i++)
    {
        cout << "Digite o numero da posição " << i << "do vetor" << endl;
        cin >> vet[i];
        s = s + vet[i];
    }
    return s/n;
}

int main()
{
    int n=5;
    float vet[1000], m;
    m = leVetorCalculaMedia(n, vet);
    cout << "Média dos valores: " << m << endl;
    return 0;
}
