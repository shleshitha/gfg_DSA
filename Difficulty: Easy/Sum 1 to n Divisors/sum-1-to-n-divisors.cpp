//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int divisors(int n){
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(n%i==0)
            cnt+=i;
        }
        return cnt;
    }
    int sumOfDivisors(int n) {
        int ans=1;
        for(int i=2;i<=n;i++){
            ans+=divisors(i);
            // cout<<ans<<endl;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends