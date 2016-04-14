/*
  Stockfish, a UCI chess playing engine derived from Glaurung 2.1
  Copyright (C) 2004-2008 Tord Romstad (Glaurung author)
  Copyright (C) 2008-2015 Marco Costalba, Joona Kiiski, Tord Romstad
  Copyright (C) 2015-2016 Marco Costalba, Joona Kiiski, Gary Linscott, Tord Romstad

  Stockfish is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Stockfish is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef EVALUATE_H_INCLUDED
#define EVALUATE_H_INCLUDED

#include <string>

#include "types.h"

class Position;

namespace Eval {

const Value Tempo = Value(20); // Must be visible to search

std::string uint64_t_to_string(uint64_t u);
uint64_t string_to_uint64_t(std::string s);

struct theoryItem {
  uint64_t key;
  int goodForWhite;
  int goodForBlack;
  int ply;
  bool free() const;
};

const uint64_t THEORY_MASK = 0xFFFFF;

extern theoryItem theoryItems[THEORY_MASK+1];

#ifdef ATOMIC
extern theoryItem atomictheoryItems[THEORY_MASK+1];

extern void initatomictheory();
#endif

void loadTheory(std::string);
void saveTheory(std::string);

void init();
std::string trace(const Position& pos);

template<bool DoTrace = false>
Value evaluate(const Position& pos);
}

#ifdef ATOMIC
extern int ATOMIC_MOBILITY_BONUS;
extern int ATOMIC_KING_ATTACK_BONUS;
extern Score ATOMIC_PAWN_BONUS;
extern Score ATOMIC_QUEEN_BONUS;
#endif

extern int THEORY_BONUS;

#endif // #ifndef EVALUATE_H_INCLUDED
