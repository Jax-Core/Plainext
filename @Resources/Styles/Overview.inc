[DisableHidden]
Measure=Calc
OnUpdateAction=[!DisableMeasureGroup NonOverview]
Group=NonOverview

[VBar]
Hidden=1

[ResourceGraph1]
Text=CPU //////////////////// [MeasureCPU:3]%

[CPUtopitem]
Hidden=1
[CPUtopused]
Hidden=1

[RAMtopitem]
Hidden=1
[RAMtopused]
Hidden=1

[GPUtopitem]
Hidden=1
[GPUtopused]
Hidden=1
[GPUtoppercent]
Hidden=1

[Dot1]
Hidden=1
[Dot2]
Hidden=1
[Dot3]
Hidden=1

[ResourceGraphDrives]
Text=C: //////////////////// [DriveCPercent:1]%#CRLF#D: //////////////////// [DriveDPercent:1]%

[Misc]
Text=Bin | F: %1, S:%2b

