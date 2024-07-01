#include <iostream>
#include <string>

using namespace std;

void print();
void sum(int a, int b);

int main()
{
    print();
    sum(5, 4);
    
    return 0;
}

void print()
{
    cout << "Hello C++" << endl;
}

void sum(int a, int b)
{
    cout << "Сумма a и b = " << a+b << endl;
}



/* g++ main.cpp
./a.exe */