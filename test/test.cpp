#define CTEST_MAIN


#include "board.h"
#include <ctest.h>

int  n=9, m=9;

char pole [9][9]={
    {'8','r','n','b','q','k','b','n','r'},
    {'7','p','p','p','p','p','p','p','p'},
    {'6',' ',' ',' ',' ',' ',' ',' ',' '},
    {'5',' ',' ',' ',' ',' ',' ',' ',' '},
    {'4',' ',' ',' ',' ',' ',' ',' ',' '},
    {'3',' ',' ',' ',' ',' ',' ',' ',' '},
    {'2','P','P','P','P','P','P','P','P'},
    {'1','R','N','B','Q','K','B','N','R'},
    {' ','a','6','c','d','e','f','g','h'}
  };

CTEST (W_Peshka, Correct_P_forward1)
{
    int i1=6,j1=5,i2=5,j2=5;
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
CTEST (W_Peshka, Correct_P_forward2)
{
    int i1=6,j1=5,i2=4,j2=5;
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
CTEST (W_Peshka, Correct_P_attack)
{
    int i1=6,j1=5,i2=4,j2=4;
    pole[4][4]='r';
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    pole[4][4]=' ';
    ASSERT_EQUAL(expected, result);
}

CTEST (B_Peshka, Correct_p_forward1)
{
    int i1=1,j1=5,i2=2,j2=5;
    int result=MoveCheck(1, i1, i2, j1, j2, pole);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
CTEST (B_Peshka, Correct_p_forward2)
{
    int i1=1,j1=5,i2=3,j2=5;
    int result=MoveCheck(1, i1, i2, j1, j2, pole);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
CTEST (B_Peshka, Correct_p_attack)
{
    int i1=1,j1=5,i2=2,j2=4;
    pole[2][4]='R';
    int result=MoveCheck(1, i1, i2, j1, j2, pole);
    int expected=1;
    pole[2][4]='R';
    ASSERT_EQUAL(expected, result);
}


CTEST (W_Rook1, Correct_R1)
{
    int i1=7,j1=2,i2=5,j2=2;
    pole[6][2]=' ';
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    pole[6][2]='P';
    ASSERT_EQUAL(expected, result);
}
CTEST (W_Rook2, Correct_R2)
{
    int i1=7,j1=8,i2=5,j2=8;
    pole[6][8]=' ';
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    pole[6][8]='P';
    ASSERT_EQUAL(expected, result);
}

CTEST (B_Rook1, Correct_r1)
{
    int i1=0,j1=2,i2=2,j2=2;
    pole[1][2]=' ';
    int result=MoveCheck(1, i1, i2, j1, j2, pole);
    int expected=1;
    pole[1][2]='p';
    ASSERT_EQUAL(expected, result);
}
CTEST (B_Rook2, Correct_r2)
{
    int i1=0,j1=8,i2=2,j2=8;
    pole[1][8]=' ';
    int result=MoveCheck(1, i1, i2, j1, j2, pole);
    int expected=1;
    pole[1][8]='P';
    ASSERT_EQUAL(expected, result);
}

CTEST (W_Horse1, Correct_H1)
{
    int i1=7,j1=2,i2=5,j2=3;
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
CTEST (W_Horse2, Correct_H2)
{
    int i1=7,j1=7,i2=5,j2=6;
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}

CTEST (B_Horse1, Correct_h1)
{
    int i1=0,j1=2,i2=2,j2=3;
    int result=MoveCheck(1, i1, i2, j1, j2, pole);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
CTEST (B_Horse2, Correct_h2)
{
    int i1=0,j1=7,i2=2,j2=3;
    int result=MoveCheck(1, i1, i2, j1, j2, pole);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}


CTEST (W_Bishop1, Correct_B1)
{
    pole[6][4]=' ';
    int i1=7,j1=3,i2=5,j2=5;
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    pole[6][4]='P';
    ASSERT_EQUAL(expected, result);
}
CTEST (W_Bishop2, Correct_B2)
{
    pole[6][5]=' ';
    int i1=7,j1=6,i2=5,j2=4;
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    pole[6][5]='P';
    ASSERT_EQUAL(expected, result);
}

CTEST (B_Bishop1, Correct_b1)
{
    pole[1][4]=' ';
    int i1=0,j1=3,i2=2,j2=5;
    int result=MoveCheck(1, i1, i2, j1, j2, pole);
    int expected=1;
    pole[1][4]='p';
    ASSERT_EQUAL(expected, result);
}
CTEST (B_Bishop2, Correct_b2)
{
    pole[1][3]=' ';
    int i1=0,j1=6,i2=2,j2=4;
    int result=MoveCheck(1, i1, i2, j1, j2, pole);
    int expected=1;
    pole[1][3]='p';
    ASSERT_EQUAL(expected, result);
}


CTEST (W_Queen, Correct_Q)
{
    pole[6][4]=' ';
    int i1=7,j1=4,i2=5,j2=4;
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    pole[6][4]='P';
    ASSERT_EQUAL(expected, result);
}
CTEST (B_Queen, Correct_q)
{
    pole[1][4]=' ';
    int i1=0,j1=4,i2=2,j2=4;
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    pole[1][4]='p';
    ASSERT_EQUAL(expected, result);
}


CTEST (W_King, Correct_K)
{
    pole[6][5]=' ';
    int i1=7,j1=5,i2=6,j2=5;
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    pole[6][5]='P';
    ASSERT_EQUAL(expected, result);
}
CTEST (B_King, Correct_k)
{
    pole[1][5]=' ';
    int i1=0,j1=5,i2=1,j2=5;
    int result=MoveCheck(0, i1, i2, j1, j2, pole);
    int expected=1;
    pole[1][5]='p';
    ASSERT_EQUAL(expected, result);
}



