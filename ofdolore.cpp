#include <vector>

std::vector<int> getAllMarks() {
    std::vector<int> ALL_MARKS = {90, 85, 78, 92};
    return ALL_MARKS;
}

int main() {
    std::vector<int> marks = getAllMarks();
    for (int mark : marks) {
        std::cout << mark << " ";
    }
    return 0;
}
