#include <iostream>
#include <random>
#include <string>

using namespace std;

int main()
{
    cout << "This program generates a random lottery ticket number." << endl;
    random_device rd;
    mt19937 engine(rd());
    uniform_int_distribution<int> distribution(1, 9);


    int number1 = distribution(engine);
    int number2 = distribution(engine);
    int number3 = distribution(engine);
    int number4 = distribution(engine);
    int number5 = distribution(engine);
    int number6 = distribution(engine);
