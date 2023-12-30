#include <iostream>
using namespace std;
char matrix[3][3]= {'-','-','-','-','-','-','-','-','-'};
char player='X';
int n;
// To print Board
void board()
{
    cout<<"TIC TAC TOE"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

//To get Input from user

void input()
{
    char r , c ;
    cout<<"Please enter your move, Player "<<"'"<<player<<"'."<<endl;
    cout<<"Row:";
    cin>>r;
    cout<<endl;
    cout<<"Column:";
    cin>>c;
    
    if ((r=='0')&&(c=='0'))
    {
        if(matrix[0][0]=='-')
        {       
            matrix[0][0]=player;
        }
        else
        {
            cout<<"Position is already occupied!"<<endl;
            input();
        }
    }
    else if ((r=='0')&&(c=='1'))
    {
        if(matrix[0][1]=='-')
        {       
            matrix[0][1]=player;
        }
        else
        {
            cout<<"Position is already occupied!"<<endl;
            input();
        }
    }
    else if ((r=='0')&&(c=='2'))
    {
        if(matrix[0][2]=='-')
        {       
            matrix[0][2]=player;
        }
        else
        {
            cout<<"Position is already occupied!"<<endl;
            input();
        }
    }
    else if ((r=='1')&&(c=='0'))
    {
        if(matrix[1][0]=='-')
        {       
            matrix[1][0]=player;
        }
        else
        {
            cout<<"Position is already occupied!"<<endl;
            input();
        }
    }
    else if ((r=='1')&&(c=='1'))
    {
        if(matrix[1][1]=='-')
        {       
            matrix[1][1]=player;
        }
        else
        {
            cout<<"Position is already occupied!"<<endl;
            input();
        }
    }
    else if ((r=='1')&&(c=='2'))
    {
        if(matrix[1][2]=='-')
        {       
            matrix[1][2]=player;
        }
        else
        {
            cout<<"Position is already occupied!"<<endl;
            input();
        }
    }
    else if ((r=='2')&&(c=='0'))
    {
        if(matrix[2][0]=='-')
        {       
            matrix[2][0]=player;
        }
        else
        {
            cout<<"Position is already occupied!"<<endl;
            input();
        }
    }
    else if ((r=='2')&&(c=='1'))
    {
        if(matrix[2][1]=='-')
        {       
            matrix[2][1]=player;
        }
        else
        {
            cout<<"Position is already occupied!"<<endl;
            input();
        }
    }
    else if ((r=='2')&&(c=='2'))
    {
        if(matrix[2][2]=='-')
        {       
            matrix[2][2]=player;
        }
        else
        {
            cout<<"Position is already occupied!"<<endl;
            input();
        }
    }
    else
    {
        cout<<"Invalid Position!"<<endl;
        input();
    }
    
}

// For changing the player  

void toggleplayer()
{
    if(player=='X')
    {
        player='O';
    }
    else if(player=='O')
    {
        player='X';
    }
}

// To check If player check the game

char win()
{
 // For checking 1st player   

    // To check Rows 

    if( matrix[0][0] =='X' && matrix[0][1] =='X' && matrix[0][2] =='X' ) 
        return'X'; 
    if( matrix[1][0] =='X' && matrix[1][1] =='X' && matrix[1][2] =='X' ) 
        return'X'; 
    if( matrix[2][0] =='X' && matrix[2][1] =='X' && matrix[2][2] =='X' ) 
        return'X';     

    // To check Columns 

    if( matrix[0][0] =='X' && matrix[1][0] =='X' && matrix[2][0] =='X' ) 
        return'X'; 
    if( matrix[0][1] =='X' && matrix[1][1] =='X' && matrix[2][1] =='X' ) 
        return'X'; 
    if( matrix[0][2] =='X' && matrix[1][2] =='X' && matrix[2][2] =='X' ) 
        return'X'; 

    // To check Diagonals 

    if( matrix[0][0] =='X' && matrix[1][1] =='X' && matrix[2][2] =='X' ) 
        return'X'; 
    if( matrix[0][2] =='X' && matrix[1][1] =='X' && matrix[2][0] =='X' ) 
        return'X'; 

// For checking 2nd player   

    // To check Rows 

    if( matrix[0][0] =='O' && matrix[0][1] =='O' && matrix[0][2] =='O' ) 
        return'O'; 
    if( matrix[1][0] =='O' && matrix[1][1] =='O' && matrix[1][2] =='O' ) 
        return'O'; 
    if( matrix[2][0] =='O' && matrix[2][1] =='O' && matrix[2][2] =='O' ) 
        return'O';     

    // To check Columns 

    if( matrix[0][0] =='O' && matrix[1][0] =='O' && matrix[2][0] =='O' ) 
        return'O'; 
    if( matrix[0][1] =='O' && matrix[1][1] =='O' && matrix[2][1] =='O' ) 
        return'O'; 
    if( matrix[0][2] =='O' && matrix[1][2] =='O' && matrix[2][2] =='O' ) 
        return'O'; 

    // To check Diagonals 

    if( matrix[0][0] =='O' && matrix[1][1] =='O' && matrix[2][2] =='O' ) 
        return'O'; 
    if( matrix[0][2] =='O' && matrix[1][1] =='O' && matrix[2][0] =='O' ) 
        return'O';    

    return '/';                               
}

int main() 
{
   n=0;
   board();
   while(1)
   {
       n++;
       input();
       board();
       if(win()=='X')
       {
           cout<<"Player 'X' wins!"<<endl;
           break;
       }
       else if(win()=='O')
       {
           cout<<"Player 'O' wins!"<<endl;
           break;
       }
       else if(win()=='/'&& n==9)
       {
           cout<<"Game is draw!"<<endl;
       }
        toggleplayer();      
   }
   system("pause");
    return 0;
}
