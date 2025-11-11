#include<bits/stdc++.h>
using namespace std;

string scramble_word(string word)
{
    random_shuffle(word.begin(),word.end());
    return word;
}


void play_game()
{
    vector<string>word_list= {"apple","banana","mango","bangladesh","china","pakistan",
                              "afganistan","srilanka","melbourne", "china", "beijing","japan", "tokyo"
                             };



    srand(time(0));
    int random_index=rand()%word_list.size();
    string original_word=word_list[random_index];
    string scrambleee_wordd= scramble_word(original_word);

//    play_game(original_word,scrambleee_wordd);


    int attempts=3;

    cout<<"\nScramble word: "<<scrambleee_wordd;
    cout<<"\n";

    while(attempts--)
    {
        cout<<"\nGuess the word (print exit to stop): ";
        string input_guessed_word;
        cin>>input_guessed_word;

        if(input_guessed_word=="exit")
        {
            cout<<"Round end\n";
            return;
        }
        else if(input_guessed_word==original_word)
        {
            cout<<"Correct! You guessed it!\n";
            return;
        }
        else
        {
            cout<<"Wrong guess. Attempts left: "<<attempts<<"\n";
            if(attempts==0)
                cout<<"You lose !!\n";
        }


    }

}


int main()
{


    while(true)
    {
        play_game();
        cout<<"\n\nDo you want to play again? (yes/no): ";
        string yesORno;
        cin>>yesORno;
        for(int i=0; i<yesORno.size(); i++) yesORno[i]=tolower(yesORno[i]);


        if(yesORno=="yes")
        {
            cout<<"\n\n\n\n\t\t\t*************New Game***************\n\n\n";
            //play_game();

        }

        else
        {
            cout<<"Thanks for playing! Goodbye!\n\n\n\n";
            break;
        }

    }


}

