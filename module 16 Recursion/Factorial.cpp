#include <iostream>
using namespace std;

int fact(int num)
{
    if (num == 0 || num == 1)
        return 1;

    int result = num * fact(num - 1);

    return result;
}

int main()
{

    int n;
    cout << "enter n:";
    cin >> n;

    cout << fact(n);

    return 0;
}