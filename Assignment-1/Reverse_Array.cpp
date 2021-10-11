#include<iostream>
using namespace std;
int main()
 {
	int t,n,i;
	cin>>t;
	if(t >= 1 && t <= 100)
	{
	    while(t != 0)
	    {
	        cin>>n;
	        if(n >= 1 && n <= 100)
	        {
	            int arr[n];
	            for(i=0;i<n;i++)
	            {
	                cin>>arr[i];
	            }
	            for(i=n-1;i>=0;i--)
	            {
	                cout<<arr[i]<<" ";
	            }
	            cout<<endl;
	        }
	        t--;
	    }
	}
	return 0;
}
