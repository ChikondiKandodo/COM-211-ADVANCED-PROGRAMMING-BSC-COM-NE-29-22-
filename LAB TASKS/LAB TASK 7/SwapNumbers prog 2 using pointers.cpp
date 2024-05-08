#include <iostream>
using namespace std;

void SwapNumbers(int* number1, int* number2) {
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

int main() {
    int variableA = 25;
    int VariableB = 100;

    cout << "variableA before swap: " << variableA << endl; // variableA is 25
    cout << "VariableB before swap: " << VariableB << endl; // VariableB is 100

    SwapNumbers(&variableA, &VariableB);

    cout << "variableA after swap: " << variableA << endl; // variableA is 100
    cout << "VariableB after swap: " << VariableB << endl; // VariableB is 25

    return 0;
}
