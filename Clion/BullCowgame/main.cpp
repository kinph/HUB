#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();

// the entry point for the application
int main()
{
    PrintIntro();
    PlayGame();
    AskToPlayAgain();
    cout << endl;
    return 0;
}


// introduce the game
void PrintIntro()
{
    constexpr int WORLD_LENGTH = 9;
    cout << "Welcome to Bulls and Cows, a fun word game.\n";
    cout << "Can you guess the " << WORLD_LENGTH;
    cout << " letter isogram I'm thinking of?\n";
    cout << endl;
}

//play game
void PlayGame()
{
    //loop for number of turns for guesses
    constexpr int NUMBER_OF_TURNS = 5;
    for (int count = 1; count <= NUMBER_OF_TURNS; count++)
    {
        string Guess = GetGuess();
        cout << "Your guess was: " << Guess << endl;
        cout << endl;
    }
}

// get a guess from the player
string GetGuess()
{
    cout << "Enter your guess: ";
    string Guess = "";
    getline(cin, Guess);
    return Guess;
}

bool AskToPlayAgain()
{
    cout << "Do you want to play again?";
    string Response = "";
    getline(cin, Response);

    cout << "Is it y? " << (Response[0] == 'y' || 'Y');

    return false;
}
