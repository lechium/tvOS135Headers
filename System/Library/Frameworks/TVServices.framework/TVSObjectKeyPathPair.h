/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject, NSString;

@interface TVSObjectKeyPathPair : NSObject {

	NSObject* _observedObject;
	NSString* _keyPath;

}

@property (nonatomic,readonly) NSObject * observedObject;              //@synthesize observedObject=_observedObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath;                //@synthesize keyPath=_keyPath - In the implementation block
+(id)pairWithObject:(id)arg1 keyPath:(id)arg2 ;
-(NSString *)keyPath;
-(NSObject *)observedObject;
-(id)initWithObject:(id)arg1 keyPath:(id)arg2 ;
@end

