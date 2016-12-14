[Rainmeter]
Update=500
BackgroundMode=2
SolidColor=00,21,38,150

[Background]
Meter=IMAGE
#ImageName=..\tile4.png
#ImageTint=255,255,255,80
X=5
Y=3
W=190
H=190

[Variables]
	#Measure=HWMeasure
	#Label=HWLabel
	FontName=DS-Digital
	
[HWUnit]
	Measure=Plugin
	Plugin=HWiNFO.dll
	HWiNFOSensorId=#HWiNFOSensorId#
	HWiNFOSensorInstance=#HWiNFOSensorInstance#
	HWiNFOEntryId=#HWiNFOEntryId#
	HWiNFOType=Units
	#RegExpSubstitute=1
	#Substitute="^(.*]: )":"","(: .*)$":""
	UpdateDivider=30
	
[HWMax]
	Measure=Plugin
	Plugin=HWiNFO.dll
	HWiNFOSensorId=#HWiNFOSensorId#
	HWiNFOSensorInstance=#HWiNFOSensorInstance#
	HWiNFOEntryId=#HWiNFOEntryId#
	HWiNFOType=MaximumValue
	DynamicVariables=1
	#Measure=String
	#String=4000
	
[HWMin]
	Measure=Plugin
	Plugin=HWiNFO.dll
	HWiNFOSensorId=#HWiNFOSensorId#
	HWiNFOSensorInstance=#HWiNFOSensorInstance#
	HWiNFOEntryId=#HWiNFOEntryId#
	HWiNFOType=MinimumValue
	#Percentual=0
	DynamicVariables=1
	#Measure=String
	#String=0
	
[HWTitle]
	Measure=Plugin
	Plugin=HWiNFO.dll
	HWiNFOSensorId=#HWiNFOSensorId#
	HWiNFOSensorInstance=#HWiNFOSensorInstance#
	HWiNFOEntryId=#HWiNFOEntryId#
	HWiNFOType=SensorName
	RegExpSubstitute=1
	Substitute="^(.*]: )":"","(: .*)$":""
	UpdateDivider=30	
	
[HWLabel]
	Measure=Plugin
	Plugin=HWiNFO.dll
	HWiNFOSensorId=#HWiNFOSensorId#
	HWiNFOSensorInstance=#HWiNFOSensorInstance#
	HWiNFOEntryId=#HWiNFOEntryId#
	HWiNFOType=EntryName
	RegExpSubstitute=1
	Substitute="^(.*]: )":"","(: .*)$":""
	UpdateDivider=30	

[HWMeasure]
	Measure=Plugin
	Plugin=HWiNFO.dll
	HWiNFOSensorId=#HWiNFOSensorId#
	HWiNFOSensorInstance=#HWiNFOSensorInstance#
	HWiNFOEntryId=#HWiNFOEntryId#
	HWiNFOType=CurrentValue
	DynamicVariables=1
	#MinValue=[HWMin]
	MaxValue=[HWMax]
	MinValue=-40
	#MaxValue=3000
	#Percentual=0
	
[HWAverage]
	Measure=Plugin
	Plugin=HWiNFO.dll
	HWiNFOSensorId=#HWiNFOSensorId#
	HWiNFOSensorInstance=#HWiNFOSensorInstance#
	HWiNFOEntryId=#HWiNFOEntryId#
	HWiNFOType=AverageValue
	DynamicVariables=1
	InvertMeasure=1
	MinValue=[HWMin]
	MaxValue=[HWMax]
	
[title]
Meter=STRING
MeasureName=HWLabel
MeasureName2=HWUnit
X=14
Y=78
FontColor=8,250,253, 190
FontFace=#FontName#
FontSize=12
StringAlign=left
AntiAlias=1
Text=%1 %2

[label]
Meter=STRING
MeasureName=HWTitle
X=14
Y=64
FontColor=8,250,253, 190
FontFace=#FontName#
FontSize=12
StringAlign=Left
AntiAlias=1
Text=%1

[unit]
Meter=STRING
MeasureName=HWUnit
X=180
Y=39
FontColor=8,250,253, 190
FontFace=#FontName#
FontSize=14
StringAlign=RIGHT
FontFace=DS-Digital
AntiAlias=1
Text=%1

[max]
Meter=STRING
MeasureName=HWMax
DynamicVariables=1
X=20
Y=92
FontColor=8,250,253, 190
FontFace=#FontName#
FontSize=10
StringAlign=LEFT
AntiAlias=1
Text= %1[HWUnit]

[min]
Meter=STRING
MeasureName=HWMin
X=20
Y=167
FontColor=8,250,253, 190
FontFace=#FontName#
FontSize=10
StringAlign=LEFT
AntiAlias=1
Text= %1[HWUnit]

[avg]
Meter=STRING
MeasureName=HWAverage
X=20
Y=50
FontColor=8,250,253, 190
FontFace=#FontName#
FontSize=10
StringAlign=LEFT
AntiAlias=1
Text=Av: %1[HWUnit]

[100RedLine]
	Meter=IMAGE
	X=20
	Y=93
	H=1
	W=160
	SolidColor=152, 152, 52, 200
[99RedTransLine]
	#Meter=IMAGE
	#X=20
	#Y=94
	#W=160
	#H=4
	#SolidColor=160, 52, 52, 100
[75TransLine]
	Meter=IMAGE
	X=20
	Y=114
	H=1
	W=160
	#SolidColor=00,21,38, 40
	SolidColor=152, 152, 52, 200
[50TransLine]
	Meter=IMAGE
	X=20
	Y=135
	H=1
	W=160
	#SolidColor=00,21,38, 40
	SolidColor=152, 152, 52, 200
[25TransLine]
	Meter=IMAGE
	X=20
	Y=156
	H=1
	W=160
	#SolidColor=00,21,38, 40
	SolidColor=152, 152, 52, 200
[0GreyLine]
	Meter=IMAGE
	X=20
	Y=180
	H=1
	W=165
	#SolidColor=42, 42, 42, 255
	SolidColor=152, 152, 52, 200

[AVGHistoLine]
	Meter=Line
	MeasureName=HWAverage
	X=0r
	Y=98
	H=83
	W=165
	#LineColor=8,250,253, 190
	LineColor=152, 52, 52, 200
	AntiAlias=1
	AutoScale=1
	
[TopHistoLine]
	Meter=Line
	MeasureName=HWMeasure
	X=0r
	Y=98
	H=83
	W=165
	LineColor=250,50,53, 190
	#AntiAlias=1
	#AutoScale=1
	
#[TransHisto]
#	Meter=HISTOGRAM
#	MeasureName=HWMeasure
#	X=0r
#	Y=98
#	H=83
#	W=165
#	PrimaryColor=8,250,253, 40
#	AntiAlias=1
#	#AutoScale=1

[CPUUsage%]
	Meter=STRING
	FontFace=DS-Digital
	MeasureName=HWMeasure
	X=160
	Y=12
	FontColor=8,250,253, 190
	FontFace=#FontName#
	FontSize=36
	StringAlign=RIGHT
	AntiAlias=1
	Text=%1