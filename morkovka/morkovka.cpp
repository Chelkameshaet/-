// morkovka.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int sum = 0;

    for (int i = 1; i <= 150; ++i) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum += i;
        }
    }

    cout << "Сумма всех чисел, кратных 5 или 7 в диапазоне от 1 до 150: " << sum << endl;

    return 0;

}