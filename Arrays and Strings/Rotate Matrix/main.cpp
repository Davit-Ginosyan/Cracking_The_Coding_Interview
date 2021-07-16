/////Rotate Matrix
#include <iostream>
using namespace std;

void Rotate_Matrix(int**, int);
void print(int**,int);

int main()
{
    int n;
    int key = 0;
    cin >> n;
    int** ptr = new int*[n];
    for(int i = 0; i < n; ++i)
    {
        ptr[i] = new int[n];
    }
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            ptr[i][j] = key;
            ++key;
        }
    }
    print(ptr,n);
    Rotate_Matrix(ptr,n);
    print(ptr,n);
}


void Rotate_Matrix(int** ptr, int n)
{
    int ke = n -1 ;
    int t = n-1 ;
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0; j < n/2 ; ++ j)
        {   
            swap(ptr[i][j],ptr[i][n-1-j]);
        }     
    }

    for(int i = 0; i < n; ++i)
       {
           for(int j = 0; j < t; ++j)
           {
               swap(ptr[i][j],ptr[ke - j][t]);
           }
           --t;
       }
}

void print(int** ptr,int n)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
         cout << ptr[i][j]<<'\t';
        }cout << endl;
    }
    cout << endl;
}