class Trienode{
    public:
    Trienode* child[2];
    bool isEnd;
    Trienode(){
        child[0]=child[1]=NULL;
        isEnd=false;
    }
};
// void traverse(Trienode *root, vector<vector<int>>&ans, int len,vector<int>temp){
//     if(root==NULL) return;
//     if(temp.size()==len){
//         ans.push_back(temp);
//         return;
//     }
//     for(int i=0;i<2;i++){
//         temp.push_back(i);
//         traverse(root->child[i],ans,len,temp);
//         temp.pop_back();
//     }
// }
class Solution {
  public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX], int row, int col) {
        // Your code here
        Trienode * root=new Trienode(); 
        vector<vector<int>>ans;
        for(int i=0;i<row;i++){
            Trienode *node=root;
            vector<int>temp;
            for(int j=0;j<col;j++){
                int idx=M[i][j];
                temp.push_back(idx);
                if(node->child[idx]==NULL){
                    Trienode * nn=new Trienode();
                    node->child[idx]=nn;
                }
                node=node->child[idx];
            }
            if(!node->isEnd){
                node->isEnd=true;
                ans.push_back(temp);
            }
        }
        // 
        // 
        // traverse(root,ans,col,temp);
        return ans;
    }
};