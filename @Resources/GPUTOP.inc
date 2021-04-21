
[MeasureTopUsage1GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=1
Substitute="":"."

[MeasureTopUsage2GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=2
Substitute="":"."

[MeasureTopUsage3GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=3
Substitute="":"."

[MeasureTopUsage4GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=4
Substitute="":"."

[MeasureTopUsage5GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=
Substitute="":"."

[MeasureTopUsage6GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=GPU
Blacklist=#Blacklist#
Percent=0
Index=6
Substitute="":"."

;------------------------------------------ Memory Usage -------------------------------------------

[MeasureTopMemory1GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage1GPU]
Group=Process1
DynamicVariables=1

[MeasureTopMemoryShared1GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage1GPU]
Group=Process1
DynamicVariables=1

[MeasureTopMemory2GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage2GPU]
Group=Process2
DynamicVariables=1

[MeasureTopMemoryShared2GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage2GPU]
Group=Process2
DynamicVariables=1

[MeasureTopMemory3GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage3GPU]
Group=Process3
DynamicVariables=1

[MeasureTopMemoryShared3GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage3GPU]
Group=Process3
DynamicVariables=1

[MeasureTopMemory4GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage4GPU]
Group=Process4
DynamicVariables=1

[MeasureTopMemoryShared4GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage4GPU]
Group=Process4
DynamicVariables=1

[MeasureTopMemory5GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage5GPU]
Group=Process5
DynamicVariables=1

[MeasureTopMemoryShared5GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage5GPU]
Group=Process5
DynamicVariables=1

[MeasureTopMemory6GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAM
Percent=0
Name=[MeasureTopUsage6GPU]
Group=Process6
DynamicVariables=1

[MeasureTopMemoryShared6GPU]
Measure=Plugin
Plugin=UsageMonitor
Alias=VRAMSHARED
Percent=0
Name=[MeasureTopUsage6GPU]
Group=Process6
DynamicVariables=1

;---------------------------------------------- Calcs ----------------------------------------------

[CalcTopMemory1GPU]
Measure=Calc
Formula=(MeasureTopMemory1GPU + MeasureTopMemoryShared1GPU)
Group=Process1

[CalcTopMemory2GPU]
Measure=Calc
Formula=(MeasureTopMemory2GPU + MeasureTopMemoryShared2GPU)
Group=Process2

[CalcTopMemory3GPU]
Measure=Calc
Formula=(MeasureTopMemory3GPU + MeasureTopMemoryShared3GPU)
Group=Process3

[CalcTopMemory4GPU]
Measure=Calc
Formula=(MeasureTopMemory4GPU + MeasureTopMemoryShared4GPU)
Group=Process4

[CalcTopMemory5GPU]
Measure=Calc
Formula=(MeasureTopMemory5GPU + MeasureTopMemoryShared5GPU)
Group=Process5

[CalcTopMemory6GPU]
Measure=Calc
Formula=(MeasureTopMemory6GPU + MeasureTopMemoryShared6GPU)
Group=Process6