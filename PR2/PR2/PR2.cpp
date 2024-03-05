#include <iostream>
#include <ctime>
using namespace std;
void task1() {
    srand(time(nullptr));


    int X[28];
    int M;
    int Y[28];
    int el = 0;
    cout << "Chose Modul: ";
    cin >> M;

    for (int i = 0; i < 28; ++i) {
        X[i] = rand() % 100 + 1;
        cout << X[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 28; i++) {
        if (abs(X[i]) > M) {
            Y[el++] = X[i];
        }
    }

    for (int i = 0; i < el; i++) {
        cout << Y[i] << "  ";
    }
}
void task2() {
    srand(time(nullptr));
    int arr[28];
    for (int i = 0; i < 28; ++i) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 28; i++) {
        if (arr[i] < 0) {
            arr[i] = -(arr[i]);
        }
        cout << arr[i] << " ";
    }


}
void task3() {
    int denominations[] = { 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1 };
    int amount;

    cout << "Введіть суму: ";
    cin >> amount;

    cout << "Видача:\n";

    for (int i = 0; i < 10; ++i) {
        int count = amount / denominations[i];
        if (count > 0) {
            cout << denominations[i] << " грн: " << count << " купюр\n";
            amount -= count * denominations[i];
        }
    }

}
void task4() {
    int arr1[] = { 1, 4, 6, 9, 10 };
    int arr2[] = { 2, 3, 5, 7, 8 };
    int merged[10];

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    for (int i = 0; i < size1; ++i) {
        merged[i] = arr1[i];
    }
    for (int i = 0; i < size2; ++i) {
        merged[size1 + i] = arr2[i];
    }

    for (int i = 0; i < size1 + size2 - 1; ++i) {
        for (int j = 0; j < size1 + size2 - i - 1; ++j) {
            if (merged[j] > merged[j + 1]) {
                int temp = merged[j];
                merged[j] = merged[j + 1];
                merged[j + 1] = temp;
            }
        }
    }

    cout << "Об'єднаний масив у порядку зростання: ";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;
}
int main()
{
    task1();
    task2();
    task3();
    task4();
}