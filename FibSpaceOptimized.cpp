#include <iostream>
#include <cstdlib>

using namespace std;


// Fibonacci com Otimiza��o de Espa�o
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
    return 0;
}
