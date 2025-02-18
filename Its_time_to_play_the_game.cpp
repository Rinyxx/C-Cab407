#include <iostream>
#include <conio.h> 
using namespace std;


const int SIZE = 30; 

void clearScreen() {

    system("cls"); 


}

char getInput() {

    return _getch(); 

}

int main() {
    int x = 0, y = 0; 



    while (true) {
        clearScreen(); 

        
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                if (i == y && j == x) {
                    cout << "P "; 
                }
                else {
                    cout << ". "; 
                }
            }
            cout << '\n';
        }

        
        char input = getInput(); 
        switch (input) {
        case 'w': 
            if (y > 0) y--;
            break;
        case 's': 
            if (y < SIZE - 1) y++;
            break;
        case 'a': 
            if (x > 0) x--;
            break;
        case 'd': 
            if (x < SIZE - 1) x++;
            break;
        case 27: 
            return 0;

        default:
            break; 
        }
    }

    return 0;
}