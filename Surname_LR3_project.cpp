//Задание 1. ввести первый символ ch1 
//Задание 2. ввести второй символ ch2 
//Задание 3. вывести каждый символ и его код ASCII 
//Задание 4. вывести сумму кодов ASCII символов ch1 и ch2

//Пожалуйста, введите номер действия или 0, если вы хотите закрыть программу

#include <iostream>
#include <string>

using namespace std;

char inputFirstChar() {
    char ch;
    cout << "Введите первый символ: ";
    cin >> ch;
    return ch;//branch_fun_1
}

// Функция для ввода второго символа
char inputSecondChar() {
    char ch;
    cout << "Введите второй символ: ";
    cin >> ch;
    return ch;
}


// Функция для вывода символа и его кода ASCII
void printCharAndAscii(char ch) {
    cout << "Символ: " << ch << ", Код ASCII: " << (int)ch << endl;
}

// Функция для вывода суммы кодов ASCII
void printAsciiSum(char ch1, char ch2) {

}

int main() {
    setlocale(LC_ALL, "ru");

    char ch1, ch2;
    int choice;

    do {
        cout << "Пожалуйста, введите номер действия или 0, если вы хотите закрыть программу:" << endl;
        cout << "1. Ввести первый символ" << endl;
        cout << "2. Ввести второй символ" << endl;
        cout << "3. Вывести каждый символ и код ASCII" << endl;
        cout << "4. Вывести сумму кодов ASCII символов ch1 и ch2" << endl;
        cin >> choice;

        switch (choice) {
        case 1:
            ch1 = inputFirstChar();
            break;
        case 2:
            ch2 = inputSecondChar();
            break;
        case 3:
        printCharAndAscii(ch1);
        printCharAndAscii(ch2);
            break;
        case 4:
            break;
        case 0:
            cout << "Программа завершена." << endl;
            break;
        default:
            cout << "Неверный номер действия." << endl;
        }
        cout << endl;
    } while (choice != 0);

    return 0;
}
