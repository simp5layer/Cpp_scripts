// Typing bot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
	while (true)
	{
		if (GetAsyncKeyState(VK_RSHIFT))
		{
			//{for (;;)
				cout << "bruh bruh bruh bruh bruh bruh bruh bruh bruh bruh" << endl;
			    Sleep(500);
			    //system("CLS");
			    //Sleep(500);
			    keybd_event(0x57, 0, KEYEVENTF_EXTENDEDKEY, 0);
			    Sleep(10);
			    keybd_event(0x57, 0, KEYEVENTF_KEYUP, 0);
			    Sleep(500);
			    keybd_event(0x41, 0, KEYEVENTF_EXTENDEDKEY, 0);
			    Sleep(10);
			    keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0);
			    Sleep(500);
			    keybd_event(0x47, 0, KEYEVENTF_EXTENDEDKEY, 0);
				Sleep(10);
			    keybd_event(0x47, 0, KEYEVENTF_KEYUP, 0);
				Sleep(500);
				keybd_event(0x4D, 0, KEYEVENTF_EXTENDEDKEY, 0);
				Sleep(10);
				keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0);
				Sleep(500);
				keybd_event(0x49, 0, KEYEVENTF_EXTENDEDKEY, 0);
				Sleep(10);
				keybd_event(0x49, 0, KEYEVENTF_KEYUP, 0);
				Sleep(500);
				keybd_event(0x0D, 0, KEYEVENTF_EXTENDEDKEY, 0);
				Sleep(10);
				keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0);
				Sleep(500);
				keybd_event(VK_RSHIFT, 0, KEYEVENTF_EXTENDEDKEY, 0);
				Sleep(10);
				keybd_event(VK_RSHIFT, 0, KEYEVENTF_KEYUP, 0);
				Sleep(10);

				
			//}
		}
	}
	return 0;
}
