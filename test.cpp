#include <iostream>

using namespace std;

// Функция, проверяющая, является ли число делителем для всех чисел в массиве
bool checkDivisor(const vector<int>& array, int num) {
    for (int i : array) {
        if (num % i != 0) {
            return false;
        }
    }
    return true;
}

// Функция, проверяющая, делится ли число на все числа в массиве
bool checkDivisible(const vector<int>& array, int num) {
    for (int i : array) {
        if (i % num != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> a = {2, 6};
    vector<int> b = {24, 36};

    // Найти максимум в a и минимум в b
    int maxA = *max_element(a.begin(), a.end());
    int minB = *min_element(b.begin(), b.end());

    // Проверить все числа между maxA и minB
    for (int i = maxA; i <= minB; ++i) {
        if (checkDivisor(a, i) && checkDivisible(b, i)) {
            std::cout << i << " ";
        }
    }

    return 0;
}
