// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    string input, secondstring;
    int mode, position, charcount, index;
    cout << "Enter string:\n";
    getline(cin, input, '\n');
    cout << "Choose mode:" << '\n' << "1.insert\n" << "2.erase\n" << "3.replace\n" << "4.find\n";
    cin >> mode;
    switch(mode){
    case 1:
        cout << "Enter position and string\n";
        cin >> position;
        getline(cin, secondstring);
        cout << input.insert(position, secondstring);
        break;
    case 2:
        cout << "Enter position and count\n";
        cin >> position;
        cin >> charcount;
        cout << input.erase(position, charcount);
        break;
    case 3:
        cout << "Enter position, count and string\n";
        cin >> position >> charcount;
        getline(cin, secondstring, '\n');
        cout << input.replace(position, charcount, secondstring);
        break;
    case 4:
        cout << "Enter string:\n";
        cin >> secondstring;
        index = input.find(secondstring);
        cout << index;
        break;
    default:
        cout << "bebra";
    }
}
