// Sum of intergers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    const int n = 10;
    int arr[10];
    int number;
    int concanum;
    cout << "Enter ten integer numbers" << endl;

    for (int i = 0;i < 10;i++) {
        cin >> number;
        sum += number;
        concanum = number;

                
    }
    cout << "The sum of ten integer numbers is :" << sum << endl;
    cout << "The concatenated  integer numbers is :" << concanum << endl;

    return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
