#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string formatNumber(int num) {
    if(num < 10) {
        return "00000" + to_string(num);
    }
    else if(num < 100) {
        return "0000" + to_string(num);
    }
    else if(num < 1000) {
        return "000" + to_string(num);
    }
    else if(num < 10000) {
        return "00" + to_string(num);
    }
    else if(num < 100000) {
        return "0" + to_string(num);
    }
    else {
        return to_string(num);
    }
}

int main() {

    ofstream TaxiPlatesFile("taxi-plates.txt");
    string plate = "";

    for(int i=0; i<= 999999; i++) {
        plate = "TA-" + formatNumber(i);
        TaxiPlatesFile << plate << endl;
    }

    TaxiPlatesFile.close();

    return 0;
}
