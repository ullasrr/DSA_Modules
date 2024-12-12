#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string str = "ullas is     studing";

    stringstream ss(str);
    string temp;

    while(ss>>temp){
        cout<<temp<<endl;
    }

    return 0;
}