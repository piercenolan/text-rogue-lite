#include "../Headers/helpers.h"

string toLower(const string& input) {
    string lowered;
    for (char ch : input) {
        if (isalpha(static_cast<unsigned char>(ch))) {
            lowered.push_back(static_cast<char>(tolower(static_cast<unsigned char>(ch))));
        }
    }
    return lowered;
}