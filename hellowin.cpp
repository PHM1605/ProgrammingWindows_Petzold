#include <iostream>
#include <string>
#pragma comment(lib, "winmm.lib")
#include <Windows.h>
#include <mmsystem.h>

using namespace std;

int main()
{
    cout << "Playing music\n";
    PlaySound(TEXT("taunt.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
    std::string input;
    std::getline(std::cin, input);
    PlaySound(0, 0, 0);
    std::cout << "Stopped music\n";
   
    return 0;
}