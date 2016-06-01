#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;


// Fibonacci recursivo
// Complexidade:
// O(2^n)
int fib_rec(int n)
{
    if(n<=1)
        return 1;
    else return fib_rec(n-1)+fib_rec(n-2);
}


int main()
{
    int n;
    cout << "Digite um numero:\n";
    cin >> n;
    cout << "Resultado: "<<fib_rec(n)<<"";
    _getch();

    return 0;
}
