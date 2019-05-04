#include "board.h"

using namespace std;

int kcount=0,Kcount=0;

void ChessField(char pole[][9]){
  for (int i = 0; i < 9; i++)
   {
      for (int j = 0; j < 9; j++) {
          cout << setw(2) << pole[i][j];
      }
    cout << endl;
  }
}

void Move(char pole[][9], int *team) {
  	int i1=9, i2=9, j1=0, j2=0;
  	string  step;
    cout << endl << "Input your move: ";
  	getline(cin, step);
  	if (step == "exit"){
    	cout << "Exit the programm";
		exit(0);
	}
	
	if(step == "0-0"){
		switch(*team){
			case 0:
				if((Kcount==0) && (pole[7][8]=='R') && (pole[7][5]=='K') && (pole[7][6]==' ') && (pole[7][7]==' ') ){
					int g=0;
					if((AttackArea(*team,1,7,8,pole)==1) && (AttackArea(*team,2,7,8,pole)==1) && (AttackArea(*team,3,7,8,pole)==1) && (AttackArea(*team,4,7,8,pole)==1) && (AttackArea(*team,5,7,8,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,7,7,pole)==1) && (AttackArea(*team,2,7,7,pole)==1) && (AttackArea(*team,3,7,7,pole)==1) && (AttackArea(*team,4,7,7,pole)==1) && (AttackArea(*team,5,7,7,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,7,6,pole)==1) && (AttackArea(*team,2,7,6,pole)==1) && (AttackArea(*team,3,7,6,pole)==1) && (AttackArea(*team,4,7,6,pole)==1) && (AttackArea(*team,5,7,6,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,7,5,pole)==1) && (AttackArea(*team,2,7,5,pole)==1) && (AttackArea(*team,3,7,5,pole)==1) && (AttackArea(*team,4,7,5,pole)==1) && (AttackArea(*team,5,7,5,pole)==1)){
						g++;
					}
					if(g==4){
						pole[7][8]=' ';
						pole[7][7]='K';
						pole[7][6]='R';
						pole[7][5]=' ';
						*team=1-*team;
						return;
					}
					else{
						cout << "\n ERROR: You can't do castling \n \n";
						return;
					}
				}
				else{
					cout << "\n ERROR: You can't do castling \n \n";
					return;
				}
			break;
			case 1:
				if((kcount==0) && (pole[0][8]=='r') && (pole[0][5]=='k') && (pole[0][7]==' ') && (pole[0][6]==' ')){
					int g=0;
					if((AttackArea(*team,1,0,8,pole)==1) && (AttackArea(*team,2,0,8,pole)==1) && (AttackArea(*team,3,0,8,pole)==1) && (AttackArea(*team,4,0,8,pole)==1) && (AttackArea(*team,5,0,8,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,0,7,pole)==1) && (AttackArea(*team,2,0,7,pole)==1) && (AttackArea(*team,3,0,7,pole)==1) && (AttackArea(*team,4,0,7,pole)==1) && (AttackArea(*team,5,0,7,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,0,6,pole)==1) && (AttackArea(*team,2,0,6,pole)==1) && (AttackArea(*team,3,0,6,pole)==1) && (AttackArea(*team,4,0,6,pole)==1) && (AttackArea(*team,5,0,6,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,0,5,pole)==1) && (AttackArea(*team,2,0,5,pole)==1) && (AttackArea(*team,3,0,5,pole)==1) && (AttackArea(*team,4,0,5,pole)==1) && (AttackArea(*team,5,0,5,pole)==1)){
						g++;
					}
					if(g==4){
						pole[0][8]=' ';
						pole[0][7]='k';
						pole[0][6]='r';
						pole[0][5]=' ';
						*team=1-*team;
						return;
					}
					else{
						cout << "\n ERROR: You can't do castling \n \n";
						return;
					}
				}
				else{
					cout << "\n ERROR: You can't do castling \n \n";
					return;
				}
			break;
		}
	}
	
  	
		if(step == "0-0-0"){
		switch(*team){
			case 0:
				if((Kcount==0) && (pole[7][1]=='R') && (pole[7][5]=='K') && (pole[7][4]==' ') && (pole[7][3]==' ') && (pole[7][2]==' ') ){
					int g=0;
					if((AttackArea(*team,1,7,1,pole)==1) && (AttackArea(*team,2,7,1,pole)==1) && (AttackArea(*team,3,7,1,pole)==1) && (AttackArea(*team,4,7,1,pole)==1) && (AttackArea(*team,5,7,1,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,7,2,pole)==1) && (AttackArea(*team,2,7,2,pole)==1) && (AttackArea(*team,3,7,2,pole)==1) && (AttackArea(*team,4,7,2,pole)==1) && (AttackArea(*team,5,7,2,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,7,3,pole)==1) && (AttackArea(*team,2,7,3,pole)==1) && (AttackArea(*team,3,7,3,pole)==1) && (AttackArea(*team,4,7,3,pole)==1) && (AttackArea(*team,5,7,3,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,7,4,pole)==1) && (AttackArea(*team,2,7,4,pole)==1) && (AttackArea(*team,3,7,4,pole)==1) && (AttackArea(*team,4,7,4,pole)==1) && (AttackArea(*team,5,7,4,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,7,5,pole)==1) && (AttackArea(*team,2,7,5,pole)==1) && (AttackArea(*team,3,7,5,pole)==1) && (AttackArea(*team,4,7,5,pole)==1) && (AttackArea(*team,5,7,5,pole)==1)){
						g++;
					}
					if(g==5){
						pole[7][1]=' ';
						pole[7][2]=' ';
						pole[7][3]='K';
						pole[7][4]='R';
						pole[7][5]=' ';
						*team=1-*team;
						return;
					}
					else{
						cout << "\n ERROR: You can't do castling \n \n";
						return;
					}
				}
				else{
					cout << "\n ERROR: You can't do castling \n \n";
					return;
				}
			break;
			case 1:
				if((Kcount==0) && (pole[0][1]=='r') && (pole[0][5]=='k') && (pole[0][4]==' ') && (pole[0][3]==' ') && (pole[0][2]==' ') ){
					int g=0;
					if((AttackArea(*team,1,0,1,pole)==1) && (AttackArea(*team,2,0,1,pole)==1) && (AttackArea(*team,3,0,1,pole)==1) && (AttackArea(*team,4,0,1,pole)==1) && (AttackArea(*team,5,0,1,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,0,2,pole)==1) && (AttackArea(*team,2,0,2,pole)==1) && (AttackArea(*team,3,0,2,pole)==1) && (AttackArea(*team,4,0,2,pole)==1) && (AttackArea(*team,5,0,2,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,0,3,pole)==1) && (AttackArea(*team,2,0,3,pole)==1) && (AttackArea(*team,3,0,3,pole)==1) && (AttackArea(*team,4,0,3,pole)==1) && (AttackArea(*team,5,0,3,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,0,4,pole)==1) && (AttackArea(*team,2,0,4,pole)==1) && (AttackArea(*team,3,0,4,pole)==1) && (AttackArea(*team,4,0,4,pole)==1) && (AttackArea(*team,5,0,4,pole)==1)){
						g++;
					}
					if((AttackArea(*team,1,0,5,pole)==1) && (AttackArea(*team,2,0,5,pole)==1) && (AttackArea(*team,3,0,5,pole)==1) && (AttackArea(*team,4,0,5,pole)==1) && (AttackArea(*team,5,0,5,pole)==1)){
						g++;
					}
					if(g==5){
						pole[0][1]=' ';
						pole[0][2]=' ';
						pole[0][3]='K';
						pole[0][4]='R';
						pole[0][5]=' ';
						*team=1-*team;
						return;
					}
					else{
						cout << "\n ERROR: You can't do castling \n \n";
						return;
					}
				}
				else{
					cout << "\n ERROR: You can't do castling \n \n";
					return;
				}
			break;
		}
	}
	  
	if (step.length() !=5){
        cout << "\n ERROR: Invalid input \n \n";
        return;
    }
	switch(step[0]){
		case 'a' : j1=1; break;
		case 'b' : j1=2; break;
		case 'c' : j1=3; break;
		case 'd' : j1=4; break;
		case 'e' : j1=5; break;
		case 'f' : j1=6; break;
		case 'g' : j1=7; break;
		case 'h' : j1=8; break;
		default: cout << "\n ERROR: Invalid input \n \n"; return;
		}
	switch(step[1]){
		case '1' : i1=7; break;
		case '2' : i1=6; break;
		case '3' : i1=5; break;
		case '4' : i1=4; break;
		case '5' : i1=3; break;
		case '6' : i1=2; break;
		case '7' : i1=1; break;
		case '8' : i1=0; break;
		default: cout << "\n ERROR: Invalid input \n \n"; return;
		}
	if(step[2] != '-'){
		cout << "\n ERROR: Invalid input \n \n";
		return;
	}
	switch(step[3]){	
		case 'a' : j2=1; break;
		case 'b' : j2=2; break;
		case 'c' : j2=3; break;
		case 'd' : j2=4; break;
		case 'e' : j2=5; break;
		case 'f' : j2=6; break;
		case 'g' : j2=7; break;
		case 'h' : j2=8; break;
		default: cout << "\n ERROR: Invalid input \n \n"; return;
		}
	switch(step[4]){
		case '1' : i2=7; break;
		case '2' : i2=6; break;
		case '3' : i2=5; break;
		case '4' : i2=4; break;
		case '5' : i2=3; break;
		case '6' : i2=2; break;
		case '7' : i2=1; break;
		case '8' : i2=0; break;
		default: cout << "\n ERROR: Invalid input \n \n"; return;
		}
		
	int d = MoveCheck(*team,i1,i2,j1,j2,pole);
	if(d==1){
		if((pole[i2][j2]=='k') || (pole[i2][j2]=='K')){
			cout << "\n You win!";
			exit(0);
		}
		char memmory = pole[i2][j2];
		pole[i2][j2]=pole[i1][j1];
		pole[i1][j1]=' ';
		
		int ib,vb;
		switch(*team){
			case 0:
				for(int i=0; i<8; i++){
					for(int v=1; v<9;v++){
						if(pole[i][v]=='K'){
							ib=i;
							vb=v;	
						}		
					}
				}
				if((AttackArea(*team,1,ib,vb,pole)==0) || (AttackArea(*team,2,ib,vb,pole)==0) || (AttackArea(*team,3,ib,vb,pole)==0) || (AttackArea(*team,4,ib,vb,pole)==0) || (AttackArea(*team,5,ib,vb,pole)==0)){
					pole[i1][j1]=pole[i2][j2];
					pole[i2][j2]=memmory;
					cout << "\n ERROR: Your king is under attack \n \n"; 
					return; 
				}
			break;
			case 1:
				for(int i=0; i<8; i++){
					for(int v=1; v<9;v++){
						if(pole[i][v]=='k'){
							ib=i;
							vb=v;	
						}		
					}
				}
				if((AttackArea(*team,1,ib,vb,pole)==0) || (AttackArea(*team,2,ib,vb,pole)==0) || (AttackArea(*team,3,ib,vb,pole)==0) || (AttackArea(*team,4,ib,vb,pole)==0) || (AttackArea(*team,5,ib,vb,pole)==0)){
					pole[i1][j1]=pole[i2][j2];
					pole[i2][j2]=memmory;
					cout << "\n ERROR: Your king is under attack \n \n"; 
					return; 
				}
			break;
		}
		
		if(pole[i2][j2]=='K')
					Kcount=1;
		if(pole[i2][j2]=='k')
					kcount=1;
					
		
		
		switch(*team){
			case 0 :
				if((pole[i2][j2]=='P') && (i2==0)){
					char  transform=' ';
	    			while(transform==' '){
						cout << endl << "Transform your pawn: ";
	  					cin >> transform;
	  					if((transform!='R') && (transform!='N') && (transform!='B') && (transform!='Q')){
	  						transform=' ';	
						}
					}
					pole[i2][j2]=transform;
				}
			break;	
			case 1 :
				if((pole[i2][j2]=='p') && (i2==7)){
					char  transform=' ';
	    			while(transform==' '){
						cout << endl << "Transform your pawn: ";
	  					cin >> transform;
	  					if((transform!='r') && (transform!='n') && (transform!='b') && (transform!='q')){
	  						transform=' ';	
						}
					}
					pole[i2][j2]=transform;
				}
			break;	
		}
		*team=1-*team;
	}
	else{
		cout << "\n ERROR: You can't move here \n \n"; 
	}
	cout << endl;
	cout << endl;

}


