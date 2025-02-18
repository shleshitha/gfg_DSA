//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here 
        int gcd = __gcd(a, b); // Inbuilt function to find GCD
        int lcm = (a / gcd) * b; // To prevent overflow
        return {lcm, gcd};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int A, B;

        cin >> A >> B;

        Solution ob;
        vector<int> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends