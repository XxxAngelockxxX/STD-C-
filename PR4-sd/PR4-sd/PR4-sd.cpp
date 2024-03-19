#include <iostream>
#include <Windows.h>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int L;
	cout << " Elements in array: ";
	cin >> L;
	int* arr = new int[L];

	int x ;
	cout << "element you need to find: ";
	cin >> x;
	int result = -1;
	int num;
	int l = 0;
	int r = L - 1;
	for (int i = 0; i < L; i++) {
		cout << "Введи елемент: " << endl;
		cin >> num;
		arr[i] = num;
		//cout << arr[i] << " ";
	}
	for (int i = 0; i < L; i++) {
		cout << arr[i] << " ";
	}

	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x) {
			result = mid;
			break;
		}

		
		if (arr[mid] < x)
			l = mid + 1;

		
		else
			r = mid - 1;
	}
	int sort = 0;
	for (int i = 0; i < L-1; i++) {
		if(arr[i] < arr[i+1]){
			sort += 1;
		}
	}

	if (result == -1) cout << "Елемент не знайдено \n";
	else  cout << "Елемент знайдено на позиції " << result + 1 << endl;
	if (sort == (L-1)) {
		cout << "Масив відсортований";
	}
	else {
		cout << "Масив не відсортований";
	}
	return 0;
}
