#include <iostream>
#include <cstdlib>

using namespace std;


// Fibonacci recursivo
// Complexidade:
// O(2^n)
int fib_rec(int n)
{
    if(n<=0){
      return 0;
    }
    else if(n<=1){
        return 1;
    }
    else return fib_rec(n-1)+fib_rec(n-2);
}


int main()
{
    int n;
    cout << "Digite um numero:\n";
    cin >> n;
    cout << "Resultado: "<<fib_rec(n)<<"";

    return 0;
}
