#include <iostream>

using namespace std;

int main()
{
    int r,c;
    cout<<"Enter row size:";
    cin>>r;
    cout<<"Enter coloum size:";
    cin>>c;
    int a[r][c];

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            {
                cout<<"Element["<<i<<"]["<<j<<"]:";
                cin>>a[i][j];
            }
    }
 cout<<"array data elements are:"<<endl;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
            {
                cout<<"Element["<<i<<"]["<<j<<"]:"<<a[i][j]<<endl;
            }
    }
    return 0;
}

