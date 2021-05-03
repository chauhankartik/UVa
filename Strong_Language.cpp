#include<bits/stdc++.h>
using namespace std;

template<class T>
T Large(T a, T b)
{
    return (a > b) ? a : b;
}

template<class T>
void swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template<class T>
class Calculator 
{
private:
    T a, b;
public:
    Calculator(T _a, T _b)
    {
        a = _a;
        b = _b;
    }

    void displayResults()
    {
        cout << "Numbers are: " << a << " and " << b << endl;
        cout << "Addition is: " << add() << endl;
    }

    T add() {return a + b;}
};

int main() {

    Calculator<float> floatCalc(2.4, 8.7);
    floatCalc.displayResults();
    return 0;
}