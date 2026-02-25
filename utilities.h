//
// Created by Administrator on 2026-02-24.
//

#ifndef VALIUTOS_KEITYKLA_UTILITYFUNCTIONS_H
#define VALIUTOS_KEITYKLA_UTILITYFUNCTIONS_H

#include <iostream>
#include <string>
#include <array>
using namespace std;

enum SelectedCurrencies {
    EUR_GBP,
    EUR_USD,
    EUR_INR,
    GBP_EUR,
    USD_EUR,
    INR_EUR
};

const string EUR_STRING = "EUR";
const string GBP_STRING = "GBP";
const string USD_STRING = "USD";
const string INR_STRING = "INR";

void printCurrencyOptions(bool invalid) {
    if (invalid) {
        cout << "Neteisinga ivestis, bandykite vel:" << endl;
    }
    cout << "1. EUR -> GBP" << endl;
    cout << "2. EUR -> USD" << endl;
    cout << "3. EUR -> INR" << endl;
    cout << "4. GBP -> EUR" << endl;
    cout << "5. USD -> EUR" << endl;
    cout << "6. INR -> EUR" << endl;
    cout << endl;
}

float getCurrencyRate(int currencyIndex) {
    const float EUR_TO_GBP = 0.8729;
    const float EUR_TO_USD = 1.1793;
    const float EUR_TO_INR = 104.6918;
    const float GBP_TO_EUR = 1.1463;
    const float USD_TO_EUR = 0.8479;
    const float INR_TO_EUR = 0.009;

    float exchangeRate;

    switch (currencyIndex) {
        case EUR_GBP:
            exchangeRate = EUR_TO_GBP;
            break;
        case EUR_USD:
            exchangeRate = EUR_TO_USD;
            break;
        case EUR_INR:
            exchangeRate = EUR_TO_INR;
            break;
        case GBP_EUR:
            exchangeRate = GBP_TO_EUR;
            break;
        case USD_EUR:
            exchangeRate = USD_TO_EUR;
            break;;
        case INR_EUR:
            exchangeRate = INR_TO_EUR;
            break;
        default:
            exchangeRate = EUR_TO_GBP;
    }

    return exchangeRate;
}

array<string, 2> getCurrencyCode(int currencyIndex) {
    switch (currencyIndex) {
        case EUR_GBP:
            return {EUR_STRING, GBP_STRING};
        case EUR_USD:
            return {EUR_STRING, USD_STRING};
        case EUR_INR:
            return {EUR_STRING, INR_STRING};
        case GBP_EUR:
            return {GBP_STRING, EUR_STRING};
        case USD_EUR:
            return {USD_STRING, EUR_STRING};
        case INR_EUR:
            return {INR_STRING, EUR_STRING};
        default:
            return {EUR_STRING, GBP_STRING};
    }
}

#endif //VALIUTOS_KEITYKLA_UTILITYFUNCTIONS_H
