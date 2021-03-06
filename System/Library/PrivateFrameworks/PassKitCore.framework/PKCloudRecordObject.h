/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:24:55 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PKCloudRecordObject : NSObject <NSSecureCoding> {

	NSArray* _records;

}

@property (nonatomic,readonly) NSArray * records;                               //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) NSObject*<PKCloudStoreCoding> item; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<PKCloudStoreCoding>)item;
-(NSArray *)records;
-(id)initWithRecords:(id)arg1 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(id)_descriptionWithDetailedOutput:(BOOL)arg1 ;
@end

