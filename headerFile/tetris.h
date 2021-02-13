#ifndef TETRIS_H
#define TETRIS_H

#include "struct.h"

#define SPACE 32
#define UP 65
#define DOWN 66
#define LEFT 67
#define RIGHT 68

void create_Board(tetris* t);

void new_Block(tetris* t);

void tetris_Print(tetris* t);

void setting_Tetris(tetris* t, int width, int height);

void rotate_Block(tetris* t);

int hittest_block(tetris* t);

void carveblock(tetris* t);

int move_block(tetris* t, int direction);

void block_Gravity(tetris* t);

void check_line(tetris* t);

void remove_line(tetris* t, int line);

void debug_new_Block(tetris* t);

#endif