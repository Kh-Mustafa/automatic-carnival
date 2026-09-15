#pragma once

#include <string>
#include <vector>

namespace protein_translation {

std::vector<std::string> proteins(std::string rna);

/**
 * @rnaSegmenter Gets a relevant string from the RNA Sequence based on the current position.
 *
 * This function receives an RNA sequence consisting of a multiple of three
 * and an int equal to the current position of the sequencer
 * and returns a three character string, starting from int currentSegment to int (currentSegment + 3).
 *
 * @param rnaSequence An RNA sequence (e.g., "AUGUAAUCU").
 * @param currentSegment An int (e.g., 3).
 * @return A three character string.
 */

std::string rnaSegmenter(std::string rnaSequence, int currentSegment);

/**
 * @rnaToProtein Converts a three-character RNA codon into its corresponding protein.
 *
 * This function receives an RNA sequence consisting of exactly three characters
 * and returns the corresponding protein name. It is assumed that the input
 * string is exactly three characters long and represents a valid RNA codon.
 *
 * @param rna A three-character RNA sequence (e.g., "AUG", "UAA").
 * @return The protein name corresponding to the given RNA codon.
 */
std::string rnaToProtein(std::string rna);

}  // namespace protein_translation
