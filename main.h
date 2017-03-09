#include <iostream>
using namespace std;

int score=0;
int cumm_score=0;


double Print_Board(int A[])
{
	cout << "|      0       | |        "<< A[0] << "       |" << endl;
	cout << "|     1 2      | |       " << A[1] <<" "<< A[2] << "      |"<<  endl;
	cout << "|    3 4 5     | |      " << A[3] <<" "<< A[4]<<" " << A[5] <<"     |"<< endl;
	cout << "|   6 7 8 9    | |     " << A[6] <<" "<< A[7]<<" "<<A[8]<<" "<<A[9]<<"    |"<<endl;
	cout << "|10 11 12 13 14| |    " << A[10] << " "<<A[11]<<" "<<A[12]<<" "<<A[13]<<" "<<A[14]<<"   |"<<endl;
	return 0;
}


void Print_Current_Score()
{
	cout<<"This is your current score: "<<score<<endl;
}

void Print_Cumm_Score()
{
	cout<<"This is your total score: "<<cumm_score<<endl;
}

void game(int a[], int start, int end)
{
	if(a[start] == 1 && a[end] == 0)
	{
		
		switch(start)
		{
			case 0:
				if(end == 3 && a[1] == 1)
				{
					a[start] = 0;
					a[1] = 0;
					a[end] = 1;
					score++;
					cumm_score++;
					break;
				}else if(end == 5 && a[2] == 1)
				{
					a[start] = 0;
					a[2] = 0;	
					a[end] = 1;
					score++;
					cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			break;
			case 1:
				if(end == 6 && a[3] == 1)
				{
					a[start] = 0;
					a[3] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 8 && a[4] == 1)
				{
					a[start] = 0;
					a[4] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			break;
			case 2:
				if(end == 7 && a[4] == 1)
				{
					a[start] = 0;
					a[4] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 9 && a[5] == 1)
				{
					a[start] = 0;
					a[5] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			break;
			case 3:
				if(end == 0 && a[1] == 1)
				{
					a[start] = 0;
					a[1] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 5 && a[4] == 1)
				{
					a[start] = 0;
					a[4] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 10 && a[6] == 1)
				{
					a[start] = 0;
					a[6] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 4:
				if(end == 11 && a[7] == 1)
				{
					a[start] = 0;
					a[7] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 13 && a[8] == 1)
				{
					a[start] = 0;
					a[8] = 0;
					a[end] = 1;	
					score++;
cumm_score++;
					break;	
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 5:
				if(end == 0 && a[2] == 1)
				{
					a[start] = 0;
					a[2] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 3 && a[4] == 1)
				{
					a[start] = 0;
					a[4] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 14 && a[9] == 1)
				{
					a[start] = 0;
					a[9] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 6:
				if(end == 1 && a[3] == 1)
				{
					a[start] = 0;
					a[3] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 8 && a[7] == 1)
				{
					a[start] = 0;
					a[7] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 7:
				if(end == 2 && a[4] == 1)
				{
					a[start] = 0;
					a[4] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 9 && a[8] == 1)
				{
					a[start] = 0;
					a[8] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 8:
				if(end == 1 && a[4] == 1)
				{
					a[start] = 0;
					a[4] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 6 && a[7] == 1)
				{
					a[start] = 0;
					a[7] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 9:
				if(end == 2 && a[5] == 1)
				{
					a[start] = 0;
					a[5] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 7 && a[8] == 1)
				{
					a[start] = 0;
					a[8] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 10:
				if(end == 3 && a[6] == 1)
				{
					a[start] = 0;
					a[6] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 12 && a[11] == 1)
				{
					a[start] = 0;
					a[11] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 11:
				if(end == 4 && a[7] == 1)
				{
					a[start] = 0;
					a[7] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 13 && a[12] == 1)
				{
					a[start] = 0;
					a[12] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 12:
				if(end == 3 && a[7] == 1)
				{
					a[start] = 0;
					a[7] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 5 && a[8] == 1)
				{
					a[start] = 0;
					a[8] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 10 && a[11] == 1)
				{
					a[start] = 0;
					a[11] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 14 && a[13] == 1)
				{
					a[start] = 0;
					a[13] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 13:
				if(end == 11 && a[12] == 1)
				{
					a[start] = 0;
					a[12] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 4 && a[8] == 1)
				{
					a[start] = 0;
					a[8] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
			case 14:
				if(end == 12 && a[13] == 1)
				{
					a[start] = 0;
					a[13] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else if(end == 5 && a[9] == 1)
				{
					a[start] = 0;
					a[9] = 0;
					a[end] = 1;
					score++;
cumm_score++;
					break;
				}else
				{
					cout << "Invalid Move" << endl;
					break;
				}
		} // END SWITCH
		Print_Board(a);
	}else
	{
		cout << "Invalid Move" << endl;
	}
	return;
}

int Reset(int A[])
{
	score = 0;
	for(int i = 0;i<15;i++)
	{
		A[i]=1;
	}
	A[0]=0;
	Print_Board(A);
	return 0;
}

int Auto_Solve(int A[])
{
	cout <<"Jump from 3 to 0"<<endl;
	A[3]=0;
	A[1]=0;
	A[0]=1;
	
	cout <<"Jump from 5 to 3"<<endl;
	A[5]=0;
	A[4]=0;
	A[3]=1;
	
	cout <<"Jump from 0 to 5"<<endl;
	A[0]=0;
	A[2]=0;
	A[5]=1;
	
	cout <<"Jump from 6 to 1"<<endl;
	A[6]=0;
	A[3]=0;
	A[1]=1;
	
	cout <<"Jump from 12 to 3"<<endl;
	A[12]=0;
	A[6]=0;
	A[3]=1;
	
	cout <<"Jump from 1 to 6"<<endl;
	A[1]=0;
	A[3]=0;
	A[6]=1;
	
	cout <<"Jump from 9 to 7"<<endl;
	A[9]=0;
	A[8]=0;
	A[7]=1;
	
	cout <<"Jump from 6 to 8"<<endl;
	A[6]=0;
	A[7]=0;
	A[8]=1;
	
	cout <<"Jump from 14 to 12"<<endl;
	A[14]=0;
	A[13]=0;
	A[12]=1;
	
	cout <<"Jump from 11 to 13"<<endl;
	A[11]=0;
	A[12]=0;
	A[13]=1;
	
	cout <<"Jump from 5 to 12"<<endl;
	A[5]=0;
	A[8]=0;
	A[12]=1;
	
	cout <<"Jump from 13 to 11"<<endl;
	A[13]=0;
	A[12]=0;
	A[11]=1;
	
	cout <<"Jump from 10 to 12"<<endl;
	A[10]=0;
	A[11]=0;
	A[12]=1;
	
	Print_Board(A);
	
	
	
	
	
	return 0;
}


























int Peg_Menu(int A[])
{
	while(1)
	{
		//cout << "Welcome to the PegJummp Game"<<endl;
		int choice=0;
		cout << "Please enter a number to choose an action:"<<endl;
		cout << "(1) Make a Move" << endl;
		cout << "(2) See your current score"<<endl;
		cout << "(3) See your total score"<<endl;
		cout << "(4) Reset the Board"<<endl;
		cout << "(5) Auto-Solve (This Prints the Solution as Well)"<<endl;
		cout << "(6) Exit the Game"<<endl;
		cin >> choice;
		
		if(choice == 1)
		{
			int a,b;
			cout << "Please enter a starting point and an end point."<<endl;
			cin>>a>>b;
			game(A,a,b);
		}
		if(choice == 2)
			Print_Current_Score();
		if(choice == 3)
			Print_Cumm_Score();	
		if(choice == 4)
			Reset(A);
		if(choice == 5)
			Auto_Solve(A);
		if(choice == 6)
			return 0;
	}
}





