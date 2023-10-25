#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>

std::vector<int> CalculateRunningRange(const std::vector<int>& inputVector) {
    std::vector<int> runningRange;
    int currentMin = inputVector[0]; // ��������� �������� �������� - ������ �������
    int currentMax = inputVector[0]; // ��������� �������� ��������� - ������ �������

    for (size_t i = 0; i < inputVector.size(); ++i) {
        // ��������� ������� ������� � ��������
        currentMin = std::min(currentMin, inputVector[i]);
        currentMax = std::max(currentMax, inputVector[i]);
        // ��������� ������� ������ � ��������� � ������ runningRange
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

    // ���� ���������� ��������� � �������
    std::cout << "������� ���-�� ���������: ";
    std::cin >> numElem;

    // ���� ��������� ������� � ����������
    std::cout << "������� ����� ��� ������� ��������:\n";
    for (int i = 0; i < numElem; ++i) {
        int elem;
        std::cin >> elem;
        inputVector.push_back(elem);
    }

    std::vector<int> runningRange = CalculateRunningRange(inputVector);

    // ����� ������� ������� ��������
    for (size_t i = 0; i < runningRange.size(); ++i) {
        std::cout << "b" << i << " = " << runningRange[i] << std::endl;
    }

    return 0;
}