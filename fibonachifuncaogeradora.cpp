#include <math.h>
#include <iostream>

#include <cstdlib>
// Programa Fibonacci usando formula fechada
using namespace std;
// Melhor complexidade:
// O(log n)
double fib_op(int x)
{
    double fibx =(1/sqrt(5))*((pow(((1+sqrt(5))/2),x)- pow(((1-sqrt(5))/2),x)));// função matematica usada para a função de recorrencia
    return fibx;//o intuito é não haver chamadas de recursão
}

/*O Programa main é apenas um teste para ver se o programa funciona certo com números inteiros*/
int main()
{
    int n;
    double resultado;
    cout << "Digite um numero\n";
    cin >> n;
    cout << "Resultado: "<<fib_op(n)<<"";
    return 0;
}
