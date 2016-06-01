#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;


// Fibonacci com Otimização de Espaço
// Complexidade:
// O(n)
int fib_space(int n)
{
    int a = 0, b = 1, c , i;
    if (n == 0)
        return a;
    for (i=2;i<=n;i++)
    {
        c = a+b; // Faz as somas dos termos
        a = b; // Armazena em a o ultimo valor
        b = c; // E iguala c a b para memorizar o valor anterior
    }
    return b;
}


int main()
{
    int n;
    cout << "Digite um numero:\n";
    cin >> n;
    cout << "Resultado: "<<fib_space(n)<<" \n";
    _getch();
    return 0;
}
