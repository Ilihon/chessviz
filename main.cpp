#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <iostream>
#include <string.h>

using namespace std;

void ChessField(char pole[][9])
{
  for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
          cout << setw(2) << pole[i][j];
      }
    cout << endl;
  }
	
}

int main(){ 
  char pole [9][9]={
    {'8','r','n','b','q','k','b','n','r'},
    {'7','p','p','p','p','p','p','p','p'},
    {'6',' ',' ',' ',' ',' ',' ',' ',' '},
    {'5',' ',' ',' ',' ',' ',' ',' ',' '},
    {'4',' ',' ',' ',' ',' ',' ',' ',' '},
    {'3',' ',' ',' ',' ',' ',' ',' ',' '},
    {'2','P','P','P','P','P','P','P','P'},
    {'1','R','N','B','Q','K','B','N','R'},
    {' ','a','b','c','d','e','f','g','h'}
  };
  ChessField(pole);
  int win =0;
  int i1,i2,j1,j2;
  	
  while(win == 0)
  {
  				
	cout << endl;
  	i1=9; i2=9; j1=0; j2=0;
  	char  step[5],men;
  	gets (step);
  	if (step[0]==NULL) break;
  	switch(step[0])
		{
		case 'a' : j1=1; break;
		case 'b' : j1=2; break;
		case 'c' : j1=3; break;
		case 'd' : j1=4; break;
		case 'e' : j1=5; break;
		case 'f' : j1=6; break;
		case 'g' : j1=7; break;
		case 'h' : j1=8; break;
		default:  break;
		}
	switch(step[1])
		{
		case '1' : i1=7; break;
		case '2' : i1=6; break;
		case '3' : i1=5; break;
		case '4' : i1=4; break;
		case '5' : i1=3; break;
		case '6' : i1=2; break;
		case '7' : i1=1; break;
		case '8' : i1=0; break;
		default: break;
		}
	switch(step[3])
		{	
		case 'a' : j2=1; break;
		case 'b' : j2=2; break;
		case 'c' : j2=3; break;
		case 'd' : j2=4; break;
		case 'e' : j2=5; break;
		case 'f' : j2=6; break;
		case 'g' : j2=7; break;
		case 'h' : j2=8; break;
		default: break;
		}
	switch(step[4])
		{
		case '1' : i2=7; break;
		case '2' : i2=6; break;
		case '3' : i2=5; break;
		case '4' : i2=4; break;
		case '5' : i2=3; break;
		case '6' : i2=2; break;
		case '7' : i2=1; break;
		case '8' : i2=0; break;
		default: break;
		}
	cout << endl;
		cout << j1;
		cout << i1;
		cout << j2;
		cout << i2;	
		
	men=pole[i1][j1];
	pole[i1][j1]=' ';
	pole[i2][j2]=men;

	cout << endl;
	ChessField(pole);
  }
  return 0;
}
