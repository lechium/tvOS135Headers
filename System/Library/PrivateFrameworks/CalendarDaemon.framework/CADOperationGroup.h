/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:03 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ClientConnection;

@interface CADOperationGroup : NSObject {

	ClientConnection* _conn;

}

@property (nonatomic,readonly) ClientConnection * conn;              //@synthesize conn=_conn - In the implementation block
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
+(id)whitelistedBundles;
-(id)initWithClientConnection:(id)arg1 ;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(ClientConnection *)conn;
@end

