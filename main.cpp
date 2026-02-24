#include <iostream>
#include <string>
#include <format>
using namespace std;
const int GBP = 1;
const int USD = 2;
const int INR = 3;
const float GBP_Bendras = 0.8729;
const float USD_Bendras = 1.1793;
const float INR_Bendras = 104.6918;

int currencyIndexToInteger(const string& currencyIndex) {
    if (currencyIndex=="GBP") {
        return 1;
    }else if (currencyIndex=="USD") {
        return 2;
    }else if (currencyIndex=="INR") {
        return 3;
    }else {
        throw "Error";
    }
}

string compareEurToOtherCurrency(string currencyIndex) {
    const int currencyIndexAsInteger=currencyIndexToInteger(currencyIndex);
    float exchangeRate;
    switch (currencyIndexAsInteger) {
        case GBP:
            exchangeRate = GBP_Bendras;
            break;
        case USD:
            exchangeRate = USD_Bendras;
            break;
        case INR:
            exchangeRate = INR_Bendras;
            break;
    }
    const string text = format("1 EUR = {} {}", exchangeRate,currencyIndex);
    cout << text << endl;
}

string uppercaseString(string text) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = toupper(text[i]);
    }

    return text;
}

string invalidCurrencyChosenOutput() {
    cout << "Įvedėte neteisingą valiutos kursą, galimi tik šie" << endl;
    cout << "1. GBP" << endl;
    cout << "2. USD" << endl;
    cout << "3. INR" << endl;
}

void runCompareEurToOtherCurrencyInteraction() {
    bool isRunning = true;
    while (isRunning) {
        cout << "Pasirinkite valiutą kurios kursą norite palyginti su EUR, įvesdami valiutos numerį:" << endl;
        cout << "1. GBP" << endl;
        cout << "2. USD" << endl;
        cout << "3. INR" << endl;
        string currencyIndex;
        cin >> currencyIndex;
        currencyIndex=uppercaseString(currencyIndex);

        if (currencyIndex=="GBP"||currencyIndex=="USD"||currencyIndex=="INR") {
            compareEurToOtherCurrency(currencyIndex);
        }else {
            invalidCurrencyChosenOutput();
        }

        int repeat;
        bool repeatIsRunning = true;
        while (repeatIsRunning) {
            cout << "Kartoti kurso palyginimą: 1" << endl;
            cout << "Grįžti į pradžią: 0" << endl;
            cin >> repeat;

            if (repeat==0) {
                return;
            }else if
        }
    }
}

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
                runCompareEurToOtherCurrencyInteraction();
        }
    }
}