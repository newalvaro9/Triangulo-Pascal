#include <iostream>
#include <vector>

int main()
{
    std::cout << "------ Triangulo de Pascal ------";
    std::vector<double> row;
    int requestedLength = 20;

    std::cout << "\n1\n";
    for (int i = 0; i < requestedLength; i++)
    {

        std::vector<double> nextRow;
        nextRow.push_back(1);

        for (int j = 1; j < row.size(); j++)
        {
            // row[j - 1] = el segundo numero
            // row[j] = el siguiente numero del segundo
            nextRow.push_back(row[j - 1] + row[j]);
        }

        nextRow.push_back(1);
        row = nextRow;

        for (double i : row)
        {
            std::cout << i << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}