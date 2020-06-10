/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:25:49 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDPurchaseHistoryQuerySortOption : NSObject <NSSecureCoding> {

	BOOL _ascending;
	NSString* _name;

}

@property (copy) NSString * name;               //@synthesize name=_name - In the implementation block
@property (assign) BOOL ascending;              //@synthesize ascending=_ascending - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)ascending;
-(void)setAscending:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 ascending:(BOOL)arg2 ;
@end

