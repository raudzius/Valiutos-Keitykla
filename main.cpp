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
        cout << "Pasirinkite paslauga, ivesdami paslaugos numeri:" << endl;
        cout << "Valiutos kurso palyginimas - 1" << endl;
        cout << "Valiutos isigijimas - 2" << endl;
        cout << "Valiutos pardavimas - 3" << endl;
        cout << "Iseiti - 0" << endl;
        cin >> serviceNumber;
        switch (serviceNumber) {
            case 1: {
                bool firstServiceIsRunning = true;
                while (firstServiceIsRunning) {
                    cout << "Iveskite numeri tos valiutos kurios kursa norite palyginti:" << endl;
                    printCurrencyOptions();

                    int currencyIndex;
                    cin >> currencyIndex;

                    float exchangeRate = getCurrencyRate(currencyIndex);
                    array<string, 2> exchangeCurrencyCodes = getCurrencyCode(currencyIndex);
                    cout << "1 " << exchangeCurrencyCodes[0] << " = " << exchangeRate << " " << exchangeCurrencyCodes[1]
                            <<
                            endl;
                    cout << endl;

                    cout << "Palyginti kita kursa? - 1" << endl;
                    cout << "Grizti? - 0" << endl;
                    int repeatService;
                    cin >> repeatService;
                    if (repeatService != 1) {
                        firstServiceIsRunning = false;
                    }
                }
                break;
            }
            case 2:
            cout << "Pasirinkite valiuta kuria norite iskeisti:" << endl;

            int currencyIndex2;
            cin >> currencyIndex2;
            break;
            case 3:
            case 0:
                isRunning = false;
                break;
            default:
                break;
        }
    }
}