int MoveCheck(int team,int i1, int i2, int j1, int j2, char pole[][9]){
	int d=0;
	if((i1==i2)&&(j1==j2)){
		cout << "\n ERROR: You didn't move the figure' \n \n"; return 0;
	}
switch(team){
	case 0:
	switch(pole[i1][j1]){
		case ' ' : cout << "\n ERROR: You don't have the figure on the position \n \n"; return 0;
		
		case 'P' : 
			if(FriendlyFire(team,i2,j2,pole)==1){
				if((j1==j2) && (i1-i2==1) && (pole[i2][j2]== ' '))
					d=1;
				if((j1==j2) && (i1-i2==2) && (i1==6) && (pole[i2][j2]== ' ')){
					if (pole[i2+1][j2]==' '){
					d=1;	
					}
					else{
						cout << "\n ERROR: Pawn can't reach the position through the figure \n \n"; 
						return 0;
					}
				}
				if((i1-i2==1) && (pole[i2][j2]!=' ') && ((j1-j2==1) || (j2-j1==1)))
					d=1;
			}	
		break;
		
		case 'R' :
		if(FriendlyFire(team,i2,j2,pole)==1){	
			if((j1==j2) && (i1!=i2)){
				if(i1>i2){
					for(int i=i1-1;i>i2;i--)
					{
						if(pole[i][j1] != ' '){
						cout << "\n ERROR: Rook can't reach the position through the figure' \n \n"; 
						return 0;		
						}
					}
					d=1;
				}
				if(i1<i2){
					for(int i=i2-1;i>i1;i--)
					{
						if(pole[i][j1] != ' '){
						cout << "\n ERROR: Rook can't reach the position through the figure' \n \n"; 
						return 0;		
						}
					}
					d=1;
				}
			}
			if((i1==i2) && (j1!=j2)){
				if(j1>j2){
					for(int i=j1-1;i>j2;i--){
						if(pole[i1][i] != ' '){
						cout << "\n ERROR: Rook can't reach the position through the figure' \n \n"; 
						return 0;	
						}
					}
					d=1;
				}
				if(j1<j2){
					for(int i=j2-1;i>j1;i--){
						if(pole[i1][i] != ' '){
						cout << "\n ERROR: Rook can't reach the position through the figure' \n \n"; 
						return 0;	
						}
					}
					d=1;
				}
			}
		}
		break;	
		
		case 'N' :
			if(FriendlyFire(team,i2,j2,pole)==1){
				if(((i2==i1-2) && (j2==j1+1)) || ((i2==i1-2) && (j2==j1-1)) || ((i2==i1+2) && (j2==j1+1)) || ((i2==i1+2) && (j2==j1-1)) || ((i2==i1-1) && (j2==j1+2)) || ((i2==i1-1) && (j2==j1-2)) || ((i2==i1+1) && (j2==j1+2)) || ((i2==i1+1) && (j2==j1-2))){
					d=1;
				}
			}
		break;	
		
		case 'B' :
			if(FriendlyFire(team,i2,j2,pole)==1){
				if((j2<j1) && (i2<i1)){
					if(j1-j2==i1-i2){
						for(int i=j1-1, v=i1-1; i>j2 && v>i2; i--, v--){
							if(pole[v][i] != ' '){
							cout << "\n ERROR: Bishop can't reach the position through the figure' \n \n"; 
							return 0;		
							}
						}
						d=1;
					}
				} 
				if((j2<j1) && (i2>i1)){
					if(j1-j2==i2-i1){
						for(int i=j1-1, v=i1+1; i>j2 && v<i2; i--, v++){
							if(pole[v][i] != ' '){
							cout << "\n ERROR: Bishop can't reach the position through the figure' \n \n"; 
							return 0;		
							}
						}
						d=1;
					}
				}
				if((j2>j1) && (i2<i1)){
					if(j2-j1==i1-i2){
						for(int i=j1+1, v=i1-1; i<j2 && v>i2; i++, v--){
							if(pole[v][i] != ' '){
							cout << "\n ERROR: Bishop can't reach the position through the figure' \n \n"; 
							return 0;		
							}
						}
						d=1;
					}
				}
				if((j2>j1) && (i2>i1)){
					if(j2-j1==i2-i1){
						for(int i=j1+1, v=i1+1; i<j2 && v<i2; i++, v++){
							if(pole[v][i] != ' '){
							cout << "\n ERROR: Bishop can't reach the position through the figure' \n \n"; 
							return 0;		
							}
						}
						d=1;
					}
				}    
			}
		break;
		
		case 'Q' :
			if(FriendlyFire(team,i2,j2,pole)==1){
			/// Ëàäüÿ//////////////////////////////////
			if((j1==j2) && (i1!=i2)){
			if(i1>i2){
				for(int i=i1-1;i>i2;i--)
				{
					if(pole[i][j1] != ' '){
					cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
					return 0;		
					}
				}
				d=1;
			}
			if(i1<i2){
				for(int i=i2-1;i>i1;i--)
				{
					if(pole[i][j1] != ' '){
					cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
					return 0;		
					}
				}
				d=1;
			}
			}
			if((i1==i2) && (j1!=j2)){
				if(j1>j2){
					for(int i=j1-1;i>j2;i--){
						if(pole[i1][i] != ' '){
						cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
						return 0;	
						}
					}
					d=1;
				}
				if(j1<j2){
					for(int i=j2-1;i>j1;i--){
						if(pole[i1][i] != ' '){
						cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
						return 0;	
						}
					}
					d=1;
				}
			}
			///Ñëîí////////////////////////////////////////////// 
			if((j2<j1) && (i2<i1)){
					if(j1-j2==i1-i2){
						for(int i=j1-1, v=i1-1; i>j2 && v>i2; i--, v--){
							if(pole[v][i] != ' '){
							cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
							return 0;		
							}
						}
						d=1;
					}
				} 
			if((j2<j1) && (i2>i1)){
				if(j1-j2==i2-i1){
					for(int i=j1-1, v=i1+1; i>j2 && v<i2; i--, v++){
						if(pole[v][i] != ' '){
						cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
						return 0;		
						}
					}
					d=1;
				}
			}
			if((j2>j1) && (i2<i1)){
				if(j2-j1==i1-i2){
					for(int i=j1+1, v=i1-1; i<j2 && v>i2; i++, v--){
						if(pole[v][i] != ' '){
						cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
						return 0;		
						}
					}
					d=1;
				}
			}
			if((j2>j1) && (i2>i1)){
				if(j2-j1==i2-i1){
					for(int i=j1+1, v=i1+1; i<j2 && v<i2; i++, v++){
						if(pole[v][i] != ' '){
						cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
						return 0;		
						}
					}
					d=1;
				}
			}    
			}
		break;	
		
		case 'K' :
			if(FriendlyFire(team,i2,j2,pole)==1){
				if(((j2-j1>=-1) && (j2-j1<=1)) && ((i2-i1>=-1) && (i2-i1<=1))){
					if((AttackArea(team,1,i2,j2,pole)==1) && (AttackArea(team,2,i2,j2,pole)==1) && (AttackArea(team,3,i2,j2,pole)==1) && (AttackArea(team,4,i2,j2,pole)==1) && (AttackArea(team,5,i2,j2,pole)==1))
					{
					d=1;
					}
					else{
						cout << "\n ERROR: Position is under attack \n \n"; 
						return 0;	
					}
				}
			}
		break;
		
		default :
			cout << "\n ERROR: Wrong side \n\n";
		break;
	}
	break;
	
	case 1:
	switch(pole[i1][j1]){
		case ' ' : cout << "\n ERROR: You don't have the figure on the position \n \n"; return 0;
		
		case 'p' : 
			if(FriendlyFire(team,i2,j2,pole)==1){
				if((j1==j2) && (i2-i1==1) && (pole[i2][j2]== ' '))
					d=1;
				if((j1==j2) && (i2-i1==2) && (i1==1) && (pole[i2][j2]== ' ')){
					if (pole[i2-1][j2]==' '){
					d=1;	
					}
					else{
						cout << "\n ERROR: Pawn can't reach the position through the figure \n \n"; 
						return 0;
					}
				}
				if((i2-i1==1) && (pole[i2][j2]!=' ') && ((j2-j1==1) || (j1-j2==1)))
					d=1;
			}	
		break;
		
		case 'r' :
		if(FriendlyFire(team,i2,j2,pole)==1){	
			if((j1==j2) && (i1!=i2)){
				if(i1>i2){
					for(int i=i1-1;i>i2;i--)
					{
						if(pole[i][j1] != ' '){
						cout << "\n ERROR: Rook can't reach the position through the figure' \n \n"; 
						return 0;		
						}
					}
					d=1;
				}
				if(i1<i2){
					for(int i=i2-1;i>i1;i--)
					{
						if(pole[i][j1] != ' '){
						cout << "\n ERROR: Rook can't reach the position through the figure' \n \n"; 
						return 0;		
						}
					}
					d=1;
				}
			}
			if((i1==i2) && (j1!=j2)){
				if(j1>j2){
					for(int i=j1-1;i>j2;i--){
						if(pole[i1][i] != ' '){
						cout << "\n ERROR: Rook can't reach the position through the figure' \n \n"; 
						return 0;	
						}
					}
					d=1;
				}
				if(j1<j2){
					for(int i=j2-1;i>j1;i--){
						if(pole[i1][i] != ' '){
						cout << "\n ERROR: Rook can't reach the position through the figure' \n \n"; 
						return 0;	
						}
					}
					d=1;
				}
			}
		}
		break;	
		
		case 'n' :
			if(FriendlyFire(team,i2,j2,pole)==1){
				if(((i2==i1-2) && (j2==j1+1)) || ((i2==i1-2) && (j2==j1-1)) || ((i2==i1+2) && (j2==j1+1)) || ((i2==i1+2) && (j2==j1-1)) || ((i2==i1-1) && (j2==j1+2)) || ((i2==i1-1) && (j2==j1-2)) || ((i2==i1+1) && (j2==j1+2)) || ((i2==i1+1) && (j2==j1-2))){
					d=1;
				}
			}
		break;	
		
		case 'b' :
			if(FriendlyFire(team,i2,j2,pole)==1){
				if((j2<j1) && (i2<i1)){
					if(j1-j2==i1-i2){
						for(int i=j1-1, v=i1-1; i>j2 && v>i2; i--, v--){
							if(pole[v][i] != ' '){
							cout << "\n ERROR: Bishop can't reach the position through the figure' \n \n"; 
							return 0;		
							}
						}
						d=1;
					}
				} 
				if((j2<j1) && (i2>i1)){
					if(j1-j2==i2-i1){
						for(int i=j1-1, v=i1+1; i>j2 && v<i2; i--, v++){
							if(pole[v][i] != ' '){
							cout << "\n ERROR: Bishop can't reach the position through the figure' \n \n"; 
							return 0;		
							}
						}
						d=1;
					}
				}
				if((j2>j1) && (i2<i1)){
					if(j2-j1==i1-i2){
						for(int i=j1+1, v=i1-1; i<j2 && v>i2; i++, v--){
							if(pole[v][i] != ' '){
							cout << "\n ERROR: Bishop can't reach the position through the figure' \n \n"; 
							return 0;		
							}
						}
						d=1;
					}
				}
				if((j2>j1) && (i2>i1)){
					if(j2-j1==i2-i1){
						for(int i=j1+1, v=i1+1; i<j2 && v<i2; i++, v++){
							if(pole[v][i] != ' '){
							cout << "\n ERROR: Bishop can't reach the position through the figure' \n \n"; 
							return 0;		
							}
						}
						d=1;
					}
				}    
			}
		break;
		
		case 'q' :
			if(FriendlyFire(team,i2,j2,pole)==1){
			/// Ëàäüÿ//////////////////////////////////
			if((j1==j2) && (i1!=i2)){
			if(i1>i2){
				for(int i=i1-1;i>i2;i--)
				{
					if(pole[i][j1] != ' '){
					cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
					return 0;		
					}
				}
				d=1;
			}
			if(i1<i2){
				for(int i=i2-1;i>i1;i--)
				{
					if(pole[i][j1] != ' '){
					cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
					return 0;		
					}
				}
				d=1;
			}
			}
			if((i1==i2) && (j1!=j2)){
				if(j1>j2){
					for(int i=j1-1;i>j2;i--){
						if(pole[i1][i] != ' '){
						cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
						return 0;	
						}
					}
					d=1;
				}
				if(j1<j2){
					for(int i=j2-1;i>j1;i--){
						if(pole[i1][i] != ' '){
						cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
						return 0;	
						}
					}
					d=1;
				}
			}
			///Ñëîí////////////////////////////////////////////// 
			if((j2<j1) && (i2<i1)){
					if(j1-j2==i1-i2){
						for(int i=j1-1, v=i1-1; i>j2 && v>i2; i--, v--){
							if(pole[v][i] != ' '){
							cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
							return 0;		
							}
						}
						d=1;
					}
				} 
			if((j2<j1) && (i2>i1)){
				if(j1-j2==i2-i1){
					for(int i=j1-1, v=i1+1; i>j2 && v<i2; i--, v++){
						if(pole[v][i] != ' '){
						cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
						return 0;		
						}
					}
					d=1;
				}
			}
			if((j2>j1) && (i2<i1)){
				if(j2-j1==i1-i2){
					for(int i=j1+1, v=i1-1; i<j2 && v>i2; i++, v--){
						if(pole[v][i] != ' '){
						cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
						return 0;		
						}
					}
					d=1;
				}
			}
			if((j2>j1) && (i2>i1)){
				if(j2-j1==i2-i1){
					for(int i=j1+1, v=i1+1; i<j2 && v<i2; i++, v++){
						if(pole[v][i] != ' '){
						cout << "\n ERROR: Queen can't reach the position through the figure \n \n"; 
						return 0;		
						}
					}
					d=1;
				}
			}    
			}
		break;	
		
		case 'k' :
			if(FriendlyFire(team,i2,j2,pole)==1){
				if(((j2-j1>=-1) && (j2-j1<=1)) && ((i2-i1>=-1) && (i2-i1<=1))){
					if((AttackArea(team,1,i2,j2,pole)==1) && (AttackArea(team,2,i2,j2,pole)==1) && (AttackArea(team,3,i2,j2,pole)==1) && (AttackArea(team,4,i2,j2,pole)==1) && (AttackArea(team,5,i2,j2,pole)==1))
					{
					d=1;
					}
					else{
						cout << "\n ERROR: Position is under attack \n \n"; 
						return 0;	
					}
				}
			}
		break;
		default :
			cout << "\n ERROR: Wrong side \n\n";
		break;
		
	}	
	break;
}
	return d;
}


