/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString, NSArray;

@interface DECondition : NSObject {

	shared_ptr<siri::dialogengine::Condition>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Condition>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSArray * entries; 
-(NSString *)name;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(BOOL)validate:(id)arg1 ;
-(NSArray *)entries;
-(void)setEntries:(NSArray *)arg1 ;
-(void)addEntry:(id)arg1 ;
-(BOOL)evaluate:(id)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Condition>*)arg1 ;
-(shared_ptr<siri::dialogengine::Condition>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Condition>*)arg1 ;
-(shared_ptr<siri::dialogengine::Condition>*)getSharedPtr;
@end

