#include <string>
#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    setlocale(0, "");
    string word;

    
    cout << "Введите слово: ";
    cin >> word;

   
    reverse(word.begin(), word.end());

    
    cout << "Перевернутое слово: " << word << "\n";

    int _;cin >> _;

    return 0;
}
