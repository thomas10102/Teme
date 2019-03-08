#include <iostream>

using namespace std;

void exercitiul_1()
{
   int a, b, x[10][10],nr = 0,s = 0,media = 0;

   cout<<"NR Linii :";
   cin>>a;

   cout<<"NR Coloane :";
   cin>>b;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<x[i][j]<<" ";
            nr++;
            s = s + x[i][j];
        }
        cout<<endl;
    }

    media =  s/nr;

    cout<<"Media aritmetica este (CAZ 1) : "<<media<<endl;

    cout<<"Media aritmetica este (CAZ 2) : "<<s/(a*b);

}


void exercitiul_2()
{
   int a, b, x[10][10],s=0;

   cout<<"NR Linii :";
   cin>>a;

   cout<<"NR Coloane :";
   cin>>b;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=b;i++)
    {
        s = s + x[i][i];
    }

    cout<<"Suma = "<<s;

}



void exercitiul_3()
{
   int a, b, x[10][10],p = 1;

   cout<<"NR Linii :";
   cin>>a;

   cout<<"NR Coloane :";
   cin>>b;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    int i =1;
    int j = a;
    while(a >= 1){
        p = p* x[i][j];
        i++;
        j--;
        a--;
    }
    cout<<"Produs = "<<p;

}

void exercitiul_4()
{
   int a, b, x[10][10],s=0;

   cout<<"NR Linii :";
   cin>>a;

   cout<<"NR Coloane :";
   cin>>b;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        s = 0;
        for(int j=1;j<=b;j++)
        {
            s = s + x[i][j];
            cout<<x[i][j]<<" ";
        }
        cout<<"| S ="<<s;
        cout<<endl;
    }

}


void exercitiul_5()
{
    int a, b, x[10][10],s;

    cout<<"NR Linii :";
    cin>>a;

    cout<<"NR Coloane :";
    cin>>b;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=b;i++)
    {
        s = 0;
        for(int j=1;j<=a;j++)
        {
            s = s + x[j][i];
            cout<<x[i][j]<<" ";

        }
        cout<<"Suma coloanei "<<i<<" este "<<s;
        cout<<endl;
    }
}

void exercitiul_6()
{
   int a, b, x[10][10];

   cout<<"NR Linii :";
   cin>>a;

   cout<<"NR Coloane :";
   cin>>b;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Transpusa"<<endl;

    for(int i=1;i<=b;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<x[j][i]<<" ";
        }
        cout<<endl;
    }

}

void exercitiul_7()
{
    int a, b,c,d,y[10][10],x[10][10],z[10][10];


    cout<<"NR Linii :";
    cin>>a;

    cout<<"NR Coloane :";
    cin>>b;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrice 2:"<<endl;

    cout<<"NR Linii matrice 2 :";
    cin>>c;

    cout<<"NR Coloane matrice 2:";
    cin>>d;

    for(int i=1;i<=c;i++)
    {
        for(int j=1;j<=d;j++)
        {
            cout<<"y["<<i<<"]["<<j<<"]:";
            cin>>y[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=c;i++)
    {
        for(int j=1;j<=d;j++)
        {
            cout<<y[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=a;i++)
    {
        for(int j = 1;j<=a;j++)
        {
            z[i][j] = x[i][j] + y[i][j];
        }
    }

    for(int i=1;i<=c;i++)
    {
        for(int j=1;j<=d;j++)
        {
            cout<<z[i][j]<<" ";

        }
        cout<<endl;
    }

}


void exercitiul_8()
{
    int a,y[10][10],x[10][10],z[10][10];


    cout<<"NR Linii :";
    cin>>a;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrice 2:"<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<"y["<<i<<"]["<<j<<"]:";
            cin>>y[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<y[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=a;i++)
    {
        for(int j = 1;j<=a;j++)
        {
            int sum = 0;
            for(int k = 1;k<=a;k++)
            {
                sum = sum + x[i][k]*y[k][j];
            }
            z[i][j] = sum;
        }

    }


    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<z[i][j]<<" ";

        }
        cout<<endl;
    }

}


void exercitiul_9()
{
   int a, x[10][10],s = 0;

   cout<<"NR Linii :";
   cin>>a;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i < j)
            {
                cout<<x[i][j]<<" ";
                s = s + x[i][j];

            }else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"s= "<<s;

}

void exercitiul_10()
{
   int a, x[10][10],s = 0;

   cout<<"NR Linii :";
   cin>>a;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i > j)
            {
                cout<<x[i][j]<<" ";
                s = s + x[i][j];

            }else cout<<"  ";
        }
        cout<<endl;
    }
    cout<<"s= "<<s;

}


void exercitiul_11()
{
   int a, x[10][10],nrp=0,nrn=0,nrnu=0;

   cout<<"NR Linii :";
   cin>>a;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<x[i][j]<<" ";
            if(x[i][j] > 0) {nrp++;}
            else if(x[i][j] < 0) {nrn++;}
            else{nrnu++;}

        }
        cout<<endl;
    }


    cout<<"Numere pozitine "<<nrp<<endl;
    cout<<"Nr neg "<<nrn<<endl;
    cout<<"Nr nule "<<nrnu;
}

void exercitiul_12()
{
    int a, x[10][10];

   cout<<"NR Linii :";
   cin>>a;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<"x["<<i<<"]["<<j<<"]:";
            cin>>x[i][j];
        }
    }

    cout<<endl;

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a;j++)
        {
            if(i != a-1 && j != a-1  )
            {

                cout<<x[i][j]<<" ";
            }
        }
        if(i != a-1){
        cout<<endl;
        }

    }

}
int main()
{
    //exercitiul_1();
    //exercitiul_2();
    //exercitiul_3();
    //exercitiul_4();
    //exercitiul_5();
    //exercitiul_6();
    //exercitiul_7();
    //exercitiul_8();
    //exercitiul_9();
    //exercitiul_10();
    //exercitiul_11();
    //exercitiul_12();

    return 0;
}


