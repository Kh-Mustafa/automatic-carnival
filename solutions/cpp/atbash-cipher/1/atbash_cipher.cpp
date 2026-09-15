#include "atbash_cipher.h"

namespace atbash_cipher {

    std::string alphabet = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    std::string key = " zyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcba1234567890";
    
    std::string encode(const std::string& plaintext){
        std::string ciphertext;
        std::string depunctPlaintext;
        depunctPlaintext = removePunct(plaintext);
        ciphertext.reserve(depunctPlaintext.length());
        double counter = 0;
        int tempX;
        while (counter < depunctPlaintext.length()) {
            tempX = alphabet.find(depunctPlaintext[counter]);
                if (tempX != 0) {
                    ciphertext += key[tempX];
                }
            counter++;
        }
        return spaceInserter(ciphertext);
    }

    std::string removePunct(std::string plaintext){
        std::string depunctPlaintext;
        double counter = 0;
        while (counter < plaintext.length()){
            if (alphabet.find(plaintext[counter]) != std::string::npos) {
                depunctPlaintext += plaintext[counter];
            }
                counter++;
        }
        return depunctPlaintext;
    }

    std::string spaceInserter(std::string ciphertext){
        for (double i = 5; i < ciphertext.length(); i += 6){
            ciphertext.insert(i, " ");
        }
        return ciphertext;
    }

    std::string decode(const std::string& ciphertext){
        std::string despacedCiphertext = spaceRemover(ciphertext);
        std::string plaintext;
        double counter = 0;
        int tempX;
        while (counter < despacedCiphertext.length()) {
            tempX = key.find(despacedCiphertext[counter]);
                if (tempX != 0) {
                    plaintext += alphabet[tempX];
                }
            counter++;
        }
        
        return plaintext;    
    }

    std::string spaceRemover(std::string ciphertext){
        std::string despacedCiphertext = ciphertext;
        for (double i = 0; i < ciphertext.length(); i++){
            if (despacedCiphertext[i] == ' ') {
                despacedCiphertext.erase(i, 1);
            }
        }
        return despacedCiphertext;
    }
    
}  // namespace atbash_cipher