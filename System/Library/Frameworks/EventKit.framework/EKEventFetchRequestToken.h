/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:09 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKFetchRequestToken.h>

@class EKEventStore;

@interface EKEventFetchRequestToken : NSObject <EKFetchRequestToken> {

	unsigned _token;
	EKEventStore* _eventStore;

}

@property (nonatomic,__weak,readonly) EKEventStore * eventStore;              //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) unsigned token;                                //@synthesize token=_token - In the implementation block
-(unsigned)token;
-(void)cancel;
-(EKEventStore *)eventStore;
-(id)initWithEventStore:(id)arg1 token:(int)arg2 ;
@end

