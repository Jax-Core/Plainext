
[PrefixTextHeader]
Meter=String
Text=Prefix Text
MeterStyle=Set.String:S | Set.OptionCat:S

[PrefixText]
Meter=Shape
X=(30*[Set.S])
Y=(10*[Set.S])R
Container=ContentContainer
DynamicVariables=1
Shape=Rectangle 0,0,(#Set.W#-#Set.L#-#Set.P#*3),(130*[Set.S]),3,3 | StrokeWidth 2 | Fill Color 0,0,0,1 | Extend Fill
Fill=Stroke Color 255,255,255,50
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Stroke Color 255,255,255,150"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Stroke Color 255,255,255,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Leftmouseupaction=["#SKINSPATH##Skin.Name#\@Resources\Vars.inc"][!CommandMEasure CoreBridge "start('', 'Edit in file', [[Please edit the variables file directly.]], '', '1500')"]
[Value]
Meter=String
X=(5*[Set.S])r
Y=(5*[Set.S])r
Text=#PrefixText#
StringAlign=Left
FontSize=(10*[Set.S])
MeterStyle=Set.String:S
Container=ContentContainer
DynamicVariables=1

[Option01]
Meter=String
Y=(150*[Set.S])r
Text=Line breaker
MeterStyle=Set.String:S | Set.OptionName:S

;================================================================================================================================================================================

[DrivesTitle]
Meter=String
Text=Drives
MeterStyle=Set.String:S | Set.OptionCat:S

[Option31]
Meter=String
Text=Drive characters, no seperation needed
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S12323292a03ds]
Meter=Shape
MeterStyle=Set.Div:S
[Option32]
Meter=String
Text=Generate drives
MeterStyle=Set.String:S | Set.OptionName:S

;================================================================================================================================================================================


;================================================================================================================================================================================

;; BOOL EXMAPLE
; [Set.Bool:SVarName]
; Meter=Shape
; MeterStyle=Set.Bool:S
; Y=([VarOption:Y]-#Set.P#+(-20/2+8)*[Set.S])

;; TEXT INPUT EXAMPLE
; [TextVarName]
; Meter=Shape
; Set.Textbox:S
; Y=([VarOption:Y]-#Set.P#+(-30/2+8)*[Set.S])
; [VarOptionNumber]
; Meter=String
; Text=TextVarName
; MeterStyle=Set.String:S | Set.Value:S

[BreakerString]
Meter=Shape
MeterStyle=Set.Textbox:S
Y=([Option01:Y]-#Set.P#+(-30/2+8)*[Set.S])
Leftmouseupaction=["#SKINSPATH##Skin.Name#\@Resources\Vars.inc"][!CommandMEasure CoreBridge "start('', 'Edit in file', [[Please edit the variables file directly.]], '', '1500')"]
[CoreBridge]
Measure=Script
ScriptFile=#SKINSPATH##JaxCore\@Resources\Lua\CoreElements\Toast.lua
[Value01]
Meter=String
Text=#BreakerString#
MeterStyle=Set.String:S | Set.Value:S

;================================================================================================================================================================================


[DriveChar]
Meter=Shape
MeterStyle=Set.Textbox:S
Type=Txt
Y=([Option31:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value31]
Meter=String
Text=#DriveChar#
MeterStyle=Set.String:S | Set.Value:S
[Button32]
Meter=Shape
MeterStyle=Set.Button:S
OverColor=0,255,10,200
LeaveColor=0,255,10,100
Y=([Option32:Y]-#Set.P#+(-30/2+8)*[Set.S])
Act=[!CommandMeasure DrivesGen:M "GenDrive('#DriveChar#')"][!UpdateMeasure Auto_Refresh:M]
[Value32]
Meter=String
Text=Generate
MeterStyle=Set.String:S | Set.Value:S


[DrivesGen:M]
Measure=Script
ScriptFile=#SKINSPATH##Skin.Name#\Core\GenPlainextDrives.lua