#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define _CRT_SECURE_NO_WARNINGS 1

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//IsWin：
//玩家赢了：*
//电脑赢了：#
//平局：Q
//游戏继续：C
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);