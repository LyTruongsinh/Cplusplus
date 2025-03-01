#include <algorithm>
#include <iostream>
#define MAX 100

void print_permutations(int arr[], int n) {
    do {
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << ' ';
        }
        std::cout << '\n';
    } while (std::next_permutation(arr, arr + n));
}

int main() {
    int n;
    std::cout << "Nh?p s? lu?ng ph?n t? c?a m?ng: ";
    std::cin >> n;

    int arr[MAX];
    std::cout << "Nh?p các ph?n t? c?a m?ng:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Các hoán v? c?a m?ng là:\n";
    print_permutations(arr, n);
    return 0;
}
