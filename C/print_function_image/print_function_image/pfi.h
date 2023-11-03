#pragma once
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

#define ROW 20
#define COL 20

void InitBoard(char board[2*ROW+1][2*COL+1], int row, int col);
void DisplayBoard(char board[2*ROW+1][2*COL+1], int row, int col);