#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int guess (int,int);
int main()
{   
	int guess = 0,i=0;
	srand(time(NULL));
	int random = 1+rand()%10;
	while(guess != random)
	{	
		cout<<"Guess the number (1 to 10): ";
		cin>>guess;
		i++;
		if (guess < random) cout<<"The secret number is lower "<<"\n";
		else cout<<"The secret number is higher "<<"\n";
	}
	cout<<"Congratulations!"<<endl;
	cout<<"The secret number is "<<random<<endl;
	cout<<"You made 4 guesses "<<endl;
	system("pause");
	return 0;
}
int guess (int guess,int random)
{
	 if (guess > random) cout<<"The secret number is lower "<<"\n";
	 else cout<<"The secret number is higher "<<"\n";
	 return random;
}