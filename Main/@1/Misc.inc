
[Internet]
Meter=String
MeasureName=InternetStatus
MeasureName2=InternetName
MeasureName3=InternetType
MeasureName4=InternetDownloadSpeed
MeasureName5=InternetUploadSpeed
MeasureName6=MeasureUpTime
Autoscale=1
MEterStyle=Text

[Misc]
Meter=String
MeasureName=RecycleBinFiles
MeasureName2=RecycleBinSize
Measurename3=MeasureCPUName
Measurename4=MeasureGPUName
Measurename5=MeasureMotherboardName
Autoscale=1
InlineSetting=Color | #BarColor#
InlinePattern=#CRLF#(.*)#CRLF#(.*)#CRLF#(.*)
Text=Bin | F: %1, S:%2b#CRLF#CPU | %3#CRLF#GPU | %4#CRLF#MBD | %5
MEterStyle=Text

[Dot6]
Meter=String
MeterStyle=Dots | FirstAlign:#Align#