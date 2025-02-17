#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int x = 0, y = 0;

    while (true) {
        
        system("cls||clear");


        for (int i = 1; i < 30; i++) {
            for (int j = 1; j < 30; j++) {
                cout << (i == y && j == x ? "P " : ". ");
            }
            cout << '\n';
        }


        cout << "Введите X Y (1-30): ";
        cin >> x >> y;


        x = max(1, min(30, x));
        y = max(0, min(30, y));
    }
    return 0;
}