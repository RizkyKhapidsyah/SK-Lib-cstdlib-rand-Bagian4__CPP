#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int lb = 20, ub = 100;
    // Program ini akan membuat beberapa urutan acak
    // angka pada setiap program dijalankan dalam rentang lb hingga ub
    
    for (int i = 0; i < 5; i++) {
        cout << (rand() % (ub - lb + 1)) + lb << " ";
    }

    _getch();
    return 0;
}