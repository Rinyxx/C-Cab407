#include <iostream>
#include <string>
using namespace std;


string colorizeText(const string& text, const string& word) {
    string result;
    for (size_t i = 0; i < text.length(); ++i) {
        bool isMatch = false;
        for (char ch : word) {
            if (tolower(text[i]) == tolower(ch)) { 
                isMatch = true;
                break;
            }
        }
        if (isMatch) {
            result += "\033[35m"; 
            result += text[i];
            result += "\033[0m"; 
        }
        else {
            result += text[i];
        }
    }
    return result;
}

int main() {
    setlocale(0, "");
    string text;
    string word;

    
    cout << "Введите текст: ";
    getline(cin, text);

   
    cout << "Введите поисковое слово: ";
    getline(cin, word);

    string coloredText = colorizeText(text, word);

    
    cout << "Результат: " << coloredText << endl;

    return 0;
}