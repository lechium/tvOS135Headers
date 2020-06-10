/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:42:43 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString;

@interface EDAMContactsQuery : FATObject {

	NSNumber* _maxEntries;
	NSString* _prefix;

}

@property (nonatomic,retain) NSNumber * maxEntries;              //@synthesize maxEntries=_maxEntries - In the implementation block
@property (nonatomic,retain) NSString * prefix;                  //@synthesize prefix=_prefix - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSNumber *)maxEntries;
-(void)setMaxEntries:(NSNumber *)arg1 ;
@end

