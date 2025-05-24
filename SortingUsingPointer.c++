#include<iostream>
#include<stdlib.h>
using namespace std;
void sorting(int *, int);
void display(int *, int);
int main()
{
    int *ptr, n, i;
    cout<<"Enter how many numbers:"<<endl;
    cin >> n;
    ptr=(int*)malloc(n*sizeof(int));//or = new int[n]
    for ( i = 0; i < n; i++)
    {
        cout<<"value at address" << ptr << "=";
        cin >> *(ptr+i);//cin is made for value instead of address
    }
    cout<< "Array before sorting:"<<endl;
        display(ptr,n);
        sorting(ptr,n);
        cout<< "Array after sorting:"<<endl;
        display(ptr,n);
}
void sorting(int *p,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(*(p+i)>*(p+j))
            {
                int x = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = x;
            }
        }
        
    }
    
}
void display(int *p,int n)
{
     for (int i = 0; i < n; i++)
    {
        cout << *(p+i) << " " << endl;
    }
}