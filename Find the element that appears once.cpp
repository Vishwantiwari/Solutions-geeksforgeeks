#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
	int search(int a[], int N){
	    int mid,begin=0,end=N;

while(begin<=end)
{
mid=begin+(end-begin)/2;
if(a[mid]==a[mid+1] && mid%2==0 || a[mid]==a[mid-1] && mid%2!=0)
begin=mid+1;
else
end=mid-1;
}
return a[begin];
}
	    
};

int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}
  
