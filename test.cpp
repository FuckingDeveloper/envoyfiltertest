#include <vector>

int countChocolatePieces(std::vector<int> chocolate, int M, int D) {
    int count = 0;
    for (int i = 0; i < chocolate.size(); i++) {
        int sum = 0;
        for (int j = i; j < i + M && j < chocolate.size(); j++) {
            sum += chocolate[j];
        }
        if (sum == D) {
            count++;
        }
    }
    return count;
}
