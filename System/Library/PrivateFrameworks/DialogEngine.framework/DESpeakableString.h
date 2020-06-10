/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:26 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DESpeakableString : NSObject {

	SpeakableString* _This;

}

@property (assign) SpeakableString* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * print; 
@property (retain) NSString * speak; 
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)speak;
-(void)setSpeak:(NSString *)arg1 ;
-(NSString *)print;
-(void)setPrint:(NSString *)arg1 ;
-(void)setThis:(SpeakableString*)arg1 ;
-(SpeakableString*)This;
-(id)initWithPrint:(id)arg1 speak:(id)arg2 ;
@end
