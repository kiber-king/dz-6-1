#include <iostream>
using namespace std;
void Sort(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
};
void Sort(double* arr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	int const size = 13;
	int* arr = new int[size];
	double* arr1 = new double[size];
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 - 50;
	};
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	};
	cout << "\n";
	Sort(arr, size);

	for (int i = 0; i < size; i++) {
		cout<<arr[i]<<" ";
	};
	cout << "\n";
	for (int i = 0; i < size; i++) {
		arr1[i] = double(rand()) / RAND_MAX *100;
	};
	for (int i = 0; i < size; i++) {
		cout << arr1[i] << " ";
	};
	cout << "\n";
	Sort(arr1, size);

	for (int i = 0; i < size; i++) {
		cout << arr1[i] << " ";
	};

}
    