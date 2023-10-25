#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

std::vector<int> CalculateRunningRange(const std::vector<int>& inputVector) {
    std::vector<int> runningRange;
    int currentMin = inputVector[0]; // Начальное значение минимума - первый элемент
    int currentMax = inputVector[0]; // Начальное значение максимума - первый элемент

    for (size_t i = 0; i < inputVector.size(); ++i) {
        // Обновляем текущий минимум и максимум
        currentMin = std::min(currentMin, inputVector[i]);
        currentMax = std::max(currentMax, inputVector[i]);
        // Вычисляем бегущий размах и добавляем в вектор runningRange
        int range = currentMax - currentMin;
        runningRange.push_back(range);
    }
    return runningRange;
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::vector<int> inputVector;
    int numElem;

    // Ввод количества элементов в векторе
    std::cout << "Введите кол-во элементов: ";
    std::cin >> numElem;

    // Ввод элементов вектора с клавиатуры
    std::cout << "Введите числа для каждого элемента:\n";
    for (int i = 0; i < numElem; ++i) {
        int elem;
        std::cin >> elem;
        inputVector.push_back(elem);
    }

    std::vector<int> runningRange = CalculateRunningRange(inputVector);

    // Вывод вектора бегущих размахов
    for (size_t i = 0; i < runningRange.size(); ++i) {
        std::cout << "b" << i << " = " << runningRange[i] << std::endl;
    }

    return 0;
}