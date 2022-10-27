#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string formatNumber(int num) {
    if(num < 10) {
        return "00" + to_string(num);
    }
    else if(num < 100) {
        return "0" + to_string(num);
    }
    else {
        return to_string(num);
    }
}

int main() {

    ofstream DiplomaticPlatesFile("diplomatic-plates.txt");
    string plate = "";
    string plateChars[4] = {"A", "C", "M", "E"};
    string plateDiplomaticCodes[92] = {"10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "0100", "0102", "0103", "0119"};
    
    // 00-A-000

    for(int i=0; i<92; i++) {
        for (int j=0; j<3; j++) {
            for (int k=0; k<1000; k++) {
                plate = plateDiplomaticCodes[i];
                plate += "-";
                plate += plateChars[j];
                plate += "-";
                plate += formatNumber(k);
                DiplomaticPlatesFile << plate << endl;
            }
        }
    }

    DiplomaticPlatesFile.close();

    return 0;
}
