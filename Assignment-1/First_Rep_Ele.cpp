// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
        int i,max=arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        int val[max+1],ind[max+1];
        for(i=0;i<=max;i++)
        {
            val[i] = 0;
            ind[i] = 0;
        }
        for(i=0;i<n;i++)
        {
            if(val[arr[i]] == 0)
            {
                val[arr[i]] = 1;
                ind[arr[i]] = i;
            }
            else
            {
                val[arr[i]] += 1;
            }
        }
        for(i=0;i<n;i++)
        {
            if(val[arr[i]] > 1)
            {
                return (ind[arr[i]] + 1);
            }
        }
        return -1;
    }
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}
  // } Driver Code Ends
