#SingleInstance Force
#NoTrayIcon
SetTitleMatchMode, 2
DetectHiddenWindows, On
Unload := 0

CloseScript(Name)
	{
	DetectHiddenWindows On
	SetTitleMatchMode RegEx
	IfWinExist, i)%Name%.* ahk_class AutoHotkey
		{
		WinClose
		WinWaitClose, i)%Name%.* ahk_class AutoHotkey, , 2
		If ErrorLevel
			return "Unable to close " . Name
		else
			return "Closed " . Name
		}
	else
		return Name . " not found"
	}

if WinExist("StartCenter.ahk" . " ahk_class AutoHotkey")
{
	CloseScript("StartCenter.ahk")
	Sleep 100
	Run, AHKOld.exe "StartCenter.ahk"
}
	



IniRead, OutputVar, Hotkeys.ini, Variables, MultiRun

Hotkey,#%OutputVar%,Button
Return

Button:
Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasureGroup "UpdateOnLoad" "Plainext\MultiRun"""
; Unload := 1
Return

; ~Esc::
; 	if (Unload = 1) {
; 		Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "Unload" "PowerToys+\MultiRun""""
; 		Unload := 0
; 		return
; 	}
; return