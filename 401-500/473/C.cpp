#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> population(k, 0);  // population
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        population[c - 1]++;
    }
    
    ranges::sort(population, std::greater<int>());
    int max_population = population.front(), second_population = -1;
    for (int i = 1; i < k; i++) {
        if (population[i] < max_population) {
            second_population = population[i];
            break;
        }
    }

    const int max_count = ranges::count(population, max_population);
    const int second_count = ranges::count(population, second_population);

    // max_valueは正より、second_value = -1であれば、max_countしか出力されない
    if (second_population + 1 == max_population) {
        cout << max_count + second_count << endl;
    } else {
        cout << max_count << endl;
    }

    return 0;
}
