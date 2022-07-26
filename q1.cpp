#include <iostream>

using namespace std;
bool ismember(int arr[],int n,int size)
{
    for (int i = 0; i < size; i++) {
        if(arr[i]==n)
        {
            return true;
        }
    }
    return false;
}
void powerset(int arr[],int size)
{
    cout<<"\nPowerset of entered set is :\n";
    int n=1<<size;
    for (int i = 0; i < n; i++) {
        int j=0;
        int num=i;
        cout<<"[";
        while(num>0)
        {
            if(num&1)
            {
                cout<<arr[j];
                if(num>>1)
                {
                    cout<<",";
                }
            }
            j++;
            num=num>>1;
           
        }
        cout<<"]"<<endl;
    }
}
int main()
{
    int cardinal=0;
    cout<<"Enter the size of set:";
    int n;
    cin>>n;
    int arr[n];
    int x;
    cout<<"Enter the set elements:";
    for (int i = 0; i < n; i++) {
        cin>>x;
        bool flag=false;
        for (int j=cardinal-1; j>=0; j--) {
            if(x==arr[j])
            {
                flag=true;
                break;
            }
        }
        if(!flag)
        {
            arr[cardinal]=x;
            cardinal++;
        }
    }
    cout<<"Cardinality of set is : "<<cardinal<<endl;
    cout<<"Is member present : "<<ismember(arr,4,cardinal);
    powerset(arr,cardinal);
    return 0;
}