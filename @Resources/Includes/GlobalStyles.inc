
[Text]
X=r
Y=R
FontSize=(#Scale#*12)
FontFace=#Font#
AntiAlias=#FontAlias#
StringAlign=#Align#
FontColor=#FontColor#
FontWeight=#FontWeight#
SolidColor=0, 0, 0, 1
Group=Wildcard

[Dots]
Y=R
AntiAlias=#FontAlias#
FontSize=(#Scale#*12)
StringAlign=#Align#
FontColor=#FontColor#
SolidColor=0, 0, 0, 1
Text=#BreakerString#
FontWeight=900
Group=Wildcard
FontFace=#Font#

[VBar]
X=(#W#/2)
Y=r
AntiAlias=#FontAlias#
FontSize=(#Scale#*12)
StringAlign=#Align#
FontColor=#FontColor#
SolidColor=0, 0, 0, 1
Text=|#CRLF#|#CRLF#|#CRLF#|#CRLF#|#CRLF#|#CRLF#
fontface=#Font#
Group=Wildcard


[FirstAlign:Left]
X=#In#
[FirstAlign:Right]
X=(#W#-#In#)
[VAlign:Left]
X=(5*#Scale#)R
[VAlign:Right]
X=(240*#scale#)
[VAlign2:Left]
X=(5*#Scale#)R
[VAlign2:Right]
X=(90*#scale#)