#include <iostream>
#include <vector>
#include <windows.h>

std::vector<double> CalculateArithmeticAvg(const std::vector<double>& inputVector) {
    std::vector<double> arithmeticAvg;

    double sum = 0.0;
    for (size_t i = 0; i < inputVector.size(); ++i) {
        sum += inputVector[i];
        double Avg = sum / (i + 1);
        arithmeticAvg.push_back(Avg);
    }

    return arithmeticAvg;
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::vector<double> inputVector;
    int numElem;

    std::cout << "Введите кол-во элементов: ";
    std::cin >> numElem;

    std::cout << "Введите числа для каждого элемента:\n";
    for (int i = 0; i < numElem; ++i) {
        double elem;
        std::cin >> elem;
        inputVector.push_back(elem);
    }

    std::vector<double> arithmeticAvg = CalculateArithmeticAvg(inputVector);

    for (size_t i = 0; i < arithmeticAvg.size(); ++i) {
        std::cout << "b" << i << " = " << arithmeticAvg[i] << std::endl;
    }

    return 0;
}