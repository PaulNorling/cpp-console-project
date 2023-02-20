#include <iostream>
#include <string>
using namespace std;
#include <cmath>

int main()
{
    cout << "Calculator Console App" << endl << endl;

    int x,y;
    int result;
    char operater;

    cout << "Enter a number:" <<endl;
    cin >> x;
    cout << "Enter operator: +, -, *, /: " <<endl;
    cin >> operater;
    cout << "Enter another number:" <<endl;
    cin >> y;
    switch(operater) {
        case '+':
        cout << "result: " << x + y <<endl;
        break;
        case '-':
        cout << "result: " << x - y <<endl;
        break;
        case '/':
        cout << "result: " << x / y <<endl;
        break;
        case '*':
        cout << "result: " << x * y <<endl;
        break;
        default:
        cout << "Error incorrect opperator" <<endl;
        break;
    }
    
    return 0;
}