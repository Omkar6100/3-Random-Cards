#include <iostream>
#include<ctime>
//#include<string>
using namespace std;

int select(int C,int C2, int C3);
int choose(int C,int C2, int C3);

int main()
{
	//Randomly select 1 card,
	//Choose one card at random again
	//Push out the one out of remaining two that is not the one
	//Record the number of times Choosen was correct
	//find percentage it was and it wasn't
	
	int card1 = 3, card2 = 7 , card3 = 10;
	int selected = select(card1,card2,card3);
	//cout<<selected;
	int choosen = choose(card1,card2,card3);
	
	int deleted = selected+ choosen;
	switch(deleted)
	{
		case 17 : deleted = card1; break;
		case 10 : deleted =  card3; break;
		case 13 : deleted =  card2;break;
		case 20: deleted =  card1; break;
		case 14 : deleted = card1;break;
		case 6 : deleted = card2;break;
	}
	
	int right;
	
	if(selected = choosen)
		
	
	
return 0;
}

int select(int C,int C2, int C3)
{
	srand(time(0));
	int x = (rand() %3)+1;
	switch(x)
	{
	case 1 : return C; break;
	case 2 : return C2; break;
	case 3 : return C3; break;
	}
}
int choose(int C,int C2, int C3)
{
	srand(time(0));
	int x = (rand()+3)+1;
	switch(x)
	{
		case 1 : return C; break;
		case 2 : return C2; break;
		case 3 : return C3; break;
	}
}
