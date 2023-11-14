// ogurchik.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int a = 10;

    int fibo1 = 0;
    int fibo2 = 1;

    cout << fibo1 << " ";
    cout << fibo2 << " ";

    for (int i = 2; i < a; ++i) {
        int fibo = fibo1 + fibo2;

        cout << fibo << " ";


        fibo1 = fibo2;
        fibo2 = fibo;
    }

    return 0;
}
