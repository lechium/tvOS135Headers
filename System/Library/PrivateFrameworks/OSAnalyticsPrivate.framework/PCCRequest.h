/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:43:45 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface PCCRequest : NSObject {

	NSString* _jid;
	NSString* _event;
	NSString* _type;
	/*^block*/id _callback;
	NSDictionary* _options;

}

@property (readonly) NSString * jid;                      //@synthesize jid=_jid - In the implementation block
@property (readonly) NSString * event;                    //@synthesize event=_event - In the implementation block
@property (readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(id)description;
-(NSDictionary *)options;
-(NSString *)type;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(NSString *)event;
-(NSString *)jid;
-(id)initWithMessage:(id)arg1 options:(id)arg2 ;
@end

