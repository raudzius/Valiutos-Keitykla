//
// Created by Administrator on 2026-02-24.
//

#ifndef VALIUTOS_KEITYKLA_UTILITYFUNCTIONS_H
#define VALIUTOS_KEITYKLA_UTILITYFUNCTIONS_H

#include <iostream>
using namespace std;

const int GBP = 1;
const int USD = 2;
const int INR = 3;
const int EUR = 4;

void printCurrencyOptions(bool invalid) {
    if (invalid) {
        cout << "Neteisinga įvestis, bandykite vėl:" << endl;
    }
    cout << "1. GBP" << endl;
    cout << "2. USD" << endl;
    cout << "3. INR" << endl;
    cout << "4. Eur" << endl;
}

float getEurToCurrencyRate(int currencyIndex) {
    const float GBP_Bendras = 0.8729;
    const float USD_Bendras = 1.1793;
    const float INR_Bendras = 104.6918;
    const float GBP_To_EUR = 1.1463;
    const float USD_To_EUR = 0.8479;
    const float INR_To_EUR = 0.009;
    float exchangeRate;

    switch (currencyIndex) {
        case GBP:
            exchangeRate = GBP_Bendras;
            break;
        case USD:
            exchangeRate = USD_Bendras;
            break;
        case INR:
            exchangeRate = INR_Bendras;
            break;
        case EUR:
            exchangeRate =
            break;
        default:
            throw "Error";
    }

    return exchangeRate;
}

string convertCurrencyIndexToText(int currencyIndex) {
    switch (currencyIndex) {
        case 1:
            return "GBP";
        case 2:
            return "USD";
        case 3:
            return "INR";
        case 4:
            return "EUR";
            case 5:
            throw "Error";
    }
}

int getChosenServiceIndex() {
    printCurrencyOptions(false);
    int currencyIndex;
    cin >> currencyIndex;
    return currencyIndex;
}

#endif //VALIUTOS_KEITYKLA_UTILITYFUNCTIONS_H
