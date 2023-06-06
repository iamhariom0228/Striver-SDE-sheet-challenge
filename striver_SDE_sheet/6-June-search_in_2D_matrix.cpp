bool searchMatrix(vector<vector<int>>& mat, int target) {
    int m = mat.size();
    int n = mat[0].size();
    for(int i=0;i<m;i++){
        int low = 0, high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(mat[i][mid]==target) return true;
            else if(mat[i][mid] < target) low = mid+1;
            else high = mid-1;
        }
    }
    return false;
}