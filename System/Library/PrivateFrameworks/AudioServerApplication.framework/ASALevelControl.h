/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/AudioServerApplication-Structs.h>
#import <AudioServerApplication/ASAControl.h>

@interface ASALevelControl : ASAControl

@property (assign,nonatomic) float scalarValue; 
@property (assign,nonatomic) float decibelValue; 
@property (nonatomic,readonly) float minimumDecibelValue; 
@property (nonatomic,readonly) float maximumDecibelValue; 
@property (nonatomic,readonly) AudioValueRange decibelRange; 
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(AudioValueRange)decibelRange;
-(float)scalarValue;
-(float)decibelValue;
-(float)minimumDecibelValue;
-(float)maximumDecibelValue;
-(void)setScalarValue:(float)arg1 ;
-(void)setDecibelValue:(float)arg1 ;
-(float)scalarFromDecibel:(float)arg1 ;
-(float)decibelFromScalar:(float)arg1 ;
@end

