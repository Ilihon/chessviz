#include "../src/board.h"
#include "gtest/gtest.h"
#include <string>

char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                   {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                   {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                   {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                   {' ', 'a', '6', 'c', 'd', 'e', 'f', 'g', 'h'}};

TEST(W_Peshka, Correct_P_forward1cell)
{
    int i1 = 6, j1 = 5, i2 = 5, j2 = 5;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(W_Peshka, Correct_P_forward2cell)
{
    int i1 = 6, j1 = 5, i2 = 4, j2 = 5;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(W_Peshka, Correct_P_attack)
{
    int i1 = 6, j1 = 4, i2 = 5, j2 = 5;
    pole[5][5] = 'r';
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[5][5] = ' ';
    EXPECT_EQ(expected, result);
}

TEST(B_Peshka, Correct_p_forward1cell)
{
    int i1 = 1, j1 = 5, i2 = 2, j2 = 5;
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(B_Peshka, Correct_p_forward2cell)
{
    int i1 = 1, j1 = 5, i2 = 3, j2 = 5;
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(B_Peshka, Correct_p_attack)
{
    int i1 = 1, j1 = 5, i2 = 2, j2 = 4;
    pole[2][4] = 'R';
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[2][4] = 'R';
    EXPECT_EQ(expected, result);
}

TEST(W_Rook, Correct_R_left)
{
    int i1 = 7, j1 = 1, i2 = 5, j2 = 1;
    pole[6][1] = ' ';
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[6][1] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(W_Rook, Correct_R_right)
{
    int i1 = 7, j1 = 8, i2 = 5, j2 = 8;
    pole[6][8] = ' ';
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[6][8] = 'P';
    EXPECT_EQ(expected, result);
}

TEST(B_Rook, Correct_r_left)
{
    int i1 = 0, j1 = 1, i2 = 2, j2 = 1;
    pole[1][1] = ' ';
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[1][2] = 'p';
    EXPECT_EQ(expected, result);
}
TEST(B_Rook, Correct_r_right)
{
    int i1 = 0, j1 = 8, i2 = 2, j2 = 8;
    pole[1][8] = ' ';
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[1][8] = 'P';
    EXPECT_EQ(expected, result);
}

TEST(W_Horse, Correct_H_left)
{
    int i1 = 7, j1 = 2, i2 = 5, j2 = 3;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(W_Horse, Correct_H_right)
{
    int i1 = 7, j1 = 7, i2 = 5, j2 = 6;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(B_Horse, Correct_h_left)
{
    int i1 = 0, j1 = 2, i2 = 2, j2 = 3;
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}
TEST(B_Horse, Correct_h_right)
{
    int i1 = 0, j1 = 7, i2 = 2, j2 = 6;
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    EXPECT_EQ(expected, result);
}

TEST(W_Bishop, Correct_B_left)
{
    pole[6][4] = ' ';
    int i1 = 7, j1 = 3, i2 = 5, j2 = 5;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[6][4] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(W_Bishop, Correct_B_right)
{
    pole[6][5] = ' ';
    int i1 = 7, j1 = 6, i2 = 5, j2 = 4;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[6][5] = 'P';
    EXPECT_EQ(expected, result);
}

TEST(B_Bishop, Correct_b_left)
{
    pole[1][4] = ' ';
    int i1 = 0, j1 = 3, i2 = 2, j2 = 5;
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[1][4] = 'p';
    EXPECT_EQ(expected, result);
}
TEST(B_Bishop, Correct_b_right)
{
    pole[1][5] = ' ';
    int i1 = 0, j1 = 6, i2 = 2, j2 = 4;
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[1][5] = 'p';
    EXPECT_EQ(expected, result);
}

TEST(W_Queen, Correct_Q)
{
    pole[6][4] = ' ';
    int i1 = 7, j1 = 4, i2 = 5, j2 = 4;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[6][4] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(B_Queen, Correct_q)
{
    pole[1][4] = ' ';
    int i1 = 0, j1 = 4, i2 = 2, j2 = 4;
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[1][4] = 'p';
    EXPECT_EQ(expected, result);
}

TEST(W_King, Correct_K)
{
    pole[6][5] = ' ';
    int i1 = 7, j1 = 5, i2 = 6, j2 = 5;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[6][5] = 'P';
    EXPECT_EQ(expected, result);
}
TEST(B_King, Correct_k)
{
    pole[1][5] = ' ';
    int i1 = 0, j1 = 5, i2 = 1, j2 = 5;
    int result = MoveCheck(1, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[1][5] = 'p';
    EXPECT_EQ(expected, result);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
