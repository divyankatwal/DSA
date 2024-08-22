#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int guess,num,score=0;
	
	srand(time(NULL));
	 num=rand()%100+1;
	 cout<<"\n\t\t\tNUMBER GUESSING GAME"<<endl;
	 
	 while(guess!=num)
	 {
	 	cout<<"\nGuess a number b/w 1-100 : ";
	 	cin>>guess;
	 	
	 	if(guess>num)
	 	{
	 		cout<<endl<<"Your guess is larger than the no."<<endl;
		 }
		 else if(guess<num)
		 {
		 	cout<<endl<<"Your guess is smaller than the no."<<endl;
		 }
		 else if(guess==num)
		 {
		 	cout<<endl<<"Congratulations You won!!! "<<endl;
		 }
		 score++;
	 }
	 
	 cout<<"\n\aYou won in "<<score<<" tries";
	 return 0;
}