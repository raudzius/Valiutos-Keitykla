#include <iostream>
#include <string>
#include <format>
using namespace std;

float GBP_Bendras = 0.8729;

string compareEurToOtherCurrency(float otherCurrency) {
    string text = format("1 EUR = %.2f GBP\n", "GBP_Bendras");
    return text;
}

int main() {
    float GBP_Pirkti = 0.8600;
    float GBP_Parduoti = 0.9220;
    float USD_Bendras = 1.1793;
    float USD_Pirkti = 1.1460;
    float USD_Parduoti = 1.2340;
    float INR_Bendras = 104.6918;
    float INR_Pirkti = 101.3862;
    float INR_Parduoti = 107.8546;


    int naujasSkaiciuMasyvas[1]={0};

   naujasSkaiciuMasyvas[0] = 1;
    naujasSkaiciuMasyvas[1] = 2;
    naujasSkaiciuMasyvas[3] = 3;

    cout << naujasSkaiciuMasyvas[0] << endl;
    cout << naujasSkaiciuMasyvas[1] << endl;
    cout << naujasSkaiciuMasyvas[2] << endl;
    cout << naujasSkaiciuMasyvas[3] << endl;
}