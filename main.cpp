#include <iostream>
#include <vector>
#include <numeric> // for std::accumulate

int getSum(const std::vector<int>& vec) {
    return std::accumulate(vec.begin(), vec.end(), 0);
}

double getAverage(const std::vector<int>& vec) {
    int sum = getSum(vec);
    return static_cast<double>(sum) / vec.size();
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = getSum(numbers);
    double average = getAverage(numbers);
    std::cout << "Sum of numbers: " << sum << std::endl;
    std::cout << "Average of numbers: " << average << std::endl;
    return 0;
}
