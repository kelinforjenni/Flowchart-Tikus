#include <iostream>
#include <thread>
#include <chrono>
#include <sstream>
#include <locale>
using namespace std;

string getAnswer(string action) {
    return "\nSTATUS: Anda memutuskan untuk " + action + "\n\n";
}
std::string formatNumber(int number) {
    stringstream ss;
    ss.imbue(std::locale(""));
    ss << number;
    return ss.str();
}
int main() {
    int choice;

    cout << "--- Program Tikus Mengambil Keju ---\n\n";

    cout << "Apakah tikus melihat keju? (1 [Yes] / 0 [No]): ";
    cin >> choice;
    cout << getAnswer(choice == 1 ? "Tikus mengambil keju" : "Selesai");

    if (choice == 1) {
        cout << "Induk tikus membawa keju ke anak-anak? (1 [Yes] / 0 [No]): ";
        cin >> choice;
        cout << getAnswer(choice == 1 ? "Induk tikus jaga dipintu" : "Selesai");

        cout << "Apa kucing mengawasi induk tikus? (1 [Yes] / 0 [No]): ";
        cin >> choice;
        cout << getAnswer(choice == 1 ? "Tunggu saat" : "Selesai");
    }
    cout << "--- PROGRAM SELESAI ---" << endl;
    return 0;
}