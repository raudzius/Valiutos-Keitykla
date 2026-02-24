#include <iostream>
#include <string>
#include "utilities.h"
using namespace std;


int main() {
    float GBP_Pirkti = 0.8600;
    float GBP_Parduoti = 0.9220;
    float USD_Pirkti = 1.1460;
    float USD_Parduoti = 1.2340;
    float INR_Pirkti = 101.3862;
    float INR_Parduoti = 107.8546;

    bool isRunning = true;
    while (isRunning) {
        int serviceNumber;
        cout << "Pasirinkite paslaugą, įvesdami paslaugos numerį:" << endl;
        cout << "Valiutos kurso palyginimas - 1" << endl;
        cout << "Valiutos įsigijimas - 2" << endl;
        cout << "Valiutos pardavimas - 3" << endl;
        cout << "Išeiti - 4" << endl;
        cin >> serviceNumber;
        switch (serviceNumber) {
            case 1:
                cout << "Įveskite numerį tos valiutos kurios kursą norite palyginti su EUR:" << endl;
                int currencyIndex = getChosenServiceIndex();

                if (currencyIndex == 1 || currencyIndex == 2 || currencyIndex == 3) {
                    float exchangeRate = getEurToCurrencyRate(currencyIndex);
                    string currencyIndexText = convertCurrencyIndexToText(currencyIndex);

                    cout << "1 EUR = " << exchangeRate << " " << currencyIndexText << endl;
                    cout << endl;
                } else {
                    printCurrencyOptions(true);
                }
                break;
            case 2:
                // cout << "Pasirinkite valiutą kurią norite iškeisti į EUR:" << endl;
                // cout << "1. GBP" << endl;
                // cout << "2. USD" << endl;
                // cout << "3. INR" << endl;
                // int currencyIndex2;
                // cin >> currencyIndex2;
                // break;
            default:
                break;
        }
    }
}
