#include <iostream>
#include <limits>

int main() {
    int size = 0;
    std::cout << "Введите значение размера: ";
    if(std::cin >> size) {
        if(size > 0) {
            std::cout << "Число является положительным целым числом." << std::endl;
        } else {
            std::cout << "Число не является положительным целым числом." << std::endl;
        }
    } else {
        std::cout << "Введено не целое число." << std::endl;
        // очищаем ошибки и игнорируем оставшийся ввод
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    return 0;
}
