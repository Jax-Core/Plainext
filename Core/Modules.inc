[Option20]
Meter=String
Text=Prefix
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S19203wds]
Meter=Shape
MeterStyle=Set.Div:S
[Option201]
Meter=String
Text=Name
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:3wds]
Meter=Shape
MeterStyle=Set.Div:S
[Option21]
Meter=String
Text=Time
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S192a03ds]
Meter=Shape
MeterStyle=Set.Div:S
[Option22]
Meter=String
Text=CPU
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S192z03ds]
Meter=Shape
MeterStyle=Set.Div:S
[Option23]
Meter=String
Text=RAM
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S19203cds]
Meter=Shape
MeterStyle=Set.Div:S
[Option24]
Meter=String
Text=GPU
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S192e03ds]
Meter=Shape
MeterStyle=Set.Div:S
[Option25]
Meter=String
Text=Drvies
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S1q9203ds]
Meter=Shape
MeterStyle=Set.Div:S
[Option26]
Meter=String
Text=Misc (Internet, trashbin, uptime)
MeterStyle=Set.String:S | Set.OptionName:S



[Prefix]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option20:Y]-#Set.P#+(-20/2+8)*[Set.S])
[Name]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option201:Y]-#Set.P#+(-20/2+8)*[Set.S])
[time]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option21:Y]-#Set.P#+(-20/2+8)*[Set.S])
[cpu]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option22:Y]-#Set.P#+(-20/2+8)*[Set.S])
[ram]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option23:Y]-#Set.P#+(-20/2+8)*[Set.S])
[gpu]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option24:Y]-#Set.P#+(-20/2+8)*[Set.S])
[drives]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option25:Y]-#Set.P#+(-20/2+8)*[Set.S])
[misc]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option26:Y]-#Set.P#+(-20/2+8)*[Set.S])