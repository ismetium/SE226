#include <iostream>
using namespace std;

class MyOperations {
public:
    void swapValues(int* p1, int* p2) {
        int temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }

    void printArray(int* arr, int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void findSum(int* arr, int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    void shiftRight(int* arr, int size) {
        int last = arr[size - 1];
        for (int i = size - 1; i >= 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    int* createArray(int size) {
        int* arr = new int[size];
        int sum = 0;

        cout << "Enter values: ";
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
            sum += arr[i];
        }
        cout << "Array elements:";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << "Sum of elements: " << sum << endl;
        return arr;
    }

    void deleteArray(int* arr) {
        cout <<"Deleting Array..." << endl;
        delete[] arr;
        cout <<"Memory released successfully."<<endl;
    }


    int main() {
        MyOperations op;

        cout << "--- Testing swapValues ---" << endl;
        {
            int sayı1 = 5;
            int sayı2 = 8;
            int *p1 = &sayı1;
            int *p2 = &sayı2;

            op.swapValues(p1, p2);

            cout << *p1 <<  endl;
            cout << *p2 <<  endl;
        }

        cout << "\n--- Testing printArray ---" << endl;
        {
            int size;

            cout << "Enter an Array size : " << endl;
            cin >> size;

            int* arr = new int[size];

            cout << "Enter Array elements : " << endl;
            for (int i = 0; i < size; i++) {
                cin >> arr[i];
            }
            op.printArray(arr, size);

            delete[] arr; // Sızıntı olmaması için eklendi (orijinalinde yoktu ama bellekte kalmasın)
        }

        cout << "\n--- Testing findSum ---" << endl;
        {
            int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            op.findSum(arr, 10);
        }

        cout << "\n--- Testing shiftRight ---" << endl;
        {
            int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
            op.shiftRight(arr, 10);

            for (int i = 0; i < 10; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        cout << "\n--- Testing createArray ---" << endl;
        {
            int size;

            cout << "Enter array size: ";
            cin >> size;
            int* myArray = op.createArray(size);
            delete[] myArray;
        }

        cout << "\n--- Testing deleteArray ---" << endl;
        {
            int* arr = new int[5];
            op.deleteArray(arr);
        }

        return 0;
    }
};