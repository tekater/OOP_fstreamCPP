#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <fstream> // ifstream + ofstream
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <direct.h>

using namespace std;

//namespace exploration {
//    void fire() {
//        cout << "Пламя\n";
//    }
//}
//
//namespace weapon {
//    void fire() {
//        cout << "Выстрел\n";
//    }
//}
//
//void fire() {
//    cout << "fire\n";
//}

int main()
{
    setlocale(0, "");
    srand(time(nullptr));


    //FILE* f;
    
    int chose;
    int** arr;

    cout << "Enter rows:\n";
    int row;
    cin >> row;

    cout << "Enter cols:\n";
    int col;
    cin >> col;

    arr = new int* [row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = 1 + rand() % 20;
            cout << arr[i][j] << "\t \b\b";
        }
        cout << endl;
    }

    int** arr2;

    int row2;
    int col2;
   /* do {
        cout << "[1] - printf\n[2] - scanf\n";
        cin >> chose;
        switch (chose) {
        case 1:
            f = fopen("C:\\Games\\games.txt", "w");
            fprintf(f, "%d %d\n", row, col);

            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    fprintf(f, "%d ", arr[i][j]);
                }
                fprintf(f, "\n");
            }
            fclose(f);
            break;
        case 2:
            f = fopen("C:\\Games\\games.txt", "r");
            fscanf(f, "%d %d", &row2, &col2);
            arr2 = new int* [row2];

            for (int i = 0; i < row2; i++) {
                arr2[i] = new int[col2];
            }

            for (int i = 0; i < row2; i++) {
                for (int j = 0; j < col2; j++) {
                    fscanf(f, "%d ", &arr2[i][j]);
                }
            }

            for (int i = 0; i < row2; i++) {
                for (int j = 0; j < col2; j++) {
                    cout << arr2[i][j] << "\t \b\b";
                }
                cout << endl;
            }

            fclose(f);
            break;
        default:
            chose = 3;
            cout << "\nПока-пока!\n";
            break;
        }
    } while (chose != 3);*/

    
    
    int chose2;
    do {
        cout << "[1] - printf\n[2] - scanf\n";
        cin >> chose2;
        if (chose2 == 1) {
            ofstream outF("C:\\Games\\games.txt", ios::out);
            outF << row << " " << col << endl;

            for (int i = 0; i < row; i++) {
                for (int j = 0; j < col; j++) {
                    outF << arr[i][j] << " ";
                }
                outF << endl;
            }
            outF.close();
            break;
        }
        else if (chose2 == 2) {
            ifstream inF("C:\\Games\\games.txt", ios::in);
            inF >> row;
            inF >> col;
            arr2 = new int* [row2];

            for (int i = 0; i < row2; i++) {
                arr2[i] = new int[col2];
            }

            for (int i = 0; i < row2; i++) {
                for (int j = 0; j < col2; j++) {
                    inF >> arr[i][j];
                }
            }

            for (int i = 0; i < row2; i++) {
                for (int j = 0; j < col2; j++) {
                    cout << arr2[i][j] << "\t \b\b";
                }
                cout << endl;
            }

            inF.close();
            break;
        }
        else {
            chose2 = 3;
            cout << "\nПока-пока!\n";
            break;
        }
    } while (chose2 != 3);
}