int AttackArea(int team, int area, int i2, int j2, char pole[][9]){
	int d=1,v,f;
	switch(team){
		case 0:
			switch(area){
				///ïåøêà///////////////////////
				case 1: 
					if((pole[i2-1][j2-1]=='p') || (pole[i2-1][j2+1]=='p')){
						d=0;
					}
				break;
				///ëàäüÿ+êîðîëåâà////////
				case 2:
					v = j2;
					do{
					v--;
						if((pole[i2][v]=='r') || (pole[i2][v]=='q')){
							d=0;
						}
					}
					while(pole[i2][v]==' ');
					v = j2;
					do{
					v++;
						if((pole[i2][v]=='r') || (pole[i2][v]=='q')){
							d=0;
						}
					}
					while(pole[i2][v]==' ');
					v = i2;
					do{
					v--;
						if((pole[v][j2]=='r') || (pole[v][j2]=='q')){
							d=0;
						}
					}
					while(pole[v][j2]==' ');
					v=i2;
					do{
					v++;
						if((pole[v][j2]=='r') || (pole[v][j2]=='q')){
							d=0;
						}
					}
					while(pole[v][j2]==' ');
				break;
				///ñëîí+êîðîëåâà///////////
				case 3 :
					f = i2;
					v = j2;
					do{
					v--;
					f--;
						if((pole[f][v]=='b') || (pole[i2][v]=='q')){
							d=0;
						}
					}
					while(pole[f][v]==' ');	
					f = i2;
					v = j2;
					do{
					v--;
					f++;
						if((pole[f][v]=='b') || (pole[i2][v]=='q')){
							d=0;
						}
					}
					while(pole[f][v]==' ');
					f = i2;
					v = j2;
					do{
					v++;
					f--;
						if((pole[f][v]=='b') || (pole[i2][v]=='q')){
							d=0;
						}
					}
					while(pole[f][v]==' ');	
					f = i2;
					v = j2;
					do{
					v++;
					f++;
						if((pole[f][v]=='b') || (pole[i2][v]=='q')){
							d=0;
						}
					}
					while(pole[f][v]==' ');		
				break;
				///êîíü/////////////////////
				case 4:
					if((pole[i2+1][j2+2]=='n') || (pole[i2+1][j2-2]=='n') || (pole[i2-1][j2+2]=='n') || (pole[i2-1][j2-2]=='n') || (pole[i2+2][j2+1]=='n') || (pole[i2+2][j2-1]=='n') || (pole[i2-2][j2+1]=='n') || (pole[i2-2][j2-1]=='n')){
						d=0;
					}
				break;	
				///êîðîëü///////////////////
				case 5:
					for (f=-1;f<2;f++){
						for(v=-1;v<2;v++){
							if(pole[i2+f][j2+v]=='k'){
								d=0;
							}
						}
					}
				break;
			}
		break;
			
		case 1:
			switch(area){
				///ïåøêà///////////////////////
				case 1: 
					if((pole[i2+1][j2-1]=='P') || (pole[i2+1][j2+1]=='P')){
						d=0;
					}
				break;
				///ëàäüÿ+êîðîëåâà////////
				case 2:
					v = j2;
					do{
					v--;
						if((pole[i2][v]=='R') || (pole[i2][v]=='Q')){
							d=0;
						}
					}
					while(pole[i2][v]==' ');
					v = j2;
					do{
					v++;
						if((pole[i2][v]=='R') || (pole[i2][v]=='Q')){
							d=0;
						}
					}
					while(pole[i2][v]==' ');
					v = i2;
					do{
					v--;
						if((pole[v][j2]=='R') || (pole[v][j2]=='Q')){
							d=0;
						}
					}
					while(pole[v][j2]==' ');
					v=i2;
					do{
					v++;
						if((pole[v][j2]=='R') || (pole[v][j2]=='Q')){
							d=0;
						}
					}
					while(pole[v][j2]==' ');
				break;
				///ñëîí+êîðîëåâà///////////
				case 3 :
					f = i2;
					v = j2;
					do{
					v--;
					f--;
						if((pole[f][v]=='B') || (pole[i2][v]=='Q')){
							d=0;
						}
					}
					while(pole[f][v]==' ');	
					f = i2;
					v = j2;
					do{
					v--;
					f++;
						if((pole[f][v]=='B') || (pole[i2][v]=='Q')){
							d=0;
						}
					}
					while(pole[f][v]==' ');
					f = i2;
					v = j2;
					do{
					v++;
					f--;
						if((pole[f][v]=='B') || (pole[i2][v]=='Q')){
							d=0;
						}
					}
					while(pole[f][v]==' ');	
					f = i2;
					v = j2;
					do{
					v++;
					f++;
						if((pole[f][v]=='B') || (pole[i2][v]=='Q')){
							d=0;
						}
					}
					while(pole[f][v]==' ');		
				break;
				///êîíü/////////////////////
				case 4:
					if((pole[i2+1][j2+2]=='N') || (pole[i2+1][j2-2]=='N') || (pole[i2-1][j2+2]=='N') || (pole[i2-1][j2-2]=='N') || (pole[i2+2][j2+1]=='N') || (pole[i2+2][j2-1]=='N') || (pole[i2-2][j2+1]=='N') || (pole[i2-2][j2-1]=='N')){
						d=0;
					}
				break;	
				///êîðîëü///////////////////
				case 5:
					for (f=-1;f<2;f++){
						for(v=-1;v<2;v++){
							if(pole[i2+f][j2+v]=='K'){
								d=0;
							}
						}
					}
				break;
			}	
		break;
	}
	return d;
}

int FriendlyFire(int side, int i2, int j2, char pole[][9]){
	int d =1;
	switch(side){
		case 0 : 
			if ((pole[i2][j2]=='P') || (pole[i2][j2]=='R') || (pole[i2][j2]=='N') || (pole[i2][j2]=='B') || (pole[i2][j2]=='Q') || (pole[i2][j2]=='K'))
			{	
				cout << "\n ERROR: You can't move your figure on your figures \n \n"; 
				d=0;
			}
		break;
		case 1 : 
			if ((pole[i2][j2]=='p') || (pole[i2][j2]=='r') || (pole[i2][j2]=='n') || (pole[i2][j2]=='b') || (pole[i2][j2]=='q') || (pole[i2][j2]=='k'))
			{
				cout << "\n ERROR: You can't move your figure on your figures \n \n"; 
				d=0;
			}
		break;
	}
	return d;
}
