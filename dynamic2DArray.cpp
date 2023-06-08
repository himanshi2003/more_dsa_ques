#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cin >> n;
    // // creation of 2d array
    // int **arr = new int *[n];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = new int[n];
    // }
    // // taking input
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    // // taking output
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    //! if num of rows ans col are diff
    int n, m;
    cin >> n >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    // taking inputs
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // taking output 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }



    //releasing memory
    for(int i=0;i<n;i++){
        delete [] arr[i];
    }
    delete []arr;

    return 0;
}