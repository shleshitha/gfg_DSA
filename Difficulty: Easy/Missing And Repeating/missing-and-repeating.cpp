//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        vector<int>temp(arr.size(),0);
        for(int i=0;i<arr.size();i++)
        temp[arr[i]-1]++;
        int a=0,b=0;
        for(int i=0;i<arr.size()&&(a==0||b==0);i++){
            if(temp[i]==2)
            a=i+1;
            else if(temp[i]==0)
            b=i+1;
        }
        return {a,b};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends