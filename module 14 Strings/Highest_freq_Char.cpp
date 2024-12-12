#include <iostream>
#include <climits>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{

    // string s = "aassdd";
    // int max = 0;

    // for (int i = 0; i < s.length(); i++)
    // {
    //     char ch = s[i];
    //     int count = 1;
    //     for (int j = i + 1; j < s.length(); j++)
    //     {
    //         if (s[i] == s[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (max < count)
    //         max = count;
    // }

    // for (int i = 0; i < s.length(); i++)
    // {
    //     char ch = s[i];
    //     int count = 1;
    //     for (int j = i + 1; j < s.length(); j++)
    //     {
    //         if (s[i] == s[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (max == count)
    //         cout << ch << " " << max << endl;
    // }


// Method 2

    string s="leetcodedd";
    vector<int> v(26,0);

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int ascii=(int)ch;
        v[ascii-97]++;
    }
int max=0;

    for(int i=0;i<26;i++){
        if(v[i]>max) max=v[i];
    }
    for(int i=0;i<26;i++){
       if(v[i]==max){
        cout<<char(i+97)<<" "<<max<<endl;
       }
        
    }

    return 0;
}