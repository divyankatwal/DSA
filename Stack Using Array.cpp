#include<iostream>
using namespace std;

struct stack{
	int size;
	int top;
	int *s;
};

void Display(struct stack st){
     for(int i=st.top;i>=0;i--)
      cout<<st.s[i]<<endl;	
}

void push(struct stack *st,int x){
	if(st->top==st->size-1)
	cout<<"Stack overflow"<<endl;
	else{
		st->top++;
		st->s[st->top]=x;
	}
}

void pop(struct stack *st){
	int x=-1;
	if(st->top==-1)
	cout<<"Stack is Empty"<<endl;
	else{
		x=st->s[st->top];
		st->top--;
	}
	cout<< x;
}

void peek(struct stack st,int pos){
	int x=-1;
	if((st.top-pos+1)<0)
	cout<<"Invalid Position";
	else{
		x=st.s[st.top-pos+1];
	}
	 cout<< x;
}

int main(){
	struct stack st;
	cout<<"Enter Size of Stack : ";
	cin>>st.size;
	st.s= new int [st.size];
	st.top=-1;
	
	push(&st,10);
	push(&st,15);
	push(&st,20);
	push(&st,25);
	push(&st,30);
	Display(st);
	cout<<"\n";
	pop(&st);
	cout<<"\n\n";
	Display(st);
	cout<<"\n";
	peek(st,3);
	return 0;
}