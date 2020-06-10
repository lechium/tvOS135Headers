/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:24 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CoreCECDevice;

typedef struct _NSZone* NSZoneRef;

typedef struct CECLanguage {
	unsigned char characters[3];
} CECLanguage;

typedef struct CECOSDName {
	unsigned char length;
	unsigned char characters[14];
} CECOSDName;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct CECFrame {
	unsigned char blocks[16];
	unsigned length : 5;
	unsigned reserved : 3;
} CECFrame;

typedef struct {
	unsigned matchIndex;
	unsigned long long commandArray;
	unsigned long long commandCount;
	unsigned long long repeatArray;
	unsigned long long repeatCount;
	unsigned long long command;
} SCD_Struct_Co5;

typedef struct CECChannelIdentifier {
	unsigned channelNumberFormat : 6;
	unsigned majorChannelNumber : 10;
	unsigned minorChannelNumber : 16;
} CECChannelIdentifier;

typedef struct CECUserControl {
	unsigned char command;
	CECUICommandOperand operand;
	CECChannelIdentifier channelIdentifier;
	unsigned char playMode;
	unsigned char broadcastType;
	unsigned char mediaNumber;
	unsigned char avInput;
	unsigned char audioInput;
	C) soundPresentationControl;
} CECUserControl;

typedef struct {
	unsigned char destination;
	CECUserControl control;
	BOOL isValid;
} SCD_Struct_Co8;

typedef struct {
	CoreCECDevice* sender;
	CECUserControl control;
	BOOL isValid;
} SCD_Struct_Co9;

typedef struct {
	unsigned char( field1;
	/*function pointer*/void* field2;
	= field3;
	unsigned char field4;
	unsigned char field5;
	unsigned char) field6;
} SCD_Struct_CE10;

