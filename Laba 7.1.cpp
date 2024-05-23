#include <iostream>
#include <string>

using namespace std;

void deleteEvenElements(int arr[], int& size) {
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    size = newSize;
}

void deleteEvenWords(string& str) {
    string result = "";
    string word = "";
    bool isEvenWord = true;

    for (char c : str) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (isEvenWord) {
                result += word + " ";
            }
            word = "";
            isEvenWord = !isEvenWord;
        }
        else {
            word += c;
        }
    }

    if (isEvenWord) {
        result += word;
    }

    str = result;
}

int main() {

    system("chcp 1251 > Null");

    cout << "Введите элементы массива (для завершения введите 0): ";
    const int maxSize = 100;
    int arr[maxSize], size = 0, num = 0;
    string str;

    while (cin >> num && num != 0 && size < maxSize) {
        arr[size] = num;
        size++;
    }

    deleteEvenElements(arr, size);

    cout << "Массив без четных элементов: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cin.ignore(256, '\n');

    cout << "Введите строку: "; getline(cin, str);

    deleteEvenWords(str);

    cout << "Строка без четных слов: ";
    cout << str << endl;

    return 0;
}