/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:15:39 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKSubscription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDatabaseSubscription : CKSubscription <NSSecureCoding, NSCopying>

@property (nonatomic,copy) NSString * recordType; 
+(id)new;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithSubscriptionID:(id)arg1 ;
@end

