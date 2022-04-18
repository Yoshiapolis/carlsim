#ifndef ZOBRIST_H

#define ZOBRIST_H

#include "Defines.h"
#include "Types.h"
#include <stdlib.h>
#include <time.h>

extern ZobristKey g_zPieceSquareKeys[12][64];
extern ZobristKey g_zBlackToMoveKey;
extern ZobristKey g_zCastleKeys[16];
extern ZobristKey g_zEpFileKeys[8];

void z_init();
void z_getKey(Board *board_p, ZobristKey *key);
void z_hashGameState(uint16_t state, ZobristKey *key);

#endif