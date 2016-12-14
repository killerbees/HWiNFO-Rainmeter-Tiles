[Rainmeter]
Update=200
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
	#DynamicVariables=1
	#Measure=String
	#String=4000
	
[HWMin]
	#Measure=Plugin
	#Plugin=HWiNFO.dll
	#HWiNFOSensorId=#HWiNFOSensorId#
	#HWiNFOSensorInstance=#HWiNFOSensorInstance#
	#HWiNFOEntryId=#HWiNFOEntryId#
	#HWiNFOType=MinimumValue
	#Percentual=0
	#DynamicVariables=1
	Measure=String
	String=0
	
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
	MinValue=[HWMin]
	MaxValue=[HWMax]
	#MinValue=0
	#MaxValue=3000
	#Percentual=0

[HWMeasureDamped]
	Measure=Plugin
	Plugin=HWiNFO.dll
	HWiNFOSensorId=#HWiNFOSensorId#
	HWiNFOSensorInstance=#HWiNFOSensorInstance#
	HWiNFOEntryId=#HWiNFOEntryId#
	HWiNFOType=CurrentValue
	DynamicVariables=1
	AverageSize=50
	MinValue=[HWMin]
	MaxValue=[HWMax]
	#MinValue=0
	#MaxValue=3000
	#Percentual=0	
	
[HWMeasureiNV]
	Measure=Plugin
	Plugin=HWiNFO.dll
	HWiNFOSensorId=#HWiNFOSensorId#
	HWiNFOSensorInstance=#HWiNFOSensorInstance#
	HWiNFOEntryId=#HWiNFOEntryId#
	HWiNFOType=CurrentValue
	DynamicVariables=1
	MinValue=[HWMin]
	MaxValue=[HWMax]
	InvertMeasure=1
	#MinValue=0
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
	MinValue=[HWMin]
	MaxValue=[HWMax]
	#MinValue=0
	#MaxValue=3000
	#Percentual=0	

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
MeasureName=HWMeasure
DynamicVariables=1
X=190
Y=179
FontColor=8,250,253, 190
FontFace=#FontName#
FontSize=10
StringAlign=RIGHT
AntiAlias=1
Text= [HWMax][HWUnit]

[min]
Meter=STRING
MeasureName=HWMin
X=20
Y=179
FontColor=8,250,253, 190
FontFace=#FontName#
FontSize=10
StringAlign=LEFT
AntiAlias=1
Text=[HWMin][HWUnit]

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
	

	
[TopHistoLine]
	Meter=Roundline
	MeasureName=HWMeasure
	X=85r
	Y=175
	#H=63
	#W=63
	StartAngle=3.14159
	RotationAngle=3.14159
	
	LineLength=80
	LineSTart=40
	LineWidth=3
	LineColor=8,250,253, 200
	Solid =0
	AntiAlias=1
	#AutoScale=
	
	
[DampedHistoLine]
	Meter=Roundline
	MeasureName=HWMeasureDamped
	X=0r
	Y=0r
	#H=63
	#W=63
	StartAngle=3.14159
	RotationAngle=3.14159
	LineLength=80
	LineSTart=40
	LineWidth=3
	LineColor=150,150,100, 200
	Solid =0
	AntiAlias=1
	#AutoScale=
	
[TransHistobg]
	Meter=Roundline
	MeasureName=HWMeasureINV
	X=0r
	Y=0r
	#H=63
	#W=63
	#StartAngle=3.14159
	RotationAngle=-3.14159

	LineLength=73
	LineSTart=68
	LineColor=8,250,253, 60
	Solid =1
	AntiAlias=1

[TransHisto]
	Meter=Roundline
	MeasureName=HWMeasure
	X=0r
	Y=0r
	#H=63
	#W=63
	StartAngle=3.14159
	RotationAngle=3.14159

	LineLength=80
	LineSTart=60
	LineColor=8,250,253, 160
	Solid =1
	AntiAlias=1


[MainDigital]
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