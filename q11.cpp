#include<iostream>
using namespace std;

int main(){
    int n;
	cout<<"Enter number of elements you wish to add :";
	cin>>n;
    int arr[n];
	cout<<"Enter elements separated by space : ";
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	
	int count = 0;
    cout << endl
		 << "Original Array : ";
	cout << "{ ";
	for (int x = 0; x < n; x++)
	{
		if (x != n-1)
		{
			cout << arr[x] << " , ";
		}
		else
		{
			cout << arr[x];
		}
	}
	cout << " }" << endl;
    int key;
    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        int j = i - 1;
        while (arr[j] > key && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;				
		    count++; 		
        }
        arr[j+1] = key;
		cout << endl
			 << "Array after "
			 << " pass " << i << " : ";
		cout << "{ ";
		for (int x = 0; x < n; x++)
		{
			if (x != n-1)
			{
				cout << arr[x] << " , ";
			}
			else
			{
				cout << arr[x];
			}
		}
		cout << " }";
    }
    cout << endl
		 << "Sorted Array : ";
	cout << "{ ";
	for (int x = 0; x < n; x++)
	{
		if (x != n-1)
		{
			cout << arr[x] << " , ";
		}
		else
		{
			cout << arr[x];
		}
	}
<
	cout << " }" << endl;
	if(count == 0){
	cout << "Number of comparisons is " << n << endl;
	} else
	{
		cout << "Number of comparisons is " << count << endl;
	}
    return 0;
}


gsutil mb gs://qwiklabs-gcp-00-d69b30ee2f5d
