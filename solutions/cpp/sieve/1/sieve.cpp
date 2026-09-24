#include "sieve.h"


namespace sieve {

std::vector<int> removeMarks(const std::vector<int>& list) {
    std::vector<int> cleaned = list;
    cleaned.erase(std::remove(cleaned.begin(), cleaned.end(), 1), cleaned.end());
    return cleaned;
}

std::vector<int> primes(int endpointInt) {
    std::vector<int> listOfPrimes = vectorBuilder(endpointInt);

    int size = static_cast<int>(listOfPrimes.size());
    if (size == 0) return {};

    // Outer loop up to sqrt(n)
    for (int i = 0; i < size; i++) {
        int currentMark = listOfPrimes[i];
        if (currentMark == 1) continue; // already marked

        // Start marking from p * p
        long long startVal = 1LL * currentMark * currentMark;
        if (startVal > endpointInt) continue;

        // Convert the value back to index (offset by 2 since vector starts at 2)
        int startIdx = static_cast<int>(startVal - 2);

        for (int j = startIdx; j < size; j++) {
            if (listOfPrimes[j] % currentMark == 0) {
                listOfPrimes[j] = 1;
            }
        }
    }

    return removeMarks(listOfPrimes);
}

std::vector<int> vectorBuilder(int endpointInt) {
    std::vector<int> initialList;
    if (endpointInt < 2) return initialList;
    initialList.reserve(endpointInt - 1);
    for (int i = 2; i <= endpointInt; i++) {
        initialList.push_back(i);
    }
    return initialList;
}

}  // namespace sieve
