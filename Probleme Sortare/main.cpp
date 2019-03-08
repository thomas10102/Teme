#include <iostream>

using namespace std;

void exercitiul_1()
{
    int x[10],n,ok ,i,aux,k;

    cout<<"Dati n=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    cout<<"Dati k=";
    cin>>k;

    do
    {
       ok = 1;
       for(i =1;i<k;i++)
       {
           if(x[i]>x[i+1])
           {
               aux = x[i];
               x[i] = x[i+1];
               x[i+1] = aux;
               ok = 0;
           }
       }
       for(i = k+1;i<n;i++)
       {
           if(x[i]<x[i+1])
           {
               aux = x[i];
               x[i] = x[i+1];
               x[i+1] = aux;
               ok = 0;
           }
       }
    }while(!ok);


    for(i = 1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
}

void exercitiul_2()
{
    int x[10],n,ok ,i,aux;

    cout<<"Dati n=";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    do
    {
       ok = 1;
       for(i =1;i<n;i++)
       {
           if(x[i]>x[i+1])
           {
               aux = x[i];
               x[i] = x[i+1];
               x[i+1] = aux;
               ok = 0;
           }
       }
    }while(!ok);


    for(i = 1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
}

void exercitiul_3()
{
    int x[10],y[10],n,ok,l=1,i,j,aux,k=0;

    cout<<"Dati n=";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    for(i= 1;i<=n;i++)
    {
        ok = 1;
        for(j= 2;j<=x[i]/2;j++)
        {
            if(x[i]%j == 0)
                ok = 0;
        }
        if(ok == 1)
        {
            y[l] = x[i];
            l++;

            k = 1;
        }
    }
    do
    {
        ok = 1;
        for(i = 1;i<l-1;i++)
        {
            if(y[i]>y[i+1])
            {
                aux = y[i];
                y[i] = y[i+1];
                y[i+1] = aux;
                ok = 0;
            }
        }
    }while(!ok);

    for(i = 1;i<l;i++)
    {
        cout<<y[i]<<" ";
    }


    if(k == 0)
    {
    cout<<"nu sunt numere prime";
    }
}

void exercitiul_4()
{
    int n,x[10],y[10],d,i,aux,ok;

    cout<<"Dati n=";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    for(i=1;i<=n;i++)
    {
        d = 0;
        for(int k = 1;k<=x[i];k++)
        {
            if(x[i]%k == 0)
            {
                d++;
            }
        }
        y[i] = d;
    }

    do{
    ok = 1;
      for(i=1;i<n;i++)
      {
          if(y[i] > y[i+1])
          {
              aux = x[i];
              x[i] = x[i+1];
              x[i+1] = aux;
              aux = y[i];
              y[i] = y[i+1];
              y[i+1] = aux;
              ok = 0;
          }
      }

    }while(!ok);


    for(i = 1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    for(i = 1;i<=n;i++)
    {
        cout<<y[i]<<" ";
    }
}

void exercitiul_5()
{
    int n,x[10],i,vmax,vi,ok,aux;

    cout<<"Dati n=";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    vmax = x[1];
    vi = 1;
    for(i = 1;i<=n;i++)
    {
        if(x[i]>vmax)
        {
            vmax = x[i];
            vi = i;
        }
    }

    do{
        ok = 1;
        for(i = 1;i<vi;i++)
        {
            if(x[i] > x[i+1])
            {
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
                ok = 0;
            }
        }
        for(i = vi;i<n;i++)
        {
            if(x[i] < x[i+1])
            {
                aux = x[i];
                x[i] = x[i+1];
                x[i+1] = aux;
                ok = 0;
            }
        }

    }while(!ok);

    for(i = 1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }

}

void exercitiul_6()
{
    int n,x[10],i,vmax,vi,vj,vmin,ok,aux;

    cout<<"Dati n=";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    vmax = x[1];
    vmin = x[1];
    vi = 1;
    vj = 1;

    for(i = 1; i<=n;i++)
    {
        if(x[i]>vmax)
        {
            vmax = x[i];
            vi = i;
        }
        if(x[i]<vmin)
        {
            vmin = x[i];
            vj = i;

        }
    }

    if(vi<vj)
        {
            aux = vi;
            vi = vj;
            vj = aux;
        }

    do
    {
      ok = 1;
      for(i =vj+1;i<vi-1;i++)
      {
          if(x[i] > x[i+1])
          {
            aux = x[i];
            x[i] = x[i+1];
            x[i+1] =aux;
            ok = 0;
          }
      }

    }while(!ok);

    for(i =1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
}

void exercitiul_9()
{
    int n,x[10],y[10],ok,aux,i,s,c,u;

    cout<<"Dati n=";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"x["<<i<<"]=";
        cin>>x[i];
    }

    for(i = 1;i<=n;i++)
    {
        s = 0;
        c = x[i];
        while(c>0)
        {
            u = c%10;
            s = s+u;
            c = c/10;
        }
        y[i] = s;
    }


    do{
    ok = 1;
      for(i=1;i<n;i++)
      {
          if(y[i] > y[i+1])
          {
              aux = x[i];
              x[i] = x[i+1];
              x[i+1] = aux;
              aux = y[i];
              y[i] = y[i+1];
              y[i+1] = aux;
              ok = 0;
          }
      }

    }while(!ok);

       for(i = 1;i<=n;i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
    for(i = 1;i<=n;i++)
    {
        cout<<y[i]<<" ";
    }
}

int main()
{
    //Nu am facut exercitiul 7 si 8.
    //exercitiul_1();
    //exercitiul_2();
    //exercitiul_3();
    //exercitiul_4();
    //exercitiul_5();
    //exercitiul_6();
    //exercitiul_9();

    return 0;
}
