#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int map[1001][1001] = {0, };  // 1: 연결됨   0: 연결안됨
int check[1001] = {0,};

void dfs(int start, int num){
  stack<int> s;
  s.push(start);

  int here;
  while(!s.empty()){
    printf("%d ", s.top());
    here = s.top();
    s.pop();
    for(int i = num; i >=1;i--){
      if(map[here][i] == 1 && !(check[i] != 0)){
        check[i] = 1;
        s.push(i);
      }

    }
  }


    /*for(int i = num; i <=1;i--){
      if(map[here][i] == 1 && check[i] == 0){
        s.push(i);
      }
    }*/



}


void bfs(){}

int main(){
  int s,n,v;
  int a,b;
  scanf("%d %d %d ",&n,&v,&s);
  for(int i = 0; i <n;i++){
    scanf("%d %d",&a,&b);
    map[a][b] = map[b][a] = 1;  //연결됨 : 1
  }
dfs(s,n);
return 0;
}
