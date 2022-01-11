#include <bits/stdc++.h> 
#include<vector>
using namespace std;

/*program to print matrix*/
void print_mat(vector<vector<int>> arr, int n)
{
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<n;j++)
        {
            cout <<arr[i][j]<<" ";   
        }  
        cout<< endl; 
    }
}

/*program to rotate the matrix by 90 degree*/
vector<vector<int>> rotate_mat(vector<vector<int>> arr, int n)
{
    vector<vector<int>> res = arr;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            res[j][n-1-i] = arr[i][j];
        }
    }
    return res;     
}

int main()
{ 
    int n,num ;
    vector<vector<int>> res;
    cout<<"enter order of square matrix";
    cin>> n;
    cout<<"enter elemets one by one";
    for(int i=0;i<n;i++)
    { 
        vector<int>temp;
        res.push_back(temp);
        for(int j=0;j<n;j++)
        {
            cin >>num;
            res[i].push_back(num);   
        }
    }
    
    auto mat90 = rotate_mat(res,n);
    print_mat(mat90,n);
    cout<<endl;
    auto mat180 = rotate_mat(mat90,n);
    print_mat(mat180,n);
    return 0;
}
/* test cases
Sample Input
2 3 4 7 6 

Sample Output
7 3 
6 4 

6 7 
4 3

Sample Input:
2
1 2
3 4

Sample Output:
3 1
4 2

4 3
2 1
*/
