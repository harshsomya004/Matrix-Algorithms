#include <bits/stdc++.h> // header file includes every Standard library
#include<vector>

using namespace std;

void printBoundary(vector<vector<int> > arr, int N, int M)
{
  vector<int>temp;
  for (int i = 0; i < M; i++)
  {
    temp.push_back(arr[0][i]);
  }
  for (int i = 1; i < N; i++)
  {
    temp.push_back(arr[i][M - 1]);
  }
  if(N > 1)
  {
    for (int i = M - 2; i >= 0; i--)
    {
      temp.push_back(arr[N - 1][i]);
    }
  }
  if (M > 1) {
    for (int i = N - 2; i > 0; i--)
    {
      temp.push_back(arr[i][0]);
    }
  }
  for (auto i: temp)
  {
    cout <<i<<" ";
  }
}

int main()
{
  int T,n,m;
  int num;
  cin>>T;
  while(T--)
  {
    vector<vector<int>>res;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {   
      vector<int>temp;
      res.push_back(temp);
      for(int j=0;j<m;j++)
      {
        cin>>num;
        res[i].push_back(num);
      }
    }
    int N= res.size();
    int M= res[0].size();
    printBoundary(res,N,M);
    cout<<endl;
  }
  return 0;
}
/* test cases
2 3 3 1 2 3 4 5 6 7 8 9 4 4  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
 
*/
