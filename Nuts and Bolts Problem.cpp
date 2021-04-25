#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
void swap(char * a, char * b){
char t = *a;
*a = *b;
*b = t;
}
int parition(char a[], int low, int high, char pivot){
int i = low;
for(int j = low; j < high;++j){
if(a[j] < pivot){
swap(a+i,a+j);
i++;
}
else if(a[j] == pivot){
swap(a+high,a+j);
j--;
}
}
swap(a+high,a+i);
return i;
}
void printArr(char a[], int low, int high){
for(int i = low; i <= high;++i){
printf("%d, ",a[i]);
}
printf("done.\n");
}
void quickMatch(char nuts[], char bolts[], int low,int high){
if(low < high){
int rnd_pivot = (low + rand()) % (high+1);
int nut_pivot_indx =
parition(nuts,low,high,bolts[rnd_pivot]);
parition(bolts,low,high,nuts[nut_pivot_indx]);
quickMatch(nuts,bolts,low,nut_pivot_indx-1);
quickMatch(nuts,bolts,nut_pivot_indx,high);
}
}
	void matchPairs(char nuts[], char bolts[], int n) {
	    srand(time(NULL));
quickMatch(nuts,bolts,0,n-1);
	}

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
