#include<iostream>
#define Size 100
using namespace std;
void sorting(int[],int);//prototype
void display(int[], int);
int main(void)
{
    int i, n, num[Size];
    cout<<"Enter how many numbers?"<<endl;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cout << "num[" << i <<"]";
        cin >> num[i];
    }
    cout<<"Array before Sorting:"<<endl;
    display(num,n);
    cout<<"Array after Sorting:"<<endl;
    sorting(num,n);
}
void sorting(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i]>a[j])
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
            
        }
        
    }//end of i loop
    display(a,n);
}
void display(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
    }
}