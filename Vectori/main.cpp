#include <iostream>

using namespace std;
//int n,m,i,k,x[100],y[100],j,z[100],u,a= 10,r = 0;


void exercitiul_1()
{
    int n,x[10],k,i;
    cout << "n =";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<"k=";cin>>k;
    if(k>n){
        cout<<"Pozitie invalida!\nLungimea vectorului = "<<n;
    }
    else
    {
        for(i=k;i<n;i++)
        {
            x[i]=x[i+1];
        }
        n--;
        for(i=1;i<=n;i++)
        {
            cout<<x[i]<<" ";
        }
    }
}

void exercitiul_2()
{
    int n,x[10],i;
    cout << "n=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    for(i=1;i<=n;i++)
    {
        if(x[i]%2 == 0)
        {
            cout<<x[i]<<" ";
        }
    }
}


void exercitiul_3()
{
    int n,x[10],i;
    cout << "n =";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<"nr de pe indice par:"<<endl;
    for(i=1;i<=n;i++)
    {
        if(i%2 == 0)
        {
            cout<<x[i]<<" ";
        }
    }
}

void exercitiul_4()
{
    int m,n,i,x[10];
    cout<<"n="; cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    m=x[1];
    for(i=2;i<=n;i++)
    {
        if(x[i]<m)
        {
            m=x[i];
        }
    }
    cout<<"Minimul este: "<<m;

}

void exercitiul_5()
{
    int n,x[10],i,k,a;
    cout << "n=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }
    cout<<"k=";cin>>k;
    cout<<"Numar=";cin>>a;
    if(k>n){
        cout<<"Pozitie invalida!\nLungimea vectorului="<<n;
    }
    else
    {
        n++;
        for(i=n;i>k;i--)
        {
            x[i]=x[i-1];
        }
        x[k]=a;
        for(i=1;i<=n;i++)
        {
            cout<<x[i]<<" ";
        }
    }

}

void exercitiul_6()
{
    int b[100] = {0};
    int n,x[10],i;
    cout<<"n =";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]:";
        cin>>x[i];
    }

    for(i=1;i<=n;i++)
    {
        b[x[i]]++;
    }

    for(i=1;i<10;i++)
    {
        cout<<b[i]<<" ";
    }
}

void exercitiul_7()
{

    int b[100]={0},s = 0;
    int k,j;
    int n,x[10],i;


    cout<<"n=";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]:";
        cin>>x[i];
    }
    for(i=1;i<=n;i++)
    {
        k = 1;
        for(j=0;j<=s;j++)
        {
            if(x[i] == b[j]) { k = 0; }
        }

        if(k == 1)
        {
            b[s+1] = x[i];
            s++;
        }
    }
    for(i=1;i<=s;i++)
    {
        cout<<b[i]<<" ";
    }

}

void exercitiul_8()
{
    //-nu merge-
    int n,x[10],i,j,ok;

    cout << "n =";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    ok = 1;

    for(i=0;i<n;i++)
    {
        for(j=n;j>=n;j--)
        {
            if(x[i] == x[j])
            {

            }else {ok = 0;}
        }
    }

    if(ok == 1)
    {
        cout<<"E palindrom";
    }else if (ok == 0) cout<<"Nu e 2";

}

void exercitiul_9()
{
    int n,m,i,x[100],ok;
    cout << "n =";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    cout << "m =";
    cin>>m;
    for(i=1;i<=m;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    ok = 1;

    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i]==x[j] && n == m)
            {
            }else { ok = 0; }
        }
    }

    if(ok == 1)
    {
        cout<<"Sunt la fel";
    }
    else if(n != m)
    {
        cout<<"Nu sunt la fel 1";
    }
    else if(ok == 0) cout<<"Nu sunt la fel 2";

}

int main()
{
    //Nu am facut exercitiul 10,11,12
    //Exercitiul 8 nu merge bine...
    //exercitiul_1();
    //exercitiul_2();
    //exercitiul_3();
    //exercitiul_4();
    //exercitiul_5();
    //exercitiul_6();
    //exercitiul_7();
    //exercitiul_8();
    //exercitiul_9();

    return 0;
}
