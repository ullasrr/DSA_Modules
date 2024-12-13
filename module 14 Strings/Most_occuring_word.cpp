#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string str = "ullas is a student. He is a a good";
    stringstream ss(str);
    string temp;
    vector<string> v;

    while (ss >> temp)
    {
        v.push_back(temp);
    }

    sort(v.begin(), v.end());
    int count = 1;
    int maxCount = 1;
    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] == v[i - 1])
        {
            count++;
        }
        else
            count = 1;

        maxCount = max(maxCount, count);
    }
    cout << maxCount;
count=1;
cout<<endl;
    for (int i = 0; i < v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count=1;

        if(count==maxCount){
            cout<<v[i]<<endl;
        }

    }
    

    return 0;
}