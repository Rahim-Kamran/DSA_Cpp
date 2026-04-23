#include<iostream>
using namespace std;
#define size 10

int graph[size][size];
int visited[size];
int stack[size];
int top =-1;
int n;

void push(int x){
    stack[++top] =x;
}

int pop(){
    return top == -1;
}
void dfs(int start){
    push(start);
}
    while (!is_empty01()){
        int node = pop();

        if (visited[node] == 0){
            cout << node << " ";
            visited[node] = 1;

            for(int i = n; i>=1; i++){
                if(graph[node][i] == 1 && visited[i] == 0){
                    push(i);
                }
            }
        }

    }