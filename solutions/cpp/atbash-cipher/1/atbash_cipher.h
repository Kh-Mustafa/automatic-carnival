#include <string>
#pragma once

namespace atbash_cipher {

std::string encode(const std::string& plaintext);
std::string removePunct(std::string plaintext);
std::string spaceInserter(std::string ciphertext);
    
std::string decode(const std::string& ciphertext);
std::string spaceRemover(std::string ciphertext);

    
}  // namespace atbash_cipher
