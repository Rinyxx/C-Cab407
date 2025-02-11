#include <iostream>
#include <string>
#include <vector>
using namespace std;


void setColor(const string& color) {
    setlocale(0, "");
    cout << color;
}

int main()
{
    setlocale(0, "");
    string text;
    string word;

    
    cout << "Введите текст: ";
    getline(cin, text);

    
    cout << "Введите поисковое слово: ";
    getline(cin, word);

    
    size_t pos = text.find(word);
    if (pos != string::npos) {
        
        cout << text.substr(0, pos);

        
        setColor("\033[31m"); 
        cout << text.substr(pos, word.length());
        setColor("\033[0m"); 

        
        cout << text.substr(pos + word.length()) << endl;
    }
    else {
        cout << "Совпадение не найдено." << endl;
    }

    return 0;
}