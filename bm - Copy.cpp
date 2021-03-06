#include<bits/stdc++.h>
using namespace std;
class Solution
{   
    public:
    
    void booleanMatrix(vector<vector<int> > &matrix)
    {
         
        int R = matrix.size();
int C = matrix[0].size();

vector<int> row(R,0);
vector<int> col(C,0);

for(int i = 0; i < R; i++){
for(int j = 0; j < C; j++){
if(matrix[i][j] == 1){
row[i] = col[j] = 1;
}
}
}

for(int i = 0; i < R; i++){
for(int j = 0; j < C; j++){
if(row[i] || col[j]){
matrix[i][j] = 1;
}
}
}
    }
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int row,col;
		cin>>row>>col;
		vector<vector<int> > matrix(row);
		for(int i=0;i<row;i++)
		{
			matrix[i].assign(col,0);
			for(int j=0;j<col;j++)
			{
				cin>>matrix[i][j];
			}
		}
		Solution ob;
		ob.booleanMatrix(matrix);
		for(int i=0;i<row;++i)
		{
			for(int j=0;j<col;++j)
			{
				cout<<matrix[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
	
}
