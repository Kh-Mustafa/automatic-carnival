#include "prime_factors.h"

namespace prime_factors {

std::vector<long long> of(long long n){
    std::vector<long long> primeFactorsVect = {};
    //primeFactorsVect.reserve(n/2);
    for (int i = 2; i <= n;){
        if (!(n % i)) {
            primeFactorsVect.push_back(i);
            n = n / i;
        } else {
            i++;
        }
    }
    return primeFactorsVect;
}

}  // namespace prime_factors
