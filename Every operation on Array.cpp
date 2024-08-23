#include<iostream>
using namespace std;

struct Array
{
	int A[15];
	int size;
	int length;
};

void Append(struct Array *arr,int x)
{
	if(arr->length<arr->size)
	arr->A[arr->length++]=x;
}

void Insert(struct Array *arr,int index, int x)
{
	if(index>=0 && index<=arr->length)
	{
		for(int i=arr->length;i>index;i--)
			arr->A[i]=arr->A[i-1];
		    arr->length++;
		    arr->A[index]=x;
	}
}

void Delete(struct Array *arr,int index)
{
	if(index>=0 && index<=arr->length)
	{
		for(int i=index;i<arr->length-1;i++)
		    arr->A[i]=arr->A[i+1];
		    arr->length--;
		    
	}
}

int Search(struct Array *arr,int x)
{
	for(int i=0;i<arr->length;i++)
	{
		if(x==arr->A[i])
		return i;
    }	
	return -1;
}

int BinSearch(struct Array arr, int x)
{
	int l=0;
	int h=arr.length-1;
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(arr.A[mid]==x)
		return mid;
		else if(arr.A[mid]>x)
		 h=mid-1;
		else
		 l=mid+1;
	}return -1;
}

int Get(struct Array arr,int index)
{
	if(index>=0 && index<arr.length)
	return arr.A[index];
}

int Set(struct Array *arr, int index,int x)
{
	if(index>=0 && index<arr->length)
	return arr->A[index]=x;
}

int Max(struct Array arr)
{
	int max;
	max=arr.A[0];
	for(int i=1;i<arr.length;i++)
	{
		if(arr.A[i]>max)
		max=arr.A[i];
	}
	return max;
}

float Avg(struct Array arr)
{
	int sum=0,i;
	for(i=0;i<arr.length;i++)
	{
		sum=sum+arr.A[i];
	}
	return (float)sum/arr.length;
}

void Rev(struct Array *arr)
{
	int i,j,temp;
	for(i=0,j=arr->length-1;i<j;i++,j--)
	{
	 temp=arr->A[i];
	 arr->A[i]=arr->A[j];
	 arr->A[j]=temp;
    }
}

void Shift(struct Array *arr)
{
	for(int i=0;i<arr->length-1;i++)
	{
		arr->A[i]=arr->A[i+1];
	}
}

int Sort(struct Array arr)
{
	int i=0;
	
		if(arr.A[i]>arr.A[i+1])
		return 0;
		else
		return -1;
	
}

void Add(struct Array *arr, int x)
{
	int i=arr->length-1;
	while(arr->A[i]>x)
	{
		arr->A[i+1]=arr->A[i];
		i--;
	 } arr->A[i+1]=x;
	 arr->length++;
}

struct Array* Union(struct Array *arr1,struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;
	struct Array *arr3=new struct Array;
	
	while(i<arr1->length && j<arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
		arr3->A[k++]=arr1->A[i++];
		else if(arr2->A[j]<arr1->A[i])
		arr3->A[k++]=arr2->A[j++];
		else
		{
		arr3->A[k++]=arr1->A[i++];
		j++;
	    }
	}
	for(;i<arr1->length;i++)
	arr3->A[k++]=arr1->A[i];
	for(;j<arr2->length;j++)
	arr3->A[k++]=arr2->A[j];
	
	arr3->length=k;
	arr3->size=15;
	
	return arr3;
}

struct Array* Intersection(struct Array *arr1,struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;
	struct Array *arr3=new struct Array;
	
	while(i<arr1->length && j<arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
		i++;
		else if(arr2->A[j]<arr1->A[i])
		j++;
		else if(arr1->A[i]==arr2->A[j])
		{
		arr3->A[k++]=arr1->A[i++];
		j++;
	    }
	}
	
	arr3->length=k;
	arr3->size=15;
	
	return arr3;
}

struct Array* Difference(struct Array *arr1,struct Array *arr2)
{
	int i,j,k;
	i=j=k=0;
	struct Array *arr3=new struct Array;
	
	while(i<arr1->length && j<arr2->length)
	{
		if(arr1->A[i]<arr2->A[j])
		arr3->A[k++]=arr1->A[i++];
		else if(arr2->A[j]<arr1->A[i])
		arr3->A[k++]=arr2->A[j++];
		else if(arr1->A[i]==arr2->A[j])
		{
		i++;
		j++;
	    }
	}
	for(;i<arr1->length;i++)
	arr3->A[k++]=arr1->A[i];
	for(;j<arr2->length;j++)
	arr3->A[k++]=arr2->A[j];
	
	arr3->length=k;
	arr3->size=15;
	
	return arr3;
}

void Display(struct Array arr)
{
	for(int i=0;i<arr.length;i++)
	cout<<arr.A[i]<<" ";
    cout<<"\nLength : "<<arr.length;
}

int main()
{
	struct Array arr1={{2,3,4,6,8,9,10,12},10,8};
	struct Array arr2={{1,2,3,5,6,7,9,12},10,8};
    struct Array *arr3;
    cout<<"Array A: ";
    Display(arr1);
    cout<<endl<<"\nArray B: ";
    Display(arr2);
    
    int choice;
    int x,index;
    do
    {
    cout<<"\n\nMenu\n";
    cout<<"1.Insert\n";
    cout<<"2.Delete\n";
    cout<<"3.Search\n";
    cout<<"4.Maximum Value\n";
    cout<<"5.Intersection\n";
    cout<<"6.Union\n";
    cout<<"7.Differnce\n";
    cout<<"8.Exit\n\n";
    cout<<"Enter you choice (1-8): ";
    cin>>choice;
    
    switch(choice)
    {
        case 1: cout<<"Enter an element to add in an Array A : ";
            cin>>x;
            Add(&arr1,x);
            Display(arr1);
            break;
        case 2: cout<<"Enter index of an Array A to be deleted : ";
            cin>>index;
            Delete(&arr1,index);
            Display(arr1);
            break;
        case 3:cout<<"Enter element to search in Array A: ";
            cin>>x;
            cout<<"Index of Element "<<x<<" is : "<<Search(&arr1,x);
            break;
        case 4:cout<<"Maximum Value in Array A is : "<<Max(arr1);
            break;
        case 5:arr3=Intersection(&arr1,&arr2);
            cout<<"Intersection of Array A & B is : ";
			Display(*arr3);
            break;
        case 6:arr3=Union(&arr1,&arr2);
        cout<<"Union of Array A & B is : ";
            Display(*arr3);
            break;
		case 7:arr3=Difference(&arr1,&arr2);
		cout<<"Difference of Array A & B is : ";
            Display(*arr3);
            break;
			
			delete[]arr3;	    
    }
    }while(choice<8);
    
	return 0;
}