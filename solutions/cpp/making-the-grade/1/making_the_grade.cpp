#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    std::vector<int> rounded_scores;
    for (int i = 0; i < student_scores.size(); i++) {
        rounded_scores.emplace_back(static_cast<int>(student_scores[i]));
    }
    return rounded_scores;
}

// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    int futureProzzies = 0;
    for (int i = 0; i < student_scores.size(); i++) {
        if (student_scores[i] <= 40) {
            futureProzzies++;
        }
    }    return futureProzzies;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    int i = ((highest_score - 40) / 4);
    std::array<int, 4> letter_grades { 41, 41 + i, 41 + (2 * i), 41 + (3 * i)};
    return letter_grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(
    std::vector<int> student_scores, std::vector<std::string> student_names) {
    std::vector<std::string> student_ranking;
    for (int i = 0; i < student_scores.size() ; i++) {
        student_ranking.emplace_back(std::to_string(i + 1) + ". " + student_names[i] + ": " + std::to_string(student_scores[i]));
    }
    return student_ranking;
}

// Create a string that contains the name of the first student to make a perfect
// score on the exam.
std::string perfect_score(std::vector<int> student_scores,
                          std::vector<std::string> student_names) {
    std::vector<std::string> perfect_scorer;
    for (int i = 0; i < student_scores.size() ; i++) {
        if (student_scores[i] == 100) {
            perfect_scorer.emplace_back(student_names[i]);
        }
    }    
    if (perfect_scorer.size() == 0) {
        return "";
    } else {
        return perfect_scorer[0];
    }
}
