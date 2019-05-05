#ifndef BOARD_H
#define BOARD_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include <iostream>

using namespace std;

void ChessField(char pole[][9]);
void Move(char pole[][9], int* team);
int MoveCheck(int team, int i1, int i2, int j1, int j2, char pole[][9]);
int FriendlyFire(int side, int i2, int j2, char pole[][9]);
int AttackArea(int team, int area, int i2, int j2, char pole[][9]);

#endif
