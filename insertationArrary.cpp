#include <iostream>
using namespace std;
int main()
{
    int a[20],n,i,pos,data;
    cout << "How many data do you want to insert:";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout << "NUMBER["<<i<<"]:";
        cin>>a[i];
    }
    cout << "In which position do you want to insert:";
    cin>>pos;
    cout << "Which Data element do you want to insert:";
    cin>>data;
    for(i=n; i>=pos+1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos+1]=data;
    n=n+1;
    cout << "After insertion, Data elements are:"<<endl;

    for(i=1; i<=n; i++)
    {
        cout << "NUMBER["<<i<<"]:"<<a[i]<<endl;
    }
    return 0;
}
