#include <Windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR szCmdLine, int iCmdShow)
{
  MessageBox(NULL, TEXT("Hello, Windows 98!"), TEXT("HelloMsg"), MB_RETRYCANCEL | MB_ICONASTERISK);
  return 0;
}