////////Zero Matrix
#include <iostream>
#include <vector>
using namespace std;

void Zero_Matrix(int**,int,int);
void print(int**,int,int);

int main()
{
    int m,n;
    int key = 0;
    cin >> m;
    cin >> n;
    int** ptr = new int*[m];
    for(int i = 0; i < m; ++i)
    {
        ptr[i] = new int[n];
    }
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            ptr[i][j] = key;
            ++key;
        }
    }

    print(ptr,m,n);
    Zero_Matrix(ptr,m,n);
    print(ptr,m,n);
}

void Zero_Matrix(int** ptr,int m,int n)
{
    vector<pair<int,int>> zero;

    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(ptr[i][j] == 0)
            {
                zero.push_back(make_pair(i,j));
            }
        }
    }

    for(int k = 0; k < zero.size(); ++k )
    {
        for(int i = 0; i < n; ++i)
        {
            ptr[zero[k].first][i] = 0;
        }

        for(int i = 0; i < m; ++i)
        {
            ptr[i][zero[k].second] = 0;
        }
    }
    

}

void print(int** ptr,int m,int n)
{
        for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
         cout << ptr[i][j]<<'\t';
        }cout << endl;
    }
    cout << endl;
}