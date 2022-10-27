#include <iostream>

using namespace std;

int main()
{
    system("ps ax &");
    std::cout << "Done. " << std::endl;
    exit(0);
    return 0;
}