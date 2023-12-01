#include <iostream>
using namespace std;
int main()
{ 
    int a[50],n,i,j;
    cout<<"How many data do you want to insert:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        a[i]=i+200;
    }
    cout<<"Array Data Elements are:"<<endl;
    for(j=1; j<=n; j++)
    {
        cout<<"Element["<<j<<"]:"<<a[j]<<endl;
    }
    return 0;
}
