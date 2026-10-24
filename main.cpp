#include "book.h"
#include <array>

namespace kimsj2649068
{
    void printBookArray(const book a[], const int n)
    {
        for (int i=0; i < n; ++i)
            std::cout << a[i] << '\n';
        std::cout << std::endl;
    }
}

int main()
{
    using namespace kimsj2649068;

    const int n{4}; // n = constant
    book a[n];
    a[0] = book{"C++ programming", 1, 30000};
    a[1].setTitle("C progamming"); a[1].setID(2); a[1].setPrice(20000);
    a[2].input();
    std::cin >> a[3];
    printBookArray(a, n);

    std::array<book,n> arr;
    for (int i = 0; i < arr.size() ; ++i) // for 
        arr.at(i) = a[i];
    for (const auto& arri : arr) // for each 
        arri.print();
    return 0;
}