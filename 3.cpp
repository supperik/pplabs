#include <iostream>
#include <vector>
#include <cmath>
#include <windows.h>

// Функция для вычисления накопленных длин фрагментов ломаной
std::vector<double> CalculateAccumulatedLengths(const std::vector<std::pair<double, double>>& vertices) {
    std::vector<double> accumulatedLengths;
    double totalLength = 0.0;

    for (size_t i = 1; i < vertices.size(); ++i) {
        double dx = vertices[i].first - vertices[i - 1].first;
        double dy = vertices[i].second - vertices[i - 1].second;
        double segmentLength = std::sqrt(dx * dx + dy * dy);
        totalLength += segmentLength;
        accumulatedLengths.push_back(totalLength);
    }

    return accumulatedLengths;
}

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    // Задайте вершины ломаной, используя пары координат
    std::vector<std::pair<double, double>> vertices = {
        {0.0, 0.0},
        {1.0, 0.0},
        {1.0, 1.0},
        {2.0, 1.0}
    };

    // Вычислите накопленные длины фрагментов
    std::vector<double> accumulatedLengths = CalculateAccumulatedLengths(vertices);

    // Выведите накопленные длины на экран
    for (size_t i = 0; i < accumulatedLengths.size(); ++i) {
        std::cout << "b" << i << " = " << accumulatedLengths[i] << std::endl;
    }

    return 0;
}