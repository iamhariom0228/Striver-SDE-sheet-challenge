#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int m = matrix.size();
	int n = matrix[0].size();
	set<int> setRows;
	set<int> setColumn;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]==0){
				setRows.insert(i);
				setColumn.insert(j);
			}
		}
	}

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(setRows.count(i) || setColumn.count(j))
				matrix[i][j] = 0;
		}
	}
}