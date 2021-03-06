/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DialogEngine/DEVariable.h>

@class NSString;

@interface DEVariableString : DEVariable

@property (readonly) NSString * printValue; 
@property (readonly) NSString * speakValue; 
-(id)init;
-(id)initWithName:(id)arg1 string:(id)arg2 ;
-(id)initWithName:(id)arg1 print:(id)arg2 speak:(id)arg3 ;
-(NSString *)printValue;
-(NSString *)speakValue;
-(void)setValuePrint:(id)arg1 speak:(id)arg2 ;
@end

