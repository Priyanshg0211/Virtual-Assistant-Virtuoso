#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <ctime>
#include <cstdlib>

using namespace std;

void speak(string s)
{
    string command = "espeak \"" + s + "\"";
    const char *charCommand = command.c_str();
    system(charCommand);
}

void wishme()
{

    time_t now = time(0);
    tm *time = localtime(&now);

    if (time->tm_hour < 12)
    {
        cout << "Good Morning Sir" << endl;
        string phrase = "Good Morning Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time->tm_hour >= 12 && time->tm_hour <= 16)
    {
        cout << "Good Afternoon Sir" << endl;
        string phrase = "Good Afternoon Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time->tm_hour > 16 && time->tm_hour < 24)
    {
        cout << "Good Evening Sir" << endl;
        string phrase = "Good Evening Sir";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }
}

void datetime()
{
    time_t now = time(0);
    string dt = ctime(&now);
    cout << "The date and time is " << endl
         << dt << endl;
}
int snakewatergun(char you, char comp)
{
    // return 1 if you win, -1 if you loose and 0 if draw
    if (you == comp)
    {
        return 0;
    }
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }
    else if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }
    else if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{

    cout << "\t\t\t<------------------------------------------------- W E L C O M E ------------------------------------------------->" << endl;
    cout << "\t\t\t<---------------------------------------- I'M A VIRTUAL ASSISTANT VIRTUOSO ---------------------------------->" << endl;
    cout << "\t\t\t<----------------------------------------------- MY NAME IS VIRTUOSO ----------------------------------------->" << endl;
    cout << "\t\t\t<----------------------------------------------  I'M HERE TO HELP YOU ------------------------------------------>" << endl
         << endl;

    char password[20];
    char ch[100];

    do
    {
        cout << "------------------------" << endl;
        cout << "   | ENTER YOUR PIN |" << endl;
        cout << "------------------------" << endl
             << endl;
        string phrase = "enter your pin to access";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        gets(password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if (strcmp(password, "admin") == 0)
        {
            cout << "\n-------------------------------------------------------------------------------------------------------\n\n";
            wishme();
            do
            {
                cout << "\n---------------------------------------------------------------------------------------------------\n\n";
                cout << endl
                     << "How can i assist you sir...." << endl
                     << endl;

                string phrase = "How can i assist you sir";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout << "Your query --> ";
                gets(ch);
                cout << endl;
                cout << "Here is the result for your query --> ";

                if (strcmp(ch, "hi") == 0 || strcmp(ch, "hey") == 0 || strcmp(ch, "hello") == 0)
                {
                    cout << "Hello Sir....." << endl;
                    string phrase = "Hello Sir";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (strcmp(ch, "bye") == 0 || strcmp(ch, "stop") == 0 || strcmp(ch, "exit") == 0)
                {
                    cout << "Good Bye sir, have a nice day!!!!" << endl;
                    string phrase = "Good Bye sir, have a nice day";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else if (strcmp(ch, "what is your name") == 0)
                {
                    cout << "My Name is Virtuoso a Virtual Assistant!!" << endl;
                    string phrase = "My Name is Virtuoso a virtual assistant";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }
                else if (strcmp(ch, "who are you") == 0 || strcmp(ch, "tell me about yourself") == 0 || strcmp(ch, "about") == 0)
                {
                    cout << "Virtuoso, Your Dynamic Virtual Assistant" << endl;
                    string phrase = "Greetings! I am Virtuoso, a cutting-edge virtual assistant designed and crafted by Rahul and Priyansh. Packed with intelligence, versatility, and a commitment to enhancing your digital experience, Virtuoso is here to redefine the way you interact with technology.";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                else if (strcmp(ch, "how are you") == 0 || strcmp(ch, "whatsup") == 0 || strcmp(ch, "how is your day") == 0)
                {
                    cout << "I'm good sir, tell me how can i help you.." << endl;
                    string phrase = "I'm good sir, tell me how can i help you sir";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
                else if (strcmp(ch, "what are your features") == 0 || strcmp(ch, "features") == 0)
                {
                    cout << "Here is the list of my features" << endl;
                    speak("Here is the list of my features I can talk I can open you apps I can wish according to time I can surf web for you  We can play games together");
                    cout << "1) I can talk" << endl;
                    cout << "2) I can open you apps" << endl;
                    cout << "3) I can wish according to time" << endl;
                    cout << "4) I can surf web for you" << endl;
                    cout << "5) We can play games together" << endl;
                }

                else if (strcmp(ch, "time") == 0 || strcmp(ch, "date") == 0)
                {

                    datetime();
                }

                else if (strcmp(ch, "open notepad") == 0)
                {
                    cout << "openining notepad....." << endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    BOOL CreateProcessA(LPCSTR, LPSTR, LPSECURITY_ATTRIBUTES, LPSECURITY_ATTRIBUTES, BOOL, DWORD, PVOID, LPCSTR, LPSTARTUPINFOA, LPPROCESS_INFORMATION);
                }
                else if (strcmp(ch, "shut down the pc") == 0)
                {
                    cout << "shutting down the pc in 30 sec........." << endl;
                    string phrase = "shutting down the pc in 30 sec";
                    string command = "espeak \"" + phrase + "\"";

                    system("C:\\windows\\system32\\shutdown /s /t 30 \n\n");
                }
                else if (strcmp(ch, "restart the pc") == 0)
                {
                    cout << "restarting  the pc in 30 sec........." << endl;
                    string phrase = "shutting down the pc in 30 sec";
                    string command = "espeak \"" + phrase + "\"";

                    system("C:\\windows\\system32\\shutdown /r /t 30 \n\n");
                }
                else if (strcmp(ch, "open google") == 0)
                {
                    string url = "start https://www.google.com/search?q=";
                    string str;

                    cout << endl
                         << endl
                         << "What Should i Search ===> ";
                    speak("What Should i Search");
                    getline(cin, str);

                    url += str;

                    speak("opening " + str + "on google");
                    system(string(url).c_str());
                    system("pause");
                }
                else if (strcmp(ch, "play music") == 0)
                {
                    cout << "Playing music..." << endl;
                    string phrase = "Playing music";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("MUSIC.wav");

                    return 0;
                }
                else if (strcmp(ch, "open youtube") == 0)
                {
                    string url = "start https://www.youtube.com/results?search_query=";
                    string str;

                    cout << endl
                         << endl
                         << "What Should i Search ===> ";
                    speak("What Should i Search");
                    getline(cin, str);

                    url += str;

                    speak("opening " + str + "on youtube");
                    system(string(url).c_str());
                    system("pause");
                }

                else if (strcmp(ch, "open instagram") == 0)
                {
                    system("start http://www.instagram.com");
                    cout << "Successfully Opened instagram" << endl
                         << endl;
                    speak("Successfully Opened instagram press any key to continue");
                    cout << endl;
                    system("pause");
                }
                else if (strcmp(ch, "play game") == 0 || strcmp(ch, "game") == 0)
                {
                    while (1)
                    {
                        srand(time(0));
                        int number = rand() % 100 + 1;
                        char you, comp;

                        if (number < 33)
                        {
                            comp = 's';
                        }
                        if (number > 33 && number < 66)
                        {
                            comp = 'w';
                        }
                        if (number > 66)
                        {
                            comp = 'g';
                        }

                        cout << "Please pick your choice\n";
                        speak("Please pick your choice");
                        cout << "1). s for snake\n";
                        cout << "1). w for water\n";
                        cout << "1). g for gun\n";
                        cout << "1). x for stop\n"
                             << endl;
                        cout << "Your choice ===> ";
                        cin >> you;
                        cout << endl;

                        int result = snakewatergun(you, comp);

                        cout << "You choose " << you << " and computer choosed " << comp << endl
                             << endl;
                        cout << "Result ===> ";
                        if (result == 0)
                        {
                            cout << "GAME DRAW!!!!\n"
                                 << endl;
                            speak("Game draw");
                        }
                        else if (result == 1)
                        {
                            cout << "CONGRATULATIONS YOU WON!!!!\n"
                                 << endl;
                            speak("CONGRATULATIONS YOU WON");
                        }
                        else if (result == -1)
                        {
                            cout << "YOU LOST!!! BETTER LUCK NEXT TIME....\n"
                                 << endl;
                            speak("you lost, better luck next time");
                        }
                        else if (you != 's' && you != 'w' && you != 'g' && you != 'x')
                        {
                            cout << "INVALI CHOICE PLEASE TRY AGAIN\n"
                                 << endl;
                            speak("invalid choice please try again");
                        }
                        else if (you == 'x')
                        {
                            cout << "Exiting the game\n"
                                 << endl;
                            speak("exiting the game");
                            break;
                        }
                    }
                }
                else
                {
                    cout << "Sorry could not understand your query please ty again !!!" << endl;
                    string phrase = "Sorry could not understand your query please ty again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

            } while (1);
        }
        else
        {
            system("cls");

            cout << "\t\t\t<------------------------------------------------- W E L C O M E ------------------------------------------------->" << endl;
            cout << "\t\t\t<---------------------------------------- I'M A VIRTUAL ASSISTANT VIRTUOSO ---------------------------------->" << endl;
            cout << "\t\t\t<----------------------------------------------- MY NAME IS VIRTUOSO ----------------------------------------->" << endl;
            cout << "\t\t\t<----------------------------------------------  I'M HERE TO HELP YOU ------------------------------------------>" << endl
                 << endl;

            cout << "----------------------" << endl;
            cout << "X Incorrect Pin X" << endl;
            cout << "----------------------" << endl
                 << endl;
            string phrase = "Incorrect Pin, Please enter correct pin";
            string command = "espeak \"" + phrase + "\"";
            const char *charCommand = command.c_str();
            system(charCommand);
        }
    } while (1);

    return 1;
}