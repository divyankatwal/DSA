#include <bits/stdc++.h>
using namespace std;

void insert(int A[],int n){
    int temp,i=n;
    temp=A[n];
    while(i>1 && temp>A[i/2]){
        A[i]=A[i/2];
        i=i/2;
    }
    A[i]=temp;
}

int Delete(int A[],int n){
    int x,i,j,val;
    val=A[1];
    x=A[n];
    A[1]=A[n];
    i=1;
    j=2*i;
    while(j<n-1){
        if(A[j+1]>A[j]){
            j+=1;
        }
        if(A[i]<A[j]){
            swap(A[i],A[j]);
            i=j;
            j=2*j;
        }
        else break;
    }
    A[n]=val;
    return val;
}

void createHeap(){
    int A[]={0,10,20,30,25,5,40,35};
    for(int i=2;i<=7;i++){
        insert(A,i);
    }
    for(int i=1;i<=7;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl<<Delete(A,7)<<endl;
    
    for(int i=1;i<=7;i++){
        cout<<A[i]<<" ";
    }
}

int main() {
	createHeap();

}
