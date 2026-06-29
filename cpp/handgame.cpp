#include <iostream>
#include <ctime>
#include <string>
#include <algorithm>
#include <cctype>
#include <random>

using std::cin;
using std::cout;
using std::getline;
using std::string;
using std::tolower;
using std::transform;

string inputChoice()
{
    string choice;
    cout << "Enter your choice (rock, paper, scissors): ";
    getline(cin, choice);
    return choice;
}

string toLowerCase(const string &str)
{
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(),
              [](unsigned char ch)
              { return static_cast<char>(tolower(ch)); });
    return lowerStr;
}

int main()
{
    cout << "Welcome to the Rock Paper Scissors!\n";

    string userChoice = inputChoice();
    userChoice = toLowerCase(userChoice);

    // error checking
    while (userChoice != "rock" && userChoice != "paper" && userChoice != "scissors")
    {
        cout << "Invalid input. Please enter rock, paper, or scissors: ";
        userChoice = inputChoice();
        userChoice = toLowerCase(userChoice);
    }

    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(1, 3);
    int comp_choice = dist(rng); // 1 for rock, 2 for paper, 3 for scissors

    string compChoice;
    if (comp_choice == 1)
    {
        compChoice = "rock";
    }
    else if (comp_choice == 2)
    {
        compChoice = "paper";
    }
    else if (comp_choice == 3)
    {
        compChoice = "scissors";
    }

    // case-1
    if (userChoice == "rock" && compChoice == "scissors")
    {
        cout << "You win! Computer chose scissors.";
    }

    // case-2
    else if (userChoice == "paper" && compChoice == "rock")
    {
        cout << "You win! Computer chose rock.";
    }

    // case-3
    else if (userChoice == "scissors" && compChoice == "paper")
    {
        cout << "You win! Computer chose paper.";
    }

    // case-4
    else if (userChoice == "rock" && compChoice == "paper")
    {
        cout << "You lose! Computer chose paper.";
    }

    // case-5
    else if (userChoice == "paper" && compChoice == "scissors")
    {
        cout << "You lose! Computer chose scissors.";
    }

    // case-6
    else if (userChoice == "scissors" && compChoice == "rock")
    {
        cout << "You lose! Computer chose rock.";
    }

    // case-7
    else if (userChoice == compChoice)
    {
        cout << "It's a tie! Computer also chose " << compChoice << ".";
    }

    return 0;
}