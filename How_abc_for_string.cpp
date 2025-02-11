#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "");
    string text;
    cout << "Введите текст: ";
    getline(cin, text);  
    int count = text.length();

    cout << "Количество символов (включая пробелы): " << count << "\n";

    return 0;
}