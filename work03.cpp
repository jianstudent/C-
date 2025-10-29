#include <iostream>
using namespace std;

inline double square(double x)
{
    return x * x;
}


double power(double base, int exponent = 2)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}


template <typename T>
T calc(T a, T b, char op)
{
    switch (op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b == 0)  
            {
                cerr << "Error: Division by zero" << endl;
                return 0;
            }
            return a / b;
        default: 
            cerr << "Error: Unknown operator" << endl;
            return 0;
    }
}

int main()
{
    double a, b;
    char c;
    cin >> a >> b >> c;
    cout << square(a) << endl;
    cout << square(b) << endl;
    cout << power(a) << endl;  
   
    cout << calc(a, b, c) << endl;
    return 0;
}