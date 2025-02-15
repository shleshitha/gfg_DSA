//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        priority_queue<int>heap;
        set<int>s;
        for(int i=0;i<arr.size();i++)
        {
            if(s.find(arr[i])==s.end()){
                s.insert(arr[i]);
                heap.push(arr[i]);
            }
        }
        
        if(heap.size()<2)
        return -1;
        heap.pop();
        return heap.top();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends