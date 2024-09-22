#include <iostream>
using namespace std;
int main() {
    // task 1

    setlocale(0, "Rus");
    cout << "int: " << sizeof(int) << " ����\n";
    cout << "short int: " << sizeof(short int) << " ����\n";
    cout << "long int: " << sizeof(long long) << " ����\n";
    cout << "float: " << sizeof(float) << " ����\n";
    cout << "double: " << sizeof(double) << " ����\n";
    cout << "long double: " << sizeof(long double) << " ����\n";
    cout << "char: " << sizeof(char) << " ����\n";
    cout << "bool: " << sizeof(bool) << " ����\n";

    cout << "\n" << "\n" << "\n";


    // task 2

    
    int integerNumber;
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);

    cout << "������� ����� ���� integer: ";
    cin >> integerNumber;
    for (int i = 0; i < sizeof(int) * 8 + 1; ++i, mask >>= 1) { 
        if (mask & integerNumber)
            cout << '1';
        else
            cout << '0';

        if (i == 1 || i % 8 == 0) {

            cout << ' ';

        }
    }

    cout << "\n" << "\n" << "\n";

    
    // task 3

    
    union {

        int numberI;
        float numberF;

    };
    cout << "������� ����� ���� float: ";
    cin >> numberF;

    /* cout << &numberI << " " << &numberF << "\n"; -- �������� �� ��, ��� numberI � numberF �������� ���� � �� �� ����� � ������
    cout << numberI << " " << numberF << "\n"; -- �������� ����, ��� ��������� ������������ ����� ���� float � ����� ���� integer
    */

    mask = 1 << (sizeof(float) * 8 - 1);

    for (int i = 0; i < sizeof(float) * 8 + 1; ++i, mask >>= 1) {
        if (mask & numberI)
            cout << '1';
        else
            cout << '0';

        if (i == 1 || i % 8 == 0) {

            cout << ' ';
        }
            

    }


}