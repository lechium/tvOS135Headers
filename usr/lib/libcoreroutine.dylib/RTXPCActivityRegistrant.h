/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:00 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RTXPCActivityCriteria;

@interface RTXPCActivityRegistrant : NSObject {

	NSString* _identifier;
	RTXPCActivityCriteria* _criteria;
	/*^block*/id _handler;

}

@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) RTXPCActivityCriteria * criteria;              //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,copy,readonly) id handler;                               //@synthesize handler=_handler - In the implementation block
-(id)description;
-(id)init;
-(id)handler;
-(NSString *)identifier;
-(RTXPCActivityCriteria *)criteria;
-(id)initWithIdentifier:(id)arg1 criteria:(id)arg2 handler:(/*^block*/id)arg3 ;
@end
