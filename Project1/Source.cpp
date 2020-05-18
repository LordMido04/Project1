#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int Guess = 0;
    int secretNum = 2008;
    int remainGuesses = 3;

    cout << "Marvel quiz" << endl;
    cout << "What year was the first Iron Man movie released, kicking off the Marvel Cinematic Universe?" << endl;
    cout << "You have 3 guesses" << endl;
    cout << "Don't type in capitals" << endl;
    cout << " " << endl;

    while (secretNum != Guess, remainGuesses > 0)
    {
        cout << "Enter guess: ";
        cin >> Guess;
        remainGuesses--;

        if (Guess == secretNum)
        {
            cout << "That's right! you go to the next round :)" << endl;

            int remainguesses2 = 3;
            string guess2;
            string secretanswer = "hulk";

            cout << " " << endl;
            cout << "sencond question" << endl;
            cout << "Which Avenger does Thor team up with in Thor: Ragnarok?" << endl;
            cout << "You have 3 guesses" << endl;
            cout << " " << endl;

            while (secretanswer != guess2, remainguesses2 > 0)
            {
                cout << "Enter answer: ";
                cin >> guess2;
                remainguesses2--;

                if (guess2 == secretanswer)
                {
                    cout << "That's right! you go to the next round :)" << endl;

                    int remainguesses3 = 3;
                    string guess3;
                    string secretanswer2 = "wakanda";

                    cout << " " << endl;
                    cout << "sencond question" << endl;
                    cout << "In which fictional country is Black Panther set?" << endl;
                    cout << "You have 3 guesses" << endl;
                    cout << " " << endl;

                    while (secretanswer2 != guess3, remainguesses3 > 0)
                    {
                        cout << "Enter answer: ";
                        cin >> guess3;
                        remainguesses3--;

                        if (guess3 == secretanswer2)
                        {
                            cout << "That's right! you go to the next round :)" << endl;

                            int remainguesses4 = 3;
                            string guess4;
                            string secretanswer3 = "iron man 2";

                            cout << " " << endl;
                            cout << "sencond question" << endl;
                            cout << "In which film did Black Widow first appear?" << endl;
                            cout << "You have 3 guesses" << endl;
                            cout << " " << endl;

                            while (secretanswer3 != guess4, remainguesses4 > 0)
                            {
                                cout << "Enter answer: ";
                                cin >> guess4;
                                remainguesses4--;

                                if (guess4 == secretanswer3)
                                {
                                    cout << "That's right, You won!" << endl;
                                }
                                else if (remainguesses4 > 0)
                                {
                                    cout << "remaining chances: " << remainguesses4 << endl;
                                    cout << " " << endl;
                                }
                                else if (remainguesses4 == 0)
                                {
                                    cout << "You lost noob >:(" << endl;
                                    cout << " " << endl;
                                    return 0;
                                }
                            }
                        }
                        else if (remainguesses3 > 0)
                        {
                            cout << "remaining chances: " << remainguesses3 << endl;
                            cout << " " << endl;
                        }
                        else if (remainguesses3 == 0)
                        {
                            cout << "You lost noob >:(" << endl;
                            cout << " " << endl;
                            return 0;
                        }
                    }
                }
                else if (remainguesses2 > 0)
                {
                    cout << "remaining chances: " << remainguesses2 << endl;
                    cout << " " << endl;
                }
                else if (remainguesses2 == 0)
                {
                    cout << "You lost noob >:(" << endl;
                    cout << " " << endl;
                    return 0;
                }
            }
        }
        else if (remainGuesses > 0)
        {
            cout << "remaining guesses: " << remainGuesses << endl;
            cout << " " << endl;
        }
        else if (remainGuesses == 0)
        {
            cout << "You lost noob >:(" << endl;
            cout << " " << endl;
            return 0;
        }
    }
        return 0;
}
 
    


