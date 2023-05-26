#include <iostream>
#include <unordered_set>
#include "include/Wavelet.hpp"
#include "include/FMIndex.hpp"
#include "include/RIndex.hpp"

using namespace std;

int main() {
    string input = "mississippi";
    Wavelet tree(input);

    cout << "Wavelet tree: " << endl;
    tree.print();
    cout << endl;

    FMIndex fm_index(input);
    fm_index.print_suffix_array();
    fm_index.print_pattern_offsets("ss");

    cout << input << endl;
    RIndex r_index(input);
    cout << r_index.count("ss") << endl;
    // for (const auto& item: r_index.get_predecessor_struct()) {
    //     cout << "Pred struct for char " << item.first << endl;
    //     for (const auto& curr: item.second) {
    //         cout << "BWT index " << curr.first << " Offset " << curr.second << endl;
    //     }
    // }

    return 0;
}