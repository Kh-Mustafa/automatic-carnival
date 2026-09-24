#include "protein_translation.h"

namespace protein_translation {

std::vector<std::string> proteins(std::string rnaSequence){
    std::vector<std::string> proteinSequence;
    int numberOfSegments = (rnaSequence.length() / 3);
    int currentSegment = 0;
    std::string rnaSegment = "";
    std::string proteinSegment = "";
    proteinSequence.reserve(numberOfSegments);
    
    while ((currentSegment < numberOfSegments)) {
        rnaSegment = rnaSegmenter(rnaSequence, currentSegment);
        proteinSegment = rnaToProtein(rnaSegment);
        if (proteinSegment != "STOP") {
            proteinSequence.emplace_back(proteinSegment);
        } else {
            break;
        }
        currentSegment++;
    } 
    return proteinSequence;
}
    
std::string rnaSegmenter(std::string rnaSequence, int currentSegment){
    return rnaSequence.substr(currentSegment * 3, 3);
}

std::string rnaToProtein(std::string rna){
    if (rna == "AUG") {
        return "Methionine";
    } else if (rna == "UUU" || rna == "UUC") {
        return "Phenylalanine";
    } else if (rna == "UUA" || rna == "UUG") {
        return "Leucine";
    } else if (rna == "UCU" || rna == "UCC" || rna == "UCA" || rna == "UCG") {
        return "Serine";
    } else if (rna == "UAU" || rna == "UAC") {
        return "Tyrosine";
    } else if (rna == "UGU" || rna == "UGC") {
        return "Cysteine";
    } else if (rna == "UGG") {
        return "Tryptophan";
    } else {
        return "STOP";
    }
} 

}  // namespace protein_translation
