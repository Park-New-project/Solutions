#include <iostream>
#include <queue>
using namespace std;
int maze[102][102]={0,};
int path[102][102]={0,};
int vi[4]={0,0,-1,1}, vj[4]={-1,1,0,0};
int N, M;
int main(){
    cin.tie();
    cin>>N>>M;
    for(int i=0; i<N; i++){
        string str;
        cin>>str;
        for(int j=0; j<M; j++){
            if(str[j]=='1'){
                maze[i+1][j+1]=1;
            }
        }
    }
    path[1][1]=1;
    queue<pair<int,int>> q;
    maze[1][1]=0;
    q.push(make_pair(1,1));
    pair<int, int> frt;
    int i, j;
    while(!q.empty()){
        frt=q.front();
        i=frt.first, j=frt.second;
        q.pop();
        for(int m=0; m<4; m++){
            int ni=i+vi[m], nj=j+vj[m];
            if(maze[ni][nj]==1){
                path[ni][nj]=path[i][j]+1;
                maze[ni][nj]=0;
                q.push(make_pair(ni, nj));
            }
        }
    }
    cout<<path[N][M];
    return 0;
}