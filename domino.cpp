#include <iostream>

using namespace std;

bool dominos(int vetDominos[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        if (vetDominos[i] > vetDominos[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int vetDominos[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vetDominos[i];
    }

    if (dominos(vetDominos, n))
    {
        cout << "ok";
    }
    else
        cout << "precisa de ajuste";
}