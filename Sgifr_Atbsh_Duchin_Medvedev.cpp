#include <iostream>
#include <string>
#include <algorithm> // для tolower и toupper

using namespace std;

char atbashChar(char c) {
    if (isalpha(c)) {
        char base = isupper(c) ? 'A' : 'a';
        return base + ('Z' - toupper(c)); // Более эффективное вычисление обратного символа
    }
    return c; // Оставляем другие символы без изменений
}

string atbash(const string& text) {
    string result = "";
    for (char c : text) {
        result += atbashChar(c);
    }
    return result;
}

int main() {
    setlocale(0, "");
    string text;
    cout << "Введите текст для шифрования: ";
    getline(cin, text);

    string encrypted = atbash(text);
    cout << "Зашифрованный текст: " << encrypted << "\n";
    return 0;
}
