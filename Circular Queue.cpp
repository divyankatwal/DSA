#include <bits/stdc++.h>
using namespace std;

struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
};

void enqueue(struct Queue *q,int x){
    if((q->rear+1)%q->size==q->front) cout<<"Full";
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    } 
}

int dequeue(struct Queue *q){
    int x=-1;
    if(q->rear==q->front) cout<<"Empty";
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    } 
    return x;
}

void Display(struct Queue q){
    int i=q.front+1;
    do{
    	cout<<q.Q[i]<<" "<<endl;
    	i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
}

int main() {
	// your code goes here
	struct Queue q;
	cin>>q.size;
	q.Q=new int(q.size);
	q.front=q.rear=0;

	enqueue(&q,1);
	enqueue(&q,2);
	enqueue(&q,3);
	enqueue(&q,4);
	enqueue(&q,5);
	
	Display(q);
	
	dequeue(&q);
	dequeue(&q);
	
	cout<<"\n\n";
	Display(q);
	
	enqueue(&q,6);
	enqueue(&q,7);
	cout<<"\n\n";
	Display(q);

}
