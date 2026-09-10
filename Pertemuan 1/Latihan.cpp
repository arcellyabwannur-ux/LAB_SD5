#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[3][3][4];
    int val = 2;

    for (int l = 0; l < 3; l++) {
        for (int b = 0; b < 3; b++) {
            for (int k = 0; k < 4; k++) {
                arr[l][b][k] = val;
                val += 2;
            }
        }
    }

    for (int l = 0; l < 3; l++) {
        cout << "TABEL " << (l + 1) << endl;
        
        for (int b = 0; b < 3; b++) {
            for (int k = 0; k < 4; k++) {
                cout << arr[l][b][k] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}