#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    setlocale(0, "");
    string text;
    cout << "Введите текст: ";
    getline(cin, text);  

    
    vector<char> charVector(text.begin(), text.end());

    int count = charVector.size();

    cout << "Количество символов (включая пробелы): " << count << "\n";

    return 0;
}