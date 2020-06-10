/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DialogEngine/DialogEngine-Structs.h>
@class NSString;

@interface DEParameter : NSObject {

	shared_ptr<siri::dialogengine::Parameter>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Parameter>* This;              //@synthesize This=_This - In the implementation block
@property (retain) NSString * name; 
@property (retain) NSString * type; 
@property (retain) NSString * description; 
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setDescription:(NSString *)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Parameter>*)arg1 ;
-(shared_ptr<siri::dialogengine::Parameter>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Parameter>*)arg1 ;
-(shared_ptr<siri::dialogengine::Parameter>*)getSharedPtr;
@end

