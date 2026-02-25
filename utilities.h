//
// Created by Administrator on 2026-02-24.
//

#ifndef VALIUTOS_KEITYKLA_UTILITYFUNCTIONS_H
#define VALIUTOS_KEITYKLA_UTILITYFUNCTIONS_H

#include <iostream>
#include <string>
#include <array>
#include <cmath>
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

void printCurrencyOptions() {
    cout << "1. EUR -> GBP" << endl;
    cout << "2. EUR -> USD" << endl;
    cout << "3. EUR -> INR" << endl;
    cout << "4. GBP -> EUR" << endl;
    cout << "5. USD -> EUR" << endl;
    cout << "6. INR -> EUR" << endl;
    cout << "0. Grizti" << endl;
    cout << endl;
}

double getCurrencyRate(int currencyIndex) {
    const double EUR_TO_GBP = 0.8729;
    const double EUR_TO_USD = 1.1793;
    const double EUR_TO_INR = 104.6918;
    const double GBP_TO_EUR = 1.1463;
    const double USD_TO_EUR = 0.8479;
    const double INR_TO_EUR = 0.009;

    double exchangeRate;

    switch (currencyIndex) {
        case EUR_GBP + 1:
            exchangeRate = EUR_TO_GBP;
            break;
        case EUR_USD + 1:
            exchangeRate = EUR_TO_USD;
            break;
        case EUR_INR + 1:
            exchangeRate = EUR_TO_INR;
            break;
        case GBP_EUR + 1:
            exchangeRate = GBP_TO_EUR;
            break;
        case USD_EUR + 1:
            exchangeRate = USD_TO_EUR;
            break;;
        case INR_EUR + 1:
            exchangeRate = INR_TO_EUR;
            break;
        default:
            exchangeRate = EUR_TO_GBP;
    }

    return exchangeRate;
}

double getCurrencyBuyRate(int currencyIndex) {
    const double EUR_TO_GBP = 0.8600;
    const double EUR_TO_USD = 1.1460;
    const double EUR_TO_INR = 101.3862;
    const double GBP_TO_EUR = 1.1143;
    const double USD_TO_EUR = 0.8239;
    const double INR_TO_EUR = 0.0084;

    double exchangeRate;

    switch (currencyIndex) {
        case EUR_GBP + 1:
            exchangeRate = EUR_TO_GBP;
            break;
        case EUR_USD + 1:
            exchangeRate = EUR_TO_USD;
            break;
        case EUR_INR + 1:
            exchangeRate = EUR_TO_INR;
            break;
        case GBP_EUR + 1:
            exchangeRate = GBP_TO_EUR;
            break;
        case USD_EUR + 1:
            exchangeRate = USD_TO_EUR;
            break;;
        case INR_EUR + 1:
            exchangeRate = INR_TO_EUR;
            break;
        default:
            exchangeRate = EUR_TO_GBP;
    }

    return exchangeRate;
}

double getCurrencySellRate(int currencyIndex) {
    const double EUR_TO_GBP = 0.9220;
    const double EUR_TO_USD = 1.2340;
    const double EUR_TO_INR = 107.8546;
    const double GBP_TO_EUR = 1.1234;
    const double USD_TO_EUR = 0.8179;
    const double INR_TO_EUR = 0.0085;

    double exchangeRate;

    switch (currencyIndex) {
        case EUR_GBP + 1:
            exchangeRate = EUR_TO_GBP;
            break;
        case EUR_USD + 1:
            exchangeRate = EUR_TO_USD;
            break;
        case EUR_INR + 1:
            exchangeRate = EUR_TO_INR;
            break;
        case GBP_EUR + 1:
            exchangeRate = GBP_TO_EUR;
            break;
        case USD_EUR + 1:
            exchangeRate = USD_TO_EUR;
            break;;
        case INR_EUR + 1:
            exchangeRate = INR_TO_EUR;
            break;
        default:
            exchangeRate = EUR_TO_GBP;
    }

    return exchangeRate;
}

array<string, 2> getCurrencyCode(int currencyIndex) {
    switch (currencyIndex) {
        case EUR_GBP + 1:
            return {EUR_STRING, GBP_STRING};
        case EUR_USD + 1:
            return {EUR_STRING, USD_STRING};
        case EUR_INR + 1:
            return {EUR_STRING, INR_STRING};
        case GBP_EUR + 1:
            return {GBP_STRING, EUR_STRING};
        case USD_EUR + 1:
            return {USD_STRING, EUR_STRING};
        case INR_EUR + 1:
            return {INR_STRING, EUR_STRING};
        default:
            return {EUR_STRING, GBP_STRING};
    }
}

double roundTo2DecimalPlaces(double number) {
    const double roundedNumber = round(number * 100) / 100;
    return roundedNumber;
}

#endif //VALIUTOS_KEITYKLA_UTILITYFUNCTIONS_H
