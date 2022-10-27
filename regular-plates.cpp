#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string formatNumber(int num, int limit) {
    if(limit == 2 && num < 10) {
        return "0" + to_string(num);
    }
    else if(limit == 2 && num >= 10) {
        return to_string(num);
    }
    else if(limit == 3 && num < 10) {
        return "00" + to_string(num);
    }
    else if(limit == 3 && num < 100) {
        return "0" + to_string(num);
    }
    else {
        return to_string(num);
    }
}

int main() {

    ofstream RegularPlatesFile("regular-plates.txt");
    string plate = "";
    string plateChars[7] = {"A", "E", "O", "J", "K", "M", "T"};

    for(int i=0; i<7; i++) {
        for (int j=0; j<100; j++) {
            for (int k=0; k<7; k++) {
                for (int l=0; l<1000; l++) {
                    plate = plateChars[i];
                    plate += formatNumber(j, 2);
                    plate += "-";
                    plate += plateChars[k];
                    plate += "-";
                    plate += formatNumber(l, 3);
                    RegularPlatesFile << plate << endl;
                }
            }
        }
    }

    RegularPlatesFile.close();

    return 0;
}
