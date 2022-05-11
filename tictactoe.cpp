#include <iostream>

using namespace std;
char display[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'}, player = 'X', temp = 'X';

void interface()
{
    cout<<endl<<endl<<endl;
    cout << "\t\t    |    |    " << endl;
    cout << "\t\t " << display[0][0] << "  | " << display[0][1] << "  | " << display[0][2] << "   " << endl;
    cout << "\t\t    |    |    " << endl;
    cout << "\t------------------------------" << endl;
    cout << "\t\t    |    |    " << endl;
    cout << "\t\t " << display[1][0] << "  | " << display[1][1] << "  | " << display[1][2] << "   " << endl;
    cout << "\t\t    |    |    " << endl;
    cout << "\t------------------------------" << endl;
    cout << "\t\t    |    |    " << endl;
    cout << "\t\t " << display[2][0] << "  | " << display[2][1] << "  | " << display[2][2] << "   " << endl;
    cout << "\t\t    |    |    " << endl;
}

    int choice=1;
void turn()
{
    if (player == temp)
    {
        cout << "Player 1 ['X'] Enter box number" << endl;
        cin >> choice;
     
            switch (choice)
            {
            case 1:
                if(display[0][0]!='O' || display[0][0]=='X'){
                display[0][0] = 'X';
                player = 'O';
                break;
                }
            case 2:
                if(display[0][1]!='O' || display[0][1]=='X'){
                display[0][1] = 'X';
                player = 'O';
                break;
                }
            case 3:
               if(display[0][2]!='O' || display[0][2]=='X'){
                display[0][2] = 'X';
                player = 'O';
                break;
               }
            case 4:
               if(display[1][0]!='O' || display[1][0]=='X'){
                display[1][0] = 'X';
                player = 'O';
                break;
               }
            case 5:
               if(display[1][1]!='O' || display[1][1]=='X'){
                display[1][1] = 'X';
                player = 'O';
                break;
               }
            case 6:
             if(display[1][2]!='O' || display[1][2]=='X'){
                display[1][2] = 'X';
                player = 'O';
                break;
             }
            case 7:
             if(display[2][0]!='O' || display[2][0]=='X'){
                display[2][0] = 'X';
                player = 'O';
                break;
             }
            case 8:
             if(display[2][1]!='O' || display[2][1]=='X'){
                display[2][1] = 'X';
                player = 'O';
                break;
             }
            case 9:
             if(display[2][2]!='O' || display[2][2]=='X'){
                display[2][2] = 'X';
                player = 'O';
                break;
             }
            default:
                cout << "Invalid input";
                player = 'X';
               
                break;
            }
        
    }
    else
    {
        cout << "Player 2 ['O'] Enter box number: " << endl;
        cin >> choice;
    
        
     
            switch (choice)
            {
            case 1:
            if(display[0][0]!='X' || display[0][0]=='O'){
                display[0][0] = 'O';
                player = 'X';
                break;
            }
            case 2:
             if(display[0][1]!='X' || display[0][1]=='O'){
                display[0][1] = 'O';
                player = 'X';
                break;
             }
            case 3:
             if(display[0][2]!='X' || display[0][2]=='O'){
                display[0][2] = 'O';
                player = 'X';
                break;
             }
            case 4:
             if(display[1][0]!='X' || display[1][0]=='O'){
                display[1][0] = 'O';
                player = 'X';
                break;
             }
            case 5:
             if(display[1][1]!='X' || display[1][1]=='O'){
                display[1][1] = 'O';
                player = 'X';
                break;
             }
            case 6:
             if(display[1][2]!='X' || display[1][2]=='O'){
                display[1][2] = 'O';
                player = 'X';
                break;
             }
            case 7:
                 if(display[2][0]!='X' || display[2][0]=='O'){
                display[2][0] = 'O';
                player = 'X';
                break;
                 }
            case 8:
             if(display[2][1]!='X' || display[2][1]=='O'){
                display[2][1] = 'O';
                player = 'X';
                break;
             }
            case 9:
             if(display[2][2]!='X' || display[2][2]=='O'){
                display[2][2] = 'O';
                player = 'X';
                break;
             }

            default:
                cout << "Invalid input";
                player = 'O';
                
                break;
            }
        // }
    }
}
bool check()
{

    for (int i = 0; i < 3; i++)
    {
  if ((choice!=1)&&(choice!=2)&&(choice!=3)&&(choice!=4)&&(choice!=5)&&(choice!=6)&&(choice!=7)&&(choice!=8)&&(choice!=9))
        {
            cout<<endl<<endl<<endl<<"\t\t\t\t\t\tInvalid input"<<endl<<endl<<endl;
           return false;
            
        }

        if (display[i][0] == display[i][1] && display[i][0] == display[i][2] && display[i][2] == display[i][1])
        {
            cout <<endl<<endl<<endl<< "******************YOU WIN THE GAME ! ! ! ! CONGRATULATION**********************" <<endl<< endl;

            return false;
        }
        else if (display[0][i] == display[1][i] && display[0][i] == display[2][i] && display[2][i] == display[1][i])
        {
            cout <<endl<<endl<<endl<< "******************YOU WIN THE GAME ! ! ! ! CONGRATULATION**********************" <<endl<< endl;

            return false;
        }
        else if (display[0][0] == display[1][1] && display[0][0] == display[2][2] && display[2][2] == display[1][1])
        {
            cout <<endl<<endl<<endl<< "******************YOU WIN THE GAME ! ! ! ! CONGRATULATION**********************" <<endl<< endl;

            return false;
        }
        else if (display[0][2] == display[1][1] && display[2][0] == display[2][0] && display[2][0] == display[1][1])
        {
            cout <<endl<<endl<<endl<< "******************YOU WIN THE GAME ! ! ! ! CONGRATULATION**********************" <<endl<< endl;

            return false;
        }
        else if ((display[0][0] == 'X' || display[0][0] == 'O') && (display[0][1] == 'X' || display[0][1] == 'O') && (display[0][2] == 'X' || display[0][2] == 'O') && (display[1][0] == 'X' || display[1][0] == 'O') && (display[1][1] == 'X' || display[1][1] == 'O') && (display[1][2] == 'X' || display[1][2] == 'O') && (display[2][0] == 'X' || display[2][0] == 'O') && (display[2][1] == 'X' || display[2][1] == 'O') && (display[2][2] == 'X' || display[2][2] == 'O'))
        {
            cout <<endl<<endl<<endl<< "******************              GAME TIE            **********************" << endl<<endl;

            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    while (check())
    {
        interface();
        turn();
        check();

        system("cls");
    }
    return 0;
}