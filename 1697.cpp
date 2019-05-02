#include<iostream>
#include<queue>
using namespace std;


int ch2[100001]={0,};
queue<int> que;

void bfs(int S, int D){
	int here;
	//ch2[S]=1;
	queue<int> que;
	que.push(S);

  int i;
	while(!que.empty())
	{
    printf("%d\n", que.front());
		if(ch2[que.front()]==0){
		  	ch2[que.front()]=1;

		  	int here=que.front();
		  	que.pop();
        if(here == D) { printf("%d \n",here);  }
		  	if(ch2[i]==0){
				  que.push(here-1);
          que.push(here+1);
          que.push(here*2);

				}


		} else {
			que.pop();
		}

	}

}




int main(){
  int s,d;
  scanf("%d %d",&s,&d);
  bfs(s,d);
  return 0;
}
