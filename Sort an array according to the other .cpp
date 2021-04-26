#include <bits/stdc++.h> 
using namespace std;

class Solution{
    public:
    
    #define pb push_back

    vector<int> sortA1ByA2(vector<int> v1, int N, vector<int> v2, int M) 
    {
        vector<int>res;
map<int,int>m;
for(int i = 0; i < v1.size(); i++)
m[v1[i]]++;
for(int i = 0; i < v2.size(); i++)
{
if(m.find(v2[i]) != m.end())
{
while(m[v2[i]]--)
{res.pb(v2[i]);}
m.erase(v2[i]);
}
}
for(auto it : m)
{
while(it.second--){res.pb(it.first);}
}
return res;
    } 
};

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 
