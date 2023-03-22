#include <iostream>

using namespace std;

bool linha(int (*cubo)[3])
{

    int soma[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma[i] += cubo[i][j];
        }
    }

    if (soma[0] == soma[1] && soma[1] == soma[2])
    {
        return true;
    }
    else
        return false;
}

bool coluna(int (*cubo)[3])
{

    int soma[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma[i] += cubo[j][i];
        }
    }

    if (soma[0] == soma[1] && soma[1] == soma[2])
    {
        return true;
    }
    else
        return false;
}

bool diagonal(int (*cubo)[3])
{
    int soma[2] = {0, 0};
    int j = 0;

    for (int i = 0; i < 3; i++)
    {
        soma[0] += cubo[i][i];
    }

    for (int i = 2; i >= 0; i--)
    {

        for (j = 0; j < 3; j++)
        {
            soma[1] += cubo[j][i];
            break;
        }
        // [0][2] ++ [1][1] ++ [2][0]
    }
    if (soma[0] == soma[1])
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int cubo[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            cin >> cubo[i][j];
        }
    }

    if (linha(cubo) && diagonal(cubo) && coluna(cubo))
    {
        cout << "sim";
    }
    else
        cout << "nao";
}