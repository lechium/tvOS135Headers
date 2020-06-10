/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:12:33 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSXPCConnection;

@interface SFBehavior : NSObject {

	NSString* _family;
	NSXPCConnection* _connection;

}

@property (retain) NSString * family;                         //@synthesize family=_family - In the implementation block
@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)behaviorFamily:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(id)initBehaviorFamily:(id)arg1 connection:(id)arg2 ;
-(unsigned)ramping:(id)arg1 force:(BOOL)arg2 ;
-(BOOL)feature:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)featureEnabled:(id)arg1 ;
-(BOOL)featureDisabled:(id)arg1 ;
-(id)configurationNumber:(id)arg1 defaultValue:(id)arg2 ;
-(id)configurationString:(id)arg1 defaultValue:(id)arg2 ;
-(NSString *)family;
-(void)setFamily:(NSString *)arg1 ;
@end
