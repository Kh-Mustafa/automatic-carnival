#pragma once
#include <vector>
#include <algorithm>
#include <cmath>

namespace sieve {

std::vector<int> primes(int endpointInt);
std::vector<int> vectorBuilder(int endpointInt);
std::vector<int> removeMarks(const std::vector<int>& list);


}  // namespace sieve
