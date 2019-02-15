#include <iostream>

using namespace std;

int main()
{
    int x[10][10]={0};
    int s = 0;
    int y = 1;

    for(int i = 1;i<=3;i++)
    {
        for(int j = 1;j<=3;j++)
        {
            x[i][j]=y;
            y++;
        }
    }

    for(int i = 1;i<=3;i++)
    {
        for(int j = 1;j<=3;j++)
        {
            if(i == j)
            {
                s = x[i][j] +s;
            }
        }
    }

 cout<<s<<endl;
    for(int i = 1;i<=3;i++)
    {
        for(int j = 1;j<=3;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
