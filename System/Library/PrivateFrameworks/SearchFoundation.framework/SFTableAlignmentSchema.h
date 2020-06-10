/*
* This header is generated by classdump-dyld 1.0
* on Sunday, June 7, 2020 at 11:17:34 AM Mountain Standard Time
* Operating System: Version 13.4.5 (Build 17L562)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFTableAlignmentSchema.h>
@class NSArray, NSDictionary, NSData;


@protocol SFTableAlignmentSchema <NSObject>
@property (nonatomic,copy) NSArray * tableColumnAlignment; 
@property (nonatomic,copy) NSDictionary * metadata; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(NSDictionary *)metadata;
-(void)setMetadata:(id)arg1;
-(NSData *)jsonData;
-(NSArray *)tableColumnAlignment;
-(void)setTableColumnAlignment:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFTableAlignmentSchema : NSObject <SFTableAlignmentSchema, NSSecureCoding, NSCopying> {

	NSArray* _tableColumnAlignment;
	NSDictionary* _metadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * tableColumnAlignment;                           //@synthesize tableColumnAlignment=_tableColumnAlignment - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                  //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSArray *)tableColumnAlignment;
-(void)setTableColumnAlignment:(NSArray *)arg1 ;
@end

