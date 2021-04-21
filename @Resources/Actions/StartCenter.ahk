#SingleInstance Ignore
#NoTrayIcon
Unload := 0

$LWin::
	Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasureGroup "UpdateOnLoad" "PowerToys+\StartCenter"""
	Unload := 1
	return

~Esc::
	if (Unload = 1)
		Run "C:\Program Files\Rainmeter\Rainmeter.exe "!UpdateMeasure "Unload" "PowerToys+\StartCenter"""
		Unload := 0
	return
return

LWin & F1::
MsgBox, Windows key + F1
return
