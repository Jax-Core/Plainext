#NoTrayIcon

IniRead, OutputVar, CloseInstance.ini, Variables, Module

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

if (OutputVar = "PermaClip") {
	CloseScript("PermaClip.ahk")
}
else if (OutputVar = "Dashboard") {
	CloseScript("Dashboard.ahk")
}
else if (OutputVar = "SnipControl") {
	CloseScript("SnipControl.ahk")
}
else if (OutputVar = "MultiRun") {
	CloseScript("MultiRun.ahk")
}
else if (OutputVar = "Taskbar") {
	CloseScript("Hidetaskbar.ahk")
}
else if (OutputVar = "StartCenter") {
	CloseScript("StartCenter.ahk")
}
else if (OutputVar = "Tray") {
	CloseScript("StartTray.ahk")
}
	
	Return
ExitApp