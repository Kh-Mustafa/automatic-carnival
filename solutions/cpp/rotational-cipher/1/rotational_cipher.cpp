#include "rotational_cipher.h"

namespace rotational_cipher {
    
std::string rotate(std::string plaintext, int key){
    std::string alphabet = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while (key >= 26) {
        key = key - 26;
    }
    std::string ciphertext = "";
    ciphertext.reserve(plaintext.length());
    int lengthOf = static_cast<int>(plaintext.length());
    for (int i = 0; i < lengthOf; i++) {
        if (isalpha(plaintext[i])) {
            ciphertext += alphabet[alphabet.find(plaintext[i]) + key];
        } else {
            ciphertext += plaintext[i];
        }
    }
    return ciphertext;
}

}  // namespace rotational_cipher
