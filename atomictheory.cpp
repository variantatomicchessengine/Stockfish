#include "evaluate.h"

#include <cstring>

namespace Eval {

	theoryItem atomictheoryItems[THEORY_MASK+1];

	void initatomictheory() {

		std::memset(atomictheoryItems, 0, sizeof(atomictheoryItems));

		atomictheoryItems[9678].key=893663900993594830ULL;
		atomictheoryItems[9678].goodForWhite=0;
		atomictheoryItems[9678].goodForBlack=20;
		atomictheoryItems[9678].ply=22;
		atomictheoryItems[18960].key=15756994021217552912ULL;
		atomictheoryItems[18960].goodForWhite=0;
		atomictheoryItems[18960].goodForBlack=20;
		atomictheoryItems[18960].ply=8;
		atomictheoryItems[30010].key=2222212895953941818ULL;
		atomictheoryItems[30010].goodForWhite=0;
		atomictheoryItems[30010].goodForBlack=20;
		atomictheoryItems[30010].ply=44;
		atomictheoryItems[82916].key=8246454382982415332ULL;
		atomictheoryItems[82916].goodForWhite=0;
		atomictheoryItems[82916].goodForBlack=20;
		atomictheoryItems[82916].ply=22;
		atomictheoryItems[85043].key=4607847291367279667ULL;
		atomictheoryItems[85043].goodForWhite=0;
		atomictheoryItems[85043].goodForBlack=20;
		atomictheoryItems[85043].ply=12;
		atomictheoryItems[94734].key=10169637681113428494ULL;
		atomictheoryItems[94734].goodForWhite=0;
		atomictheoryItems[94734].goodForBlack=20;
		atomictheoryItems[94734].ply=26;
		atomictheoryItems[101391].key=9498629746526882831ULL;
		atomictheoryItems[101391].goodForWhite=0;
		atomictheoryItems[101391].goodForBlack=20;
		atomictheoryItems[101391].ply=20;
		atomictheoryItems[120526].key=10492595276165011150ULL;
		atomictheoryItems[120526].goodForWhite=0;
		atomictheoryItems[120526].goodForBlack=20;
		atomictheoryItems[120526].ply=28;
		atomictheoryItems[127997].key=10353043425666921469ULL;
		atomictheoryItems[127997].goodForWhite=0;
		atomictheoryItems[127997].goodForBlack=20;
		atomictheoryItems[127997].ply=52;
		atomictheoryItems[150992].key=9132962153586904528ULL;
		atomictheoryItems[150992].goodForWhite=0;
		atomictheoryItems[150992].goodForBlack=20;
		atomictheoryItems[150992].ply=14;
		atomictheoryItems[168537].key=8522098739002905177ULL;
		atomictheoryItems[168537].goodForWhite=0;
		atomictheoryItems[168537].goodForBlack=20;
		atomictheoryItems[168537].ply=32;
		atomictheoryItems[169323].key=14853092802257130859ULL;
		atomictheoryItems[169323].goodForWhite=0;
		atomictheoryItems[169323].goodForBlack=20;
		atomictheoryItems[169323].ply=10;
		atomictheoryItems[174857].key=15068162942988102409ULL;
		atomictheoryItems[174857].goodForWhite=0;
		atomictheoryItems[174857].goodForBlack=20;
		atomictheoryItems[174857].ply=28;
		atomictheoryItems[176927].key=8158449299938784031ULL;
		atomictheoryItems[176927].goodForWhite=20;
		atomictheoryItems[176927].goodForBlack=0;
		atomictheoryItems[176927].ply=3;
		atomictheoryItems[182571].key=9945109962983393579ULL;
		atomictheoryItems[182571].goodForWhite=0;
		atomictheoryItems[182571].goodForBlack=20;
		atomictheoryItems[182571].ply=34;
		atomictheoryItems[192210].key=17521242372845006546ULL;
		atomictheoryItems[192210].goodForWhite=20;
		atomictheoryItems[192210].goodForBlack=0;
		atomictheoryItems[192210].ply=7;
		atomictheoryItems[193073].key=6739464964604621361ULL;
		atomictheoryItems[193073].goodForWhite=0;
		atomictheoryItems[193073].goodForBlack=20;
		atomictheoryItems[193073].ply=36;
		atomictheoryItems[195712].key=2160141444094033024ULL;
		atomictheoryItems[195712].goodForWhite=0;
		atomictheoryItems[195712].goodForBlack=20;
		atomictheoryItems[195712].ply=16;
		atomictheoryItems[203410].key=5236677942088768146ULL;
		atomictheoryItems[203410].goodForWhite=0;
		atomictheoryItems[203410].goodForBlack=20;
		atomictheoryItems[203410].ply=26;
		atomictheoryItems[213801].key=13029772240215032617ULL;
		atomictheoryItems[213801].goodForWhite=20;
		atomictheoryItems[213801].goodForBlack=0;
		atomictheoryItems[213801].ply=0;
		atomictheoryItems[218943].key=11059902185497384767ULL;
		atomictheoryItems[218943].goodForWhite=0;
		atomictheoryItems[218943].goodForBlack=20;
		atomictheoryItems[218943].ply=28;
		atomictheoryItems[229907].key=6776550732133007891ULL;
		atomictheoryItems[229907].goodForWhite=20;
		atomictheoryItems[229907].goodForBlack=0;
		atomictheoryItems[229907].ply=1;
		atomictheoryItems[256913].key=15639417302085266321ULL;
		atomictheoryItems[256913].goodForWhite=0;
		atomictheoryItems[256913].goodForBlack=20;
		atomictheoryItems[256913].ply=30;
		atomictheoryItems[260654].key=16171366054048823854ULL;
		atomictheoryItems[260654].goodForWhite=0;
		atomictheoryItems[260654].goodForBlack=20;
		atomictheoryItems[260654].ply=34;
		atomictheoryItems[265972].key=9920362528980078324ULL;
		atomictheoryItems[265972].goodForWhite=20;
		atomictheoryItems[265972].goodForBlack=0;
		atomictheoryItems[265972].ply=9;
		atomictheoryItems[288589].key=17851474626581129037ULL;
		atomictheoryItems[288589].goodForWhite=0;
		atomictheoryItems[288589].goodForBlack=20;
		atomictheoryItems[288589].ply=32;
		atomictheoryItems[294318].key=10631874913994309038ULL;
		atomictheoryItems[294318].goodForWhite=0;
		atomictheoryItems[294318].goodForBlack=20;
		atomictheoryItems[294318].ply=18;
		atomictheoryItems[325690].key=6781869392856938554ULL;
		atomictheoryItems[325690].goodForWhite=0;
		atomictheoryItems[325690].goodForBlack=20;
		atomictheoryItems[325690].ply=40;
		atomictheoryItems[385100].key=16317681594904469580ULL;
		atomictheoryItems[385100].goodForWhite=0;
		atomictheoryItems[385100].goodForBlack=20;
		atomictheoryItems[385100].ply=42;
		atomictheoryItems[411768].key=6929008203835787384ULL;
		atomictheoryItems[411768].goodForWhite=0;
		atomictheoryItems[411768].goodForBlack=20;
		atomictheoryItems[411768].ply=22;
		atomictheoryItems[415079].key=54204775493162343ULL;
		atomictheoryItems[415079].goodForWhite=0;
		atomictheoryItems[415079].goodForBlack=20;
		atomictheoryItems[415079].ply=20;
		atomictheoryItems[431563].key=12536726705287894475ULL;
		atomictheoryItems[431563].goodForWhite=0;
		atomictheoryItems[431563].goodForBlack=20;
		atomictheoryItems[431563].ply=26;
		atomictheoryItems[449311].key=11203856656883964703ULL;
		atomictheoryItems[449311].goodForWhite=0;
		atomictheoryItems[449311].goodForBlack=20;
		atomictheoryItems[449311].ply=48;
		atomictheoryItems[473442].key=16562033682065865058ULL;
		atomictheoryItems[473442].goodForWhite=0;
		atomictheoryItems[473442].goodForBlack=20;
		atomictheoryItems[473442].ply=28;
		atomictheoryItems[478704].key=9128983043251850736ULL;
		atomictheoryItems[478704].goodForWhite=0;
		atomictheoryItems[478704].goodForBlack=20;
		atomictheoryItems[478704].ply=50;
		atomictheoryItems[518463].key=16172537713186564415ULL;
		atomictheoryItems[518463].goodForWhite=0;
		atomictheoryItems[518463].goodForBlack=20;
		atomictheoryItems[518463].ply=24;
		atomictheoryItems[543001].key=5785916639253383449ULL;
		atomictheoryItems[543001].goodForWhite=0;
		atomictheoryItems[543001].goodForBlack=20;
		atomictheoryItems[543001].ply=32;
		atomictheoryItems[544341].key=8576740485627399765ULL;
		atomictheoryItems[544341].goodForWhite=0;
		atomictheoryItems[544341].goodForBlack=20;
		atomictheoryItems[544341].ply=12;
		atomictheoryItems[545378].key=15937386747390349922ULL;
		atomictheoryItems[545378].goodForWhite=0;
		atomictheoryItems[545378].goodForBlack=20;
		atomictheoryItems[545378].ply=20;
		atomictheoryItems[557603].key=16889239366924796451ULL;
		atomictheoryItems[557603].goodForWhite=20;
		atomictheoryItems[557603].goodForBlack=0;
		atomictheoryItems[557603].ply=5;
		atomictheoryItems[570739].key=5920184153184712051ULL;
		atomictheoryItems[570739].goodForWhite=20;
		atomictheoryItems[570739].goodForBlack=0;
		atomictheoryItems[570739].ply=5;
		atomictheoryItems[576118].key=16115648647356009078ULL;
		atomictheoryItems[576118].goodForWhite=0;
		atomictheoryItems[576118].goodForBlack=20;
		atomictheoryItems[576118].ply=14;
		atomictheoryItems[589738].key=4259756130910666666ULL;
		atomictheoryItems[589738].goodForWhite=0;
		atomictheoryItems[589738].goodForBlack=20;
		atomictheoryItems[589738].ply=24;
		atomictheoryItems[598458].key=8331452557927457210ULL;
		atomictheoryItems[598458].goodForWhite=0;
		atomictheoryItems[598458].goodForBlack=20;
		atomictheoryItems[598458].ply=16;
		atomictheoryItems[609031].key=10714894682937707271ULL;
		atomictheoryItems[609031].goodForWhite=0;
		atomictheoryItems[609031].goodForBlack=20;
		atomictheoryItems[609031].ply=16;
		atomictheoryItems[619664].key=1408282020219024528ULL;
		atomictheoryItems[619664].goodForWhite=0;
		atomictheoryItems[619664].goodForBlack=20;
		atomictheoryItems[619664].ply=28;
		atomictheoryItems[624582].key=15526316789106051014ULL;
		atomictheoryItems[624582].goodForWhite=0;
		atomictheoryItems[624582].goodForBlack=20;
		atomictheoryItems[624582].ply=24;
		atomictheoryItems[625125].key=13230551250020960741ULL;
		atomictheoryItems[625125].goodForWhite=0;
		atomictheoryItems[625125].goodForBlack=20;
		atomictheoryItems[625125].ply=4;
		atomictheoryItems[626243].key=18426842972507704899ULL;
		atomictheoryItems[626243].goodForWhite=0;
		atomictheoryItems[626243].goodForBlack=20;
		atomictheoryItems[626243].ply=38;
		atomictheoryItems[627788].key=16299174952871498828ULL;
		atomictheoryItems[627788].goodForWhite=0;
		atomictheoryItems[627788].goodForBlack=20;
		atomictheoryItems[627788].ply=34;
		atomictheoryItems[634140].key=5001811132064312604ULL;
		atomictheoryItems[634140].goodForWhite=0;
		atomictheoryItems[634140].goodForBlack=20;
		atomictheoryItems[634140].ply=30;
		atomictheoryItems[635895].key=894064199144682487ULL;
		atomictheoryItems[635895].goodForWhite=0;
		atomictheoryItems[635895].goodForBlack=20;
		atomictheoryItems[635895].ply=6;
		atomictheoryItems[638069].key=1401367798681812085ULL;
		atomictheoryItems[638069].goodForWhite=0;
		atomictheoryItems[638069].goodForBlack=20;
		atomictheoryItems[638069].ply=2;
		atomictheoryItems[646639].key=11273544341075385839ULL;
		atomictheoryItems[646639].goodForWhite=0;
		atomictheoryItems[646639].goodForBlack=20;
		atomictheoryItems[646639].ply=26;
		atomictheoryItems[661292].key=12017637649440970540ULL;
		atomictheoryItems[661292].goodForWhite=0;
		atomictheoryItems[661292].goodForBlack=20;
		atomictheoryItems[661292].ply=22;
		atomictheoryItems[676012].key=12153321737443496108ULL;
		atomictheoryItems[676012].goodForWhite=0;
		atomictheoryItems[676012].goodForBlack=20;
		atomictheoryItems[676012].ply=14;
		atomictheoryItems[677783].key=1034879733555943319ULL;
		atomictheoryItems[677783].goodForWhite=0;
		atomictheoryItems[677783].goodForBlack=20;
		atomictheoryItems[677783].ply=14;
		atomictheoryItems[687679].key=17846524584818015807ULL;
		atomictheoryItems[687679].goodForWhite=0;
		atomictheoryItems[687679].goodForBlack=20;
		atomictheoryItems[687679].ply=36;
		atomictheoryItems[704721].key=17739241547814846673ULL;
		atomictheoryItems[704721].goodForWhite=0;
		atomictheoryItems[704721].goodForBlack=20;
		atomictheoryItems[704721].ply=53;
		atomictheoryItems[709556].key=12032594192761541556ULL;
		atomictheoryItems[709556].goodForWhite=0;
		atomictheoryItems[709556].goodForBlack=20;
		atomictheoryItems[709556].ply=16;
		atomictheoryItems[709775].key=2736351170188431ULL;
		atomictheoryItems[709775].goodForWhite=0;
		atomictheoryItems[709775].goodForBlack=20;
		atomictheoryItems[709775].ply=12;
		atomictheoryItems[719588].key=15978015883537349348ULL;
		atomictheoryItems[719588].goodForWhite=0;
		atomictheoryItems[719588].goodForBlack=20;
		atomictheoryItems[719588].ply=18;
		atomictheoryItems[720438].key=927227276679642678ULL;
		atomictheoryItems[720438].goodForWhite=0;
		atomictheoryItems[720438].goodForBlack=20;
		atomictheoryItems[720438].ply=36;
		atomictheoryItems[721624].key=7237600506328842968ULL;
		atomictheoryItems[721624].goodForWhite=0;
		atomictheoryItems[721624].goodForBlack=20;
		atomictheoryItems[721624].ply=24;
		atomictheoryItems[728033].key=647944876048718817ULL;
		atomictheoryItems[728033].goodForWhite=0;
		atomictheoryItems[728033].goodForBlack=20;
		atomictheoryItems[728033].ply=17;
		atomictheoryItems[750567].key=1853834646093788135ULL;
		atomictheoryItems[750567].goodForWhite=0;
		atomictheoryItems[750567].goodForBlack=20;
		atomictheoryItems[750567].ply=40;
		atomictheoryItems[770915].key=3752750025884287843ULL;
		atomictheoryItems[770915].goodForWhite=0;
		atomictheoryItems[770915].goodForBlack=20;
		atomictheoryItems[770915].ply=54;
		atomictheoryItems[781062].key=9043102841084570374ULL;
		atomictheoryItems[781062].goodForWhite=0;
		atomictheoryItems[781062].goodForBlack=20;
		atomictheoryItems[781062].ply=24;
		atomictheoryItems[781384].key=5357634346847824968ULL;
		atomictheoryItems[781384].goodForWhite=0;
		atomictheoryItems[781384].goodForBlack=20;
		atomictheoryItems[781384].ply=6;
		atomictheoryItems[788291].key=8278285311792645955ULL;
		atomictheoryItems[788291].goodForWhite=0;
		atomictheoryItems[788291].goodForBlack=20;
		atomictheoryItems[788291].ply=20;
		atomictheoryItems[841163].key=16983779824002454987ULL;
		atomictheoryItems[841163].goodForWhite=0;
		atomictheoryItems[841163].goodForBlack=20;
		atomictheoryItems[841163].ply=46;
		atomictheoryItems[862055].key=13203912137016944487ULL;
		atomictheoryItems[862055].goodForWhite=0;
		atomictheoryItems[862055].goodForBlack=20;
		atomictheoryItems[862055].ply=4;
		atomictheoryItems[875474].key=6958967365961604050ULL;
		atomictheoryItems[875474].goodForWhite=0;
		atomictheoryItems[875474].goodForBlack=20;
		atomictheoryItems[875474].ply=18;
		atomictheoryItems[901629].key=12860303988701905405ULL;
		atomictheoryItems[901629].goodForWhite=0;
		atomictheoryItems[901629].goodForBlack=20;
		atomictheoryItems[901629].ply=8;
		atomictheoryItems[911934].key=5680695291986963006ULL;
		atomictheoryItems[911934].goodForWhite=0;
		atomictheoryItems[911934].goodForBlack=20;
		atomictheoryItems[911934].ply=30;
		atomictheoryItems[917143].key=7614687640414977687ULL;
		atomictheoryItems[917143].goodForWhite=0;
		atomictheoryItems[917143].goodForBlack=20;
		atomictheoryItems[917143].ply=16;
		atomictheoryItems[919546].key=15131391583563155450ULL;
		atomictheoryItems[919546].goodForWhite=0;
		atomictheoryItems[919546].goodForBlack=20;
		atomictheoryItems[919546].ply=14;
		atomictheoryItems[924183].key=4879250068921522711ULL;
		atomictheoryItems[924183].goodForWhite=0;
		atomictheoryItems[924183].goodForBlack=20;
		atomictheoryItems[924183].ply=38;
		atomictheoryItems[933489].key=7460973668342840945ULL;
		atomictheoryItems[933489].goodForWhite=0;
		atomictheoryItems[933489].goodForBlack=20;
		atomictheoryItems[933489].ply=16;
		atomictheoryItems[944129].key=14078871637743003649ULL;
		atomictheoryItems[944129].goodForWhite=0;
		atomictheoryItems[944129].goodForBlack=20;
		atomictheoryItems[944129].ply=22;
		atomictheoryItems[1008515].key=12533025108463149955ULL;
		atomictheoryItems[1008515].goodForWhite=20;
		atomictheoryItems[1008515].goodForBlack=0;
		atomictheoryItems[1008515].ply=7;
		atomictheoryItems[1018024].key=2041662757626939560ULL;
		atomictheoryItems[1018024].goodForWhite=20;
		atomictheoryItems[1018024].goodForBlack=0;
		atomictheoryItems[1018024].ply=11;
		atomictheoryItems[1021128].key=708554042425447624ULL;
		atomictheoryItems[1021128].goodForWhite=0;
		atomictheoryItems[1021128].goodForBlack=20;
		atomictheoryItems[1021128].ply=26;
		atomictheoryItems[1044789].key=964725348599066933ULL;
		atomictheoryItems[1044789].goodForWhite=0;
		atomictheoryItems[1044789].goodForBlack=20;
		atomictheoryItems[1044789].ply=18;

	}

}

