[Rainmeter]
Update=500
#BackgroundMode=2
#SolidColor=00,21,38,255

[Background]
Meter=IMAGE
ImageName=..\tile4.png
ImageTint=255,255,255,255
X=5
Y=3
W=190
H=190

[Variables]
	#Measure=HWMeasure
	#Label=HWLabel
	FontName=Tahoma
	
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
Y=68
FontColor=180,180,180, 255
FontFace=#FontName#
FontSize=10
StringAlign=CENTRE
AntiAlias=1
Text=%1 - %2

[unit]
Meter=STRING
MeasureName=HWUnit
X=180
Y=39
FontColor=00,21,38, 255
FontFace=#FontName#
FontSize=14
StringAlign=RIGHT
AntiAlias=1
Text=%1

[label]
Meter=STRING
MeasureName=HWTitle
X=32
Y=120
FontColor=00,21,38, 150
FontFace=#FontName#
FontSize=8
StringAlign=Centre
AntiAlias=1
Text=%1

[max]
Meter=STRING
MeasureName=HWMeasure
DynamicVariables=1
X=20
Y=92
FontColor=20,20,20, 200
FontFace=#FontName#
FontSize=8
StringAlign=LEFT
AntiAlias=1
Text= [HWMax][HWUnit]

[min]
Meter=STRING
MeasureName=HWMin
X=20
Y=167
FontColor=20,20,20, 200
FontFace=#FontName#
FontSize=8
StringAlign=LEFT
AntiAlias=1
Text=[HWMin][HWUnit]

[avg]
Meter=STRING
MeasureName=HWAverage
X=20
Y=50
FontColor=00, 82, 42, 255
FontFace=#FontName#
FontSize=8
StringAlign=LEFT
AntiAlias=1
Text=Av: %1[HWUnit]

[100RedLine]
	Meter=IMAGE
	X=20
	Y=93
	H=1
	W=160
	SolidColor=160, 52, 52, 255
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
	SolidColor=00,21,38, 40
[50TransLine]
	Meter=IMAGE
	X=20
	Y=135
	H=1
	W=160
	SolidColor=00,21,38, 40
[25TransLine]
	Meter=IMAGE
	X=20
	Y=156
	H=1
	W=160
	SolidColor=00,21,38, 40
[0GreyLine]
	Meter=IMAGE
	X=20
	Y=180
	H=1
	W=165
	SolidColor=42, 42, 42, 255


[AVGHistoLine]
	Meter=Line
	MeasureName=HWAverage
	X=0r
	Y=98
	H=83
	W=165
	LineColor=00, 182, 42, 255
	AntiAlias=1
	
[TopHistoLine]
	Meter=Line
	MeasureName=HWMeasure
	X=0r
	Y=98
	H=83
	W=165
	LineColor=00,21,38, 255
	AntiAlias=1
	#AutoScale=1
	
#[TransHisto]
#	Meter=HISTOGRAM
#	MeasureName=HWMeasure
#	StartAngle=(Rad(180))
#	RotationAngle=(Rad(180))
#	LineWidth=5
#	LineStart=50
#	LineLength=100
#	Solid=1
#	SolidColor=42, 42, 42, 255
#	X=0r
#	Y=0r
#	H=83
#	W=140
	
	
[TransHisto]
	Meter=HISTOGRAM
	MeasureName=HWMeasure
	X=0r
	Y=98
	H=83
	W=165
	#115,115,115
	#PrimaryColor=35,47,108,150
	PrimaryColor=00,45,73,100
	
	AntiAlias=1
	#AutoScale=

[CPUUsage%]
	Meter=STRING
	MeasureName=HWMeasure
	X=160
	Y=12
	FontColor=00,21,38, 255
	FontFace=#FontName#
	FontSize=36
	StringAlign=RIGHT
	AntiAlias=1
	Text=%1