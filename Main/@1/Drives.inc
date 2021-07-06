

[ResourceGraphDrives]
Meter=String
Autoscale=1
MeasureName=DriveCFree
MeasureNAme2=DriveCTotal
MeasureName3=MeasureDriveCRead
MeasureNAme4=MeasureDriveCWrite
MeasureName5=DriveDFree
MeasureNAme6=DriveDTotal
MeasureName7=MeasureDriveDRead
MeasureNAme8=MeasureDriveDWrite
Text=C: //////////////////// [DriveCPercent:1]%#CRLF#F: %1B T: %2B | R: %3 W: %4#CRLF#D: //////////////////// [DriveDPercent:1]%#CRLF#F: %5B T: %6B | R: %7 W: %8
InlineSetting=Color | #BarColor#
InlinePattern=.*#CRLF#.*#CRLF#.*#CRLF#(.*)#CRLF#(.*)#CRLF#(.*)
InlineSetting2=Color | #BarColor#
InlinePattern2=\/
InlineSetting3=Color | #Accent#
InlinePattern3=C: (\/{[DriveCActual:0]}).*
InlineSetting4=Color | #Accent#
InlinePattern4=D: (\/{[DriveDActual:0]}).*
DynamicVariables=1
MEterStyle=Text

[Dot5]
Meter=String
MEterStyle=Dots