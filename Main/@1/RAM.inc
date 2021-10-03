

[ResourceGraph2]
Meter=String
Text=RAM //////////////////// [MeasureRAM:3]%
InlineSetting=Color | #BarColor#
InlinePattern=\/
InlineSetting2=Color | #Accent#
InlinePattern2=RAM (\/{[RAMTextActual:0]}).*
DynamicVariables=1
MEterStyle=Text

[RAMtopitem]
Meter=String
MeterStyle=Text
MeasureName=MeasureTopUsage1RAM
MeasureName2=MeasureTopUsage2RAM
MeasureName3=MeasureTopUsage3RAM
MeasureName4=MeasureTopUsage4RAM
MeasureName5=MeasureTopUsage5RAM
MeasureName6=MeasureTopUsage6RAM
Text=%1#CRLF#%2#CRLF#%3#CRLF#%4#CRLF#%5#CRLF#%6
W=(#Scale#*240)
ClipString=1

[RAMvbar1]
Meter=String
MeterStyle=VBar

[RAMtopused]
Meter=String
Y=r
MeasureName=CalcTopMemory1RAM
MeasureName2=CalcTopMemory2RAM
MeasureName3=CalcTopMemory3RAM
MeasureName4=CalcTopMemory4RAM
MeasureName5=CalcTopMemory5RAM
MeasureName6=CalcTopMemory6RAM
MeterStyle=Text | VAlign:#Align#
Autoscale=1k
Text=%1B#CRLF#%2B#CRLF#%3B#CRLF#%4B#CRLF#%5B#CRLF#%6B#CRLF#
DynamicVariables=1
NumOfDecimals=1
W=(#Scale#*84)
ClipString=1

[Dot3]
Meter=String
MeterStyle=Dots | FirstAlign:#Align#


@includeRAMTOP=#ROOTCONFIGPATH#Main\@Measures\RAMTOP.inc