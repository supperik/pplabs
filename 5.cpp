#include <iostream>
#include <vector>
#include <windows.h>

// Функция для вычисления вектора частичных разностей
std::vector<double> CalculatePartialDifferences(const std::vector<double>& inputVector) {
    std::vector<double> partialDifferences;

    for (size_t i = 0; i < inputVector.size(); ++i) {
        if (i == 0) {
            // b0 = a0
            partialDifferences.push_back(inputVector[i]);
        } else {
            // bi = ai - ai-1
            double difference = inputVector[i] - inputVector[i - 1];
            partialDifferences.push_back(difference);
        }
    }

    return partialDifferences;
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Задайте исходный вектор
    std::vector<double> inputVector;
    int numElem;

    std::cout << "Введите кол-во элементов: ";
    std::cin >> numElem;

    std::cout << "Введите числа для каждого элемента:\n" << std::endl;
    for (int i = 0; i < numElem; ++i) {
        double elem;
        std::cin >> elem;
        inputVector.push_back(elem);
    }

    // Вычислите вектор частичных разностей
    std::vector<double> partialDifferences = CalculatePartialDifferences(inputVector);

    // Выведите вектор частичных разностей на экран
    for (size_t i = 0; i < partialDifferences.size(); ++i) {
        std::cout << "b" << i << " = " << partialDifferences[i] << std::endl;
    }

    return 0;
}