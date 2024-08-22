#include <iostream>

using namespace std;
char squarebox[9] = {'0','1','2','3','4','5','6','7','8'};
int cwin()
{
		if (squarebox[0] == squarebox [1]  && squarebox[1] == squarebox[2] )
		{	if ( squarebox [0] == 'X' )			
			return 1;
			else
			return 2; 
		}		
		else
		if (squarebox[3] == squarebox [4]  && squarebox[4] == squarebox[5] )
			{	if ( squarebox [3] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (squarebox[6] == squarebox [7]  && squarebox[7] == squarebox[8] )
			{	if ( squarebox [6] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (squarebox[0] == squarebox [3]  && squarebox[3] == squarebox[6] )
			{	if ( squarebox [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
		else
		if (squarebox[1] == squarebox [4]  && squarebox[4] == squarebox[7] )
			{	if ( squarebox [1] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (squarebox[2] == squarebox [5]  && squarebox[5] == squarebox[8] )
			{	if ( squarebox [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
else
		if (squarebox[0] == squarebox [4]  && squarebox[4] == squarebox[8] )
			{	if ( squarebox [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (squarebox[2] == squarebox [4]  && squarebox[4] == squarebox[6] )
			{	if ( squarebox [2] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else
		if (squarebox[0] == squarebox[3]  && squarebox[3] == squarebox[6] )
			{	if ( squarebox [0] == 'X' )			
			return 1;
			else
			return 2; 
		}
	else 
		return 0;
}

void mark(int player, int box)
{
	if (player == 1 )
	{

		squarebox[box] = 'X';
	}
	else
		squarebox[box] = 'Y';
}

void display()
{
		for(int i=0;i<9;i++)
		{
			cout<< squarebox[i] << "\t" ;
				if (i == 2 || i== 5 || i==8)
					cout<<"\n"; 
}
}
int main()
{
		int player1 = 1, player2 =2 ;
		
		int box, result = 0, flag = 0;
		
		for(int i=1;i<5;i++)
	{

		cout<< "\n Player " << player1 << "Enter the Box";
		cin >> box;
		mark( player1, box);
		display();

		result =cwin();	
		if (result == 1 )
		{	cout<<"\n Congratualtions! player " << player1 << " has Won ";
			flag = 1;			
			break;
		}
		else
		if (result == 2 )
		{	cout<<"\n Congratualtions! player " << player2 << " has Won ";
			flag = 1;			
			break;
		}

		cout<< "\n Player " << player2 << "Enter the Box";
		cin >> box;
		mark ( player2, box);
		display();
		
		result =cwin();	
		if (result == 1 )
		{	cout<<"\n Congratualtions! player " << player1 << " has Won ";
			flag = 1;
			break;
		}
		else
		if (result == 2 )
		{	cout<<"\n Congratualtions! player " << player2 << " has Won ";
			flag = 1;
			break;
		}
}
		if (flag == 0 )
		cout<<" \n  The game is a draw ";
	
	return 0;
}