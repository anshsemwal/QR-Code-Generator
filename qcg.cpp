#include <iostream>
#include "qrcodegen.hpp"

using namespace std;
using namespace qrcodegen;

int main() {
    string text;
    cout << "Enter text to generate QR Code: ";
    cin >> text;

    QrCode qr = QrCode::encodeText(text.c_str(), QrCode::Ecc::LOW);
    for (int y = 0; y < qr.getSize(); y++) {
        for (int x = 0; x < qr.getSize(); x++)
            cout << (qr.getModule(x, y) ? "██" : "  ");
        cout << endl;
    }
    return 0;
}
