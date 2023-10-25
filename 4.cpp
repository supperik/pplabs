#include <iostream>
#include <vector>
#include <cmath>
#include <windows.h>

std::vector<double> CalculateGeometricAvg(const std::vector<double>& inVector) {
    std::vector<double> geometricAvg;
    for (size_t i = 0; i < inVector.size(); ++i) {
        if (i == 0) {
            geometricAvg.push_back(inVector[i]);
        }
        else {
            double value = 1.0;
            for (size_t j = 0; j <= i; ++j) {
                value *= inVector[j];
            }
            double Avg = pow(value, 1.0 / (i + 1));
            geometricAvg.push_back(Avg);
        }
    }
    return geometricAvg;
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
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

    std::vector<double> outputVector = CalculateGeometricAvg(inputVector);

    for (size_t i = 0; i < outputVector.size(); ++i) {
        std::cout << "b" << i << " = " << outputVector[i] << std::endl;
    }

    return 0;
}