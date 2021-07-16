#include <iostream>
#include <string>
using namespace std;

bool Palindrome_Permutation(string);

int main()
{
    string str;
    getline(cin,str);
    cout << Palindrome_Permutation(str);
}

bool Palindrome_Permutation(string str)
{
    int arr[256]{0};
    int key = 0;
    int count = 0;
    for(int i = 0; i < str.length();++i)
    {   
        if(str[i] == ' '){++i;}
        key = str[i];
        arr[key] +=1;
    }
    for(int j = 0; j < 256; ++j)
    {
        if(arr[j] % 2 != 0)
        {
            ++count;
        }
    }
    if(count == 0 || count == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}