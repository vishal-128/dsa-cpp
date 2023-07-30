#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "enter number of rows" << endl;
    cin >> n;
    cout << "enter no.of col" << endl;
    cin >> m;
    int i, j, a, start, arr[n][m];
    cout << "enter values in matrix :";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (j = 0; j < m; j++)
    {
        if(j%2==0)
        {
            for (i = 0; i < n; i++)
        {
            cout<< arr[i][j]<<" ";
        }
        }
        else{
        
        for (i = n-1; i >= 0; i--)
        {
            cout<< arr[i][j]<<" ";
        }
        }
    }
}


    