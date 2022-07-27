/* 15. Write a Program to store a function (polynomial/exponential), and then evaluate the
polynomial. (For example store f(x) = 4n3 + 2n + 9 in an array and for a given value
of n, say n = 5, evaluate (i.e. compute the value of f(5)). */ 

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int coef[20];
	int deg;
	int x;
	int sum = 1;
    int ch;
    do
    {
        cout<<endl<<"Enter the degree of the polynomial: ";
        cin>>deg;
        for(int i = deg; i >= 0; i--)
        {
            cout<<endl<<"Enter the coefficient of degree "<<i<<": ";
            cin>>coef[i];
        }
        cout<<endl<<"The required polynomial is:  f(x) = ";
        cout<<coef[deg]<<"x^"<<deg;
        for(int i = deg-1; i > 0; i--)
        {
            if(coef[i]>0)
                cout<<"+"<<coef[i]<<"x^"<<i;
            else
                cout<<coef[i]<<"x^"<<i;
        }
        cout<<"+"<<coef[0]<<"x^"<<0;
        cout<<endl<<"Enter the value of x : ";
        cin>>x;
        for(int i = deg; i >= 0; i--)
        {
            sum+=(coef[i]*pow(x,i));
        }
        cout<<endl<<"The solution of this polynomial for x = "<<x<<" is: f("<<x<<") = "<<sum;
		cout<<endl<<"Press 1 to continue or 0 to quit ";
			cin>>ch;
	}
	while(ch == 1);
	return 0;
}