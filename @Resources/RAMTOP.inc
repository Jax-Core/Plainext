[MeasureTopUsage1RAM]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Percent=0
Index=1
Substitute="":"."

[MeasureTopUsage2RAM]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Percent=0
Index=2
Substitute="":"."

[MeasureTopUsage3RAM]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Percent=0
Index=3
Substitute="":"."

[MeasureTopUsage4RAM]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Percent=0
Index=4
Substitute="":"."

[MeasureTopUsage5RAM]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Percent=0
Index=5
Substitute="":"."

[MeasureTopUsage6RAM]
Measure=Plugin
Plugin=UsageMonitor
Alias=RAM
Percent=0
Index=6
Substitute="":"."

;[MeasureTopUsage7RAM]
;Measure=Plugin
;Plugin=UsageMonitor
;Alias=RAM
;Percent=0
;Index=7

;[MeasureTopUsage8RAM]
;Measure=Plugin
;Plugin=UsageMonitor
;Alias=RAM
;Percent=0
;Index=8

;[MeasureTopUsage9RAM]
;Measure=Plugin
;Plugin=UsageMonitor
;Alias=RAM
;Percent=0
;Index=9

;[MeasureTopUsage10RAM]
;Measure=Plugin
;Plugin=UsageMonitor
;Alias=RAM
;Percent=0
;Index=10

;---------------------------------------------- Calcs ----------------------------------------------

[CalcTopMemory1RAM]
Measure=Calc
Formula=MeasureTopUsage1RAM
Group=Process1

[CalcTopMemory2RAM]
Measure=Calc
Formula=MeasureTopUsage2RAM
Group=Process2

[CalcTopMemory3RAM]
Measure=Calc
Formula=MeasureTopUsage3RAM
Group=Process3

[CalcTopMemory4RAM]
Measure=Calc
Formula=MeasureTopUsage4RAM
Group=Process4

[CalcTopMemory5RAM]
Measure=Calc
Formula=MeasureTopUsage5RAM
Group=Process5

[CalcTopMemory6RAM]
Measure=Calc
Formula=MeasureTopUsage6RAM
Group=Process6

;[CalcTopMemory7RAM]
;Measure=Calc
;Formula=MeasureTopUsage7
;Group=Process7
;Disabled=1

;[CalcTopMemory8RAM]
;Measure=Calc
;Formula=MeasureTopUsage8
;Group=Process8
;Disabled=1

;[CalcTopMemory9RAM]
;Measure=Calc
;Formula=MeasureTopUsage9
;Group=Process9
;Disabled=1

;[CalcTopMemory10RAM]
;Measure=Calc
;Formula=MeasureTopUsage10
;Group=Process10
;Disabled=1