#include <iostream>
using namespace std;

int main()
{
    int r, c, arr[50][50], arr1[50][50], sum[50][50], i, j;

    cout << "Enter number of rows: ";
    cin >> r;

    cout << "Enter number of columns: ";
    cin >> c;

    cout << endl << "Enter elements of 1st matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element " << i + 1 << j + 1 << " : ";
           cin >> arr[i][j];
       }
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(i = 0; i < r; ++i)
       for(j = 0; j < c; ++j)
       {
           cout << "Enter element " << i + 1 << j + 1 << " : ";
           cin >> arr1[i][j];
       }
    for(i = 0; i < r; ++i)
        for(j = 0; j < c; ++j)
            sum[i][j] = arr[i][j] + arr1[i][j];
    cout << endl << "Sum of two matrix is: " << endl;
    for(i = 0; i < r; ++i)
    {
        for(j = 0; j < c; ++j)
        {
            cout << sum[i][j]<<" ";
          
        }
           cout<<"\n";
    }
    return 0;
}