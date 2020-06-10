/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:26:46 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSEntityMigrationPolicy.h>

@class NSMutableDictionary, NSString;

@interface CHMigrationPolicy : NSEntityMigrationPolicy {

	NSMutableDictionary* mccToISOCountryCodeMap;
	NSString* lastQueriedISOCountryCode;
	NSString* currentLocale;

}
-(id)init;
-(id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2 ;
-(id)isoCountryCodeForMCC:(id)arg1 ;
-(id)isoCountryCodeIfAbsent:(id)arg1 ;
@end

