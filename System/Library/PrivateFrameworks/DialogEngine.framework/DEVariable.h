/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEVariable : NSObject {

	shared_ptr<siri::dialogengine::Variable>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Variable>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSString * type; 
-(NSString *)name;
-(id)init;
-(BOOL)isEmpty;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)toString:(int)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(shared_ptr<siri::dialogengine::Variable>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Variable>*)arg1 ;
-(shared_ptr<siri::dialogengine::Variable>*)getSharedPtr;
@end

