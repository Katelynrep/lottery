//purpose is for a random lottery number

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

//set numbers
    int number1 = distribution(engine);
    int number2 = distribution(engine);
    int number3 = distribution(engine);
    int number4 = distribution(engine);
    int number5 = distribution(engine);
    int number6 = distribution(engine);
//make strings
    string str1 = to_string(number1);
    string str2 = to_string(number2);
    string str3 = to_string(number3);
    string str4 = to_string(number4);
    string str5 = to_string(number5);
    string str6 = to_string(number6);


    string lotteryTicket = str1 + str2 + str3 +
                          str4 + str5 + str6;


    cout << "Your lottery ticket number is "
         << lotteryTicket << endl;

    return 0;
}
