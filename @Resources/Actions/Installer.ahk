#SingleInstance, Force
SendMode Input
SetWorkingDir, %A_ScriptDir%

Run, INSTALL.rmskin
WinWait, Rainmeter Skin Installer
Sleep, 100
Send, {Enter}

ExitApp