[Variables]
Size=14
Font=Minecraft
FontAlias=0
FontWeight=100
Accent=232,48,60

;//////////////////////////////////////////////////////////////////////
;//////////////////////////////////////////////////////////////////////
;//////////////////////////////////////////////////////////////////////

[Prefix]
Text=MOJANG STUDIOS
FontColor=232,48,60

[Title]
FontWeight=#FontWeight#
Y=10R
FontColor=#FontColor#
Fontsize=(#Size#*2)
Text=%1 %2
InlinePattern=\s(.*)
InlineSetting=Size | (#Size#+8)
InlinePattern2=\s(.*)
InlineSetting2=Color | 254,254,0
LeftMouseUpAction=[]
RightMouseUpAction=[]