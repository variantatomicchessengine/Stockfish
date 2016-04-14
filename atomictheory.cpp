#include "evaluate.h"

#include <cstring>

namespace Eval {

	theoryItem atomictheoryItems[THEORY_MASK+1];

	void initatomictheory() {

		std::memset(atomictheoryItems, 0, sizeof(atomictheoryItems));

		atomictheoryItems[18960].key=15756994021217552912ULL;
		atomictheoryItems[18960].goodForWhite=0;
		atomictheoryItems[18960].goodForBlack=20;
		atomictheoryItems[18960].ply=8;
		atomictheoryItems[169323].key=14853092802257130859ULL;
		atomictheoryItems[169323].goodForWhite=0;
		atomictheoryItems[169323].goodForBlack=20;
		atomictheoryItems[169323].ply=10;
		atomictheoryItems[176927].key=8158449299938784031ULL;
		atomictheoryItems[176927].goodForWhite=20;
		atomictheoryItems[176927].goodForBlack=0;
		atomictheoryItems[176927].ply=3;
		atomictheoryItems[195712].key=2160141444094033024ULL;
		atomictheoryItems[195712].goodForWhite=0;
		atomictheoryItems[195712].goodForBlack=20;
		atomictheoryItems[195712].ply=16;
		atomictheoryItems[213801].key=13029772240215032617ULL;
		atomictheoryItems[213801].goodForWhite=20;
		atomictheoryItems[213801].goodForBlack=0;
		atomictheoryItems[213801].ply=0;
		atomictheoryItems[229907].key=6776550732133007891ULL;
		atomictheoryItems[229907].goodForWhite=20;
		atomictheoryItems[229907].goodForBlack=0;
		atomictheoryItems[229907].ply=1;
		atomictheoryItems[265972].key=9920362528980078324ULL;
		atomictheoryItems[265972].goodForWhite=20;
		atomictheoryItems[265972].goodForBlack=0;
		atomictheoryItems[265972].ply=9;
		atomictheoryItems[557603].key=16889239366924796451ULL;
		atomictheoryItems[557603].goodForWhite=20;
		atomictheoryItems[557603].goodForBlack=0;
		atomictheoryItems[557603].ply=5;
		atomictheoryItems[625125].key=13230551250020960741ULL;
		atomictheoryItems[625125].goodForWhite=0;
		atomictheoryItems[625125].goodForBlack=20;
		atomictheoryItems[625125].ply=4;
		atomictheoryItems[638069].key=1401367798681812085ULL;
		atomictheoryItems[638069].goodForWhite=0;
		atomictheoryItems[638069].goodForBlack=20;
		atomictheoryItems[638069].ply=2;
		atomictheoryItems[676012].key=12153321737443496108ULL;
		atomictheoryItems[676012].goodForWhite=0;
		atomictheoryItems[676012].goodForBlack=20;
		atomictheoryItems[676012].ply=14;
		atomictheoryItems[709775].key=2736351170188431ULL;
		atomictheoryItems[709775].goodForWhite=0;
		atomictheoryItems[709775].goodForBlack=20;
		atomictheoryItems[709775].ply=12;
		atomictheoryItems[781384].key=5357634346847824968ULL;
		atomictheoryItems[781384].goodForWhite=0;
		atomictheoryItems[781384].goodForBlack=20;
		atomictheoryItems[781384].ply=6;
		atomictheoryItems[1008515].key=12533025108463149955ULL;
		atomictheoryItems[1008515].goodForWhite=20;
		atomictheoryItems[1008515].goodForBlack=0;
		atomictheoryItems[1008515].ply=7;
		atomictheoryItems[1018024].key=2041662757626939560ULL;
		atomictheoryItems[1018024].goodForWhite=20;
		atomictheoryItems[1018024].goodForBlack=0;
		atomictheoryItems[1018024].ply=11;

	}

}

