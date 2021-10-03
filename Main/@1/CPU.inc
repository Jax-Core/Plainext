


[ResourceGraph1]
Meter=String
MeasureName=CPUPhyC
MeasureName2=CPUVirC
Text=CPU //////////////////// [MeasureCPU:3]%#CRLF#Physical.%1 Virtual.%2
InlineSetting=Color | #BarColor#
InlinePattern=\/
InlineSetting2=Color | #Accent#
InlinePattern2=CPU (\/{[CPUTextActual:0]}).*
DynamicVariables=1
MEterStyle=Text

[CPUtopitem]
Meter=String
MeterStyle=Text
MeasureName=MeasureTopUsage1CPU
MeasureName2=MeasureTopUsage2CPU
MeasureName3=MeasureTopUsage3CPU
MeasureName4=MeasureTopUsage4CPU
MeasureName5=MeasureTopUsage5CPU
MeasureName6=MeasureTopUsage6CPU
Text=%1#CRLF#%2#CRLF#%3#CRLF#%4#CRLF#%5#CRLF#%6
W=(#Scale#*240)
ClipString=1

[CPUvbar1]
Meter=String
MeterStyle=VBar

[CPUtopused]
Meter=String
Y=r
MeterStyle=Text | VAlign:#Align#
Text=[MeasureTopUsage1CPU:1]%#CRLF#[MeasureTopUsage2CPU:1]%#CRLF#[MeasureTopUsage3CPU:1]%#CRLF#[MeasureTopUsage4CPU:1]%#CRLF#[MeasureTopUsage5CPU:1]%#CRLF#[MeasureTopUsage6CPU:1]%#CRLF#
DynamicVariables=1
NumOfDecimals=1
W=(#Scale#*84)
ClipString=1

[Dot2]
Meter=String
MeterStyle=Dots | FirstAlign:#Align#


@includeCPUTOP=#ROOTCONFIGPATH#Main\@Measures\CPUTOP.inc