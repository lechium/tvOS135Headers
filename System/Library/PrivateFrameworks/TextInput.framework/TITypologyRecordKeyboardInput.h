/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:21 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardInput, TIKeyboardState, TIKeyboardOutput, TIKeyboardConfiguration;

@interface TITypologyRecordKeyboardInput : TITypologyRecord {

	TIKeyboardInput* _input;
	TIKeyboardState* _keyboardState;
	TIKeyboardOutput* _output;
	TIKeyboardConfiguration* _keyboardConfig;

}

@property (nonatomic,retain) TIKeyboardInput * input;                               //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardOutput * output;                             //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) TIKeyboardConfiguration * keyboardConfig;              //@synthesize keyboardConfig=_keyboardConfig - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardInput *)input;
-(void)setInput:(TIKeyboardInput *)arg1 ;
-(TIKeyboardOutput *)output;
-(void)setOutput:(TIKeyboardOutput *)arg1 ;
-(id)shortDescription;
-(id)textSummary;
-(id)changedText;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIKeyboardConfiguration *)keyboardConfig;
-(void)setKeyboardConfig:(TIKeyboardConfiguration *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end

